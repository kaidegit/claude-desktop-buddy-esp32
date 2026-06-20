#!/usr/bin/env python3
"""Generate per-buddy per-state documentation from src/buddies/*.cpp sprite data.

Reads each species source file, extracts its 7 state functions (sleep, idle, busy,
attention, celebrate, dizzy, heart), the named poses, sequence tables, and overlays,
then writes a Markdown file next to the source file documenting the animation.
"""

import re
from pathlib import Path

SRC_DIR = Path(__file__).parent.parent / "src" / "buddies"
OUT_DIR = SRC_DIR

STATE_ORDER = ["sleep", "idle", "busy", "attention", "celebrate", "dizzy", "heart"]


def _unescape_c_string(s: str) -> str:
    """Convert a C string literal's raw source content to the displayed string."""
    out = []
    i = 0
    while i < len(s):
        if s[i] == '\\' and i + 1 < len(s):
            nxt = s[i + 1]
            if nxt == 'n':
                out.append('\n')
            elif nxt == 't':
                out.append('\t')
            elif nxt == 'r':
                out.append('\r')
            elif nxt == '0':
                out.append('\0')
            else:
                out.append(nxt)
            i += 2
        else:
            out.append(s[i])
            i += 1
    return ''.join(out)


def _find_matching_brace(text: str, start: int) -> int:
    """Return index of the '}' matching the '{' at *start*, respecting strings."""
    depth = 0
    in_string = False
    i = start
    while i < len(text):
        ch = text[i]
        if in_string:
            if ch == '\\' and i + 1 < len(text):
                i += 1
            elif ch == '"':
                in_string = False
        else:
            if ch == '"':
                in_string = True
            elif ch == '{':
                depth += 1
            elif ch == '}':
                depth -= 1
                if depth == 0:
                    return i
        i += 1
    return -1


def parse_string_array(text: str) -> dict[str, list[str]]:
    """Extract static const char* const NAME[N] = { ... } arrays."""
    arrays = {}
    header = re.compile(
        r'static\s+const\s+char\*\s+const\s+(\w+)\s*\[\s*\d+\s*\]\s*=\s*\{',
        re.DOTALL,
    )
    string_lit = re.compile(r'"((?:[^"\\]|\\.)*)"')
    for m in header.finditer(text):
        name = m.group(1)
        open_brace = m.end() - 1  # position of '{'
        close_brace = _find_matching_brace(text, open_brace)
        if close_brace == -1:
            continue
        body = text[open_brace + 1:close_brace]
        strings = [_unescape_c_string(s) for s in string_lit.findall(body)]
        arrays[name] = strings
    return arrays


def extract_comments(text: str) -> list[str]:
    """Return real // comments from *text*, ignoring // inside string literals."""
    comments = []
    in_string = False
    i = 0
    while i < len(text) - 1:
        ch = text[i]
        nxt = text[i + 1]
        if in_string:
            if ch == '\\' and i + 1 < len(text):
                i += 1
            elif ch == '"':
                in_string = False
        else:
            if ch == '"':
                in_string = True
            elif ch == '/' and nxt == '/':
                end = text.find('\n', i + 2)
                if end == -1:
                    end = len(text)
                comments.append(text[i + 2:end].strip())
                i = end
                continue
        i += 1
    return comments


def parse_int8_array(text: str) -> dict[str, list[int]]:
    """Extract static const int8_t NAME[] = { ... } arrays."""
    arrays = {}
    pattern = re.compile(
        r'static\s+const\s+int8_t\s+(\w+)\[\]\s*=\s*\{([^}]+)\}',
        re.DOTALL,
    )
    for m in pattern.finditer(text):
        name = m.group(1)
        body = m.group(2)
        nums = [int(x) for x in re.findall(r'-?\d+', body)]
        arrays[name] = nums
    return arrays


def parse_uint8_array(text: str) -> dict[str, list[int]]:
    """Extract static const uint8_t NAME[] = { ... } arrays."""
    arrays = {}
    pattern = re.compile(
        r'static\s+const\s+uint8_t\s+(\w+)\[\]\s*=\s*\{([^}]+)\}',
        re.DOTALL,
    )
    for m in pattern.finditer(text):
        name = m.group(1)
        body = m.group(2)
        nums = [int(x) for x in re.findall(r'\d+', body)]
        arrays[name] = nums
    return arrays


def parse_state_functions(text: str) -> dict[str, str]:
    """Return mapping from lower-case state name to function body text."""
    states: dict[str, str] = {}
    for state in STATE_ORDER:
        # function names are camel-case: doSleep, doIdle, etc.
        fn_name = "do" + state.capitalize()
        # Match from the comment line before the function through to its closing brace.
        pattern = re.compile(
            rf'(//\s*───\s*{state.upper()}\s*───.*?)?'
            rf'static\s+void\s+{fn_name}\s*\(uint32_t\s+t\)\s*\{{'
            rf'.*?\n\}}',
            re.IGNORECASE | re.DOTALL,
        )
        m = pattern.search(text)
        if m:
            states[state] = m.group(0)
        else:
            # Fallback: just find function by name.
            pattern2 = re.compile(
                rf'static\s+void\s+{fn_name}\s*\(uint32_t\s+t\)\s*\{{.*?\n\}}',
                re.DOTALL,
            )
            m2 = pattern2.search(text)
            if m2:
                states[state] = m2.group(0)
    return states


def parse_species_info(text: str) -> dict:
    """Parse species name, body color and state function order."""
    info = {"name": None, "color": None, "state_names": []}
    ns_match = re.search(r'namespace\s+(\w+)\s*\{', text)
    if ns_match:
        info["namespace"] = ns_match.group(1)

    species_match = re.search(
        r'extern\s+const\s+Species\s+(\w+)\s*=\s*\{\s*"([^"]+)"\s*,\s*(0x[0-9A-Fa-f]+)\s*,\s*\{([^}]+)\}',
        text,
        re.DOTALL,
    )
    if species_match:
        info["struct_name"] = species_match.group(1)
        info["name"] = species_match.group(2)
        info["color"] = species_match.group(3)
        refs = re.findall(r'(\w+)::do(\w+)', species_match.group(4))
        info["state_names"] = [fn.lower() for _, fn in refs]
    return info


def format_sprite(lines: list[str]) -> str:
    """Return a code block rendering the sprite lines."""
    if not lines:
        return ""
    # Keep trailing spaces visible by not stripping.
    width = max(len(line) for line in lines)
    rendered = [line + " " * (width - len(line)) for line in lines]
    return "```text\n" + "\n".join(rendered) + "\n```"


def generate_buddy_doc(src_path: Path) -> str:
    text = src_path.read_text(encoding="utf-8")
    info = parse_species_info(text)
    states = parse_state_functions(text)

    out = []
    out.append(f"# {info['name'] or src_path.stem}\n")
    out.append(f"- **Source:** `{src_path.relative_to(src_path.parent.parent.parent)}`")
    out.append(f"- **Namespace:** `{info.get('namespace', '-')}`")
    out.append(f"- **Body color:** `{info['color'] or '-'}`")
    out.append(f"- **States:** {', '.join(STATE_ORDER)}\n")

    for state in STATE_ORDER:
        body = states.get(state)
        if not body:
            out.append(f"## {state.capitalize()}\n")
            out.append("*State function not found.*\n")
            continue

        # Extract the header comment line.
        header_match = re.search(r'//\s*───\s*[^\n]+', body)
        header = header_match.group(0).strip("/ \n") if header_match else state.upper()
        out.append(f"## {state.capitalize()}\n")
        out.append(f"_{header}_\n")

        arrays = parse_string_array(body)
        seq_arrays = parse_uint8_array(body)
        int8_arrays = parse_int8_array(body)

        # The P array maps indices to pose array names.
        p_match = re.search(
            r'const\s+char\*\s+const\*\s+P\s*\[\s*\d+\s*\]\s*=\s*\{([^}]+)\}',
            body,
        )
        pose_names: list[str] = []
        if p_match:
            pose_names = [n.strip() for n in re.findall(r'(\w+)', p_match.group(1))]

        seq = seq_arrays.get("SEQ", [])
        x_shift = int8_arrays.get("X_SHIFT", [])
        y_shift = int8_arrays.get("Y_SHIFT", [])
        y_bob = int8_arrays.get("Y_BOB", [])

        out.append(f"- **Sequence length:** {len(seq)} beats")
        if seq:
            out.append(f"- **Sequence:** `{seq}`")
        if x_shift:
            out.append(f"- **X shift:** `{x_shift}`")
        if y_shift:
            out.append(f"- **Y shift:** `{y_shift}`")
        if y_bob:
            out.append(f"- **Y bob:** `{y_bob}`")
        out.append("")

        # List each unique pose used in this state.
        unique_poses = []
        for name in pose_names:
            if name not in unique_poses:
                unique_poses.append(name)

        if unique_poses:
            out.append("### Poses\n")
            for name in unique_poses:
                out.append(f"#### `{name}`")
                out.append(format_sprite(arrays.get(name, [])))
                out.append("")

        # Mention any overlay hints detected in comments.
        overlay_comments = extract_comments(body)
        # Skip the header comment and pure dividers.
        overlays = [
            c
            for c in overlay_comments
            if not c.startswith("───")
            and c
        ]
        if overlays:
            out.append("### Overlays / effects\n")
            for c in overlays:
                out.append(f"- {c}")
            out.append("")

    return "\n".join(out) + "\n"


def parse_species_name(src_path: Path) -> str:
    text = src_path.read_text(encoding="utf-8")
    info = parse_species_info(text)
    return info.get("name") or src_path.stem


def generate_index(species: list[tuple[str, Path]]) -> str:
    lines = [
        "# Buddy Species Documentation",
        "",
        "Auto-generated from `src/buddies/*.cpp`. Each file below lists the 7",
        "persona states (`sleep`, `idle`, `busy`, `attention`, `celebrate`, `dizzy`, `heart`),",
        "their animation sequences, sprite poses, and overlay effects.",
        "",
        "| Buddy | Document |",
        "|-------|----------|",
    ]
    for name, md_path in species:
        lines.append(f"| `{name}` | [{md_path.name}]({md_path.name}) |")
    lines.append("")
    lines.append("---")
    lines.append("")
    lines.append("Run `python3 tools/generate_buddy_docs.py` to regenerate these files.")
    lines.append("")
    return "\n".join(lines)


def main() -> None:
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    species: list[tuple[str, Path]] = []
    for cpp_path in sorted(SRC_DIR.glob("*.cpp")):
        md = generate_buddy_doc(cpp_path)
        out_path = OUT_DIR / f"{cpp_path.stem}.md"
        out_path.write_text(md, encoding="utf-8")
        print(f"Generated {out_path.relative_to(Path.cwd())}")
        species.append((parse_species_name(cpp_path), out_path))

    index_path = OUT_DIR / "README.md"
    index_path.write_text(generate_index(species), encoding="utf-8")
    print(f"Generated {index_path.relative_to(Path.cwd())}")


if __name__ == "__main__":
    main()
