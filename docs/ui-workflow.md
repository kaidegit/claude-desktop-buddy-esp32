# UI 工作流文档

本文档描述 `claude-desktop-buddy-esp32` 固件当前的 UI 工作流，覆盖显示模式、输入处理、状态机、睡眠/唤醒、菜单、宠物渲染、权限提示等核心流程。

## 1. 整体架构

- **主循环**：`src/main.cpp` 的 `loop()` 是 UI 的核心调度器。
- **画布**：所有 UI 先绘制到一块逻辑 canvas（`Arduino_Canvas`），再由 `hwDisplayPush()` 按板子特定方式刷到物理面板。
  - AMOLED 板：184×224 逻辑画布，放大/居中到物理面板。
  - Xueersi ESP32：160×128 逻辑画布，1:1 输出。
- **布局适配**：`src/ui_layout.h` 通过 `LANDSCAPE_UI` 宏区分两种布局：
  - 横屏（Xueersi，160×128）
  - 竖屏（AMOLED，184×224）
- **输入源**：物理按键 A/B、AXP 电源键事件、触摸屏（部分板子支持）。
- **数据来源**：USB 串口或 BLE Nordic UART Service 接收桌面端 JSON 心跳。

## 2. 显示模式（DisplayMode）

```cpp
enum DisplayMode { DISP_NORMAL, DISP_PET, DISP_INFO, DISP_COUNT };
```

| 模式 | 含义 |
|------|------|
| `DISP_NORMAL` | 主屏，显示宠物/角色 + HUD/时钟 |
| `DISP_PET` | 宠物状态页，2 页（状态 + 玩法说明） |
| `DISP_INFO` | 信息页，6 页（About、Buttons、Claude、Device、Bluetooth、Credits） |

模式切换：
- **A 键短按**在无提示、无菜单时循环 `NORMAL → PET → INFO → NORMAL`。
- **纵向滑动手势**把三个模式拉平成 9 页循环：Normal → Pet 1/2 → Pet 2/2 → Info 1/6 → ... → Info 6/6 → 回到 Normal。
- 进入/退出模式时调用 `applyDisplayMode()`，设置角色/宠物的 peek 状态并清屏。

## 3. 主屏与 Clocking 模式

### 3.1 主屏内容

- **上部**：宠物/角色动画。
- **下部**：
  - 如果有权限提示，显示 approval 覆盖层。
  - 否则如果 `settings().hud` 开启，显示 HUD（最近消息/转录）。
  - 否则进入 clocking 模式时显示时钟。

### 3.2 Clocking 条件

当同时满足：
- 当前为 `DISP_NORMAL`
- 没有菜单/设置/重置/权限提示
- `sessionsRunning == 0 && sessionsWaiting == 0`
- RTC 已同步（`dataRtcValid()`）

则进入 clocking 模式：
- 竖屏：上方宠物缩小为 peek，下方显示数字时钟和日期。
- 横屏：时钟显示在底部 footer 区域（宠物保持完整大小）。

### 3.3 Clocking 下的情绪节奏

- 无近期交互时，根据时间自动在 `P_SLEEP` 和 `P_IDLE` 之间切换：
  - 22:00–07:00：大部分时间为 sleep，偶尔 idle。
  - 白天：大部分时间为 idle，偶尔 sleep。
- 近期被触摸/滑动后进入 `PLAYFUL` 窗口（3 分钟），循环播放 idle/heart/celebrate 等反应动画。

## 4. 角色与宠物渲染

### 4.1 两种显示方式

1. **GIF 角色**（`src/character.cpp`）
   - 从 `/characters/<name>/` 读取 manifest 和 GIF。
   - 每个 `PersonaState` 对应一张 GIF。
   - 支持 peek（小图）和 home（大图）两种尺寸。

2. **ASCII 宠物**（`src/buddy.cpp` + `src/buddies/*.cpp`）
   - 18 个物种，每个物种有 7 个状态函数。
   - 通过 `settings → ascii pet` 循环切换，或在 clocking 模式下滑动手势切换。

### 4.2 模式选择

- 开机时如果检测到已安装 GIF 角色，默认使用 GIF 模式。
- 否则回退到 ASCII 宠物。
- 用户可通过设置菜单切换。

## 5. 状态机（PersonaState）

```cpp
enum PersonaState { P_SLEEP, P_IDLE, P_BUSY, P_ATTENTION, P_CELEBRATE, P_DIZZY, P_HEART };
```

### 5.1 基础状态推导

`derive(tama)` 根据桌面状态决定：

| 条件 | 状态 |
|------|------|
| 未连接 | P_IDLE |
| `sessionsWaiting > 0` | P_ATTENTION |
| 刚完成一个 turn | P_CELEBRATE |
| `sessionsRunning >= 3` | P_BUSY |
| 其他已连接状态 | P_IDLE |

### 5.2 一次性动画（One-shot）

通过 `triggerOneShot(state, durMs)` 临时覆盖基础状态：
- 快速批准（<5 秒）→ `P_HEART`
- 升级 → `P_CELEBRATE`
- 摇晃设备 → `P_DIZZY`
- 触摸宠物 → `P_HEART`

一次性动画超时后自动回到 `activeState = baseState`。

### 5.3 注意提示

当 `activeState == P_ATTENTION` 且 LED 设置开启时：
- AMOLED：屏幕顶部显示红色提示条。
- 伴随蜂鸣器提示音。

## 6. 权限提示（Approval）流程

1. 桌面端在心跳 JSON 中发送 `prompt` 字段。
2. `main.cpp` 检测到新的 `promptId`：
   - 蜂鸣器响 1200Hz/80ms。
   - 强制切回 `DISP_NORMAL`。
   - 关闭所有菜单。
   - 唤醒屏幕。
3. 屏幕底部显示 approval 覆盖层：
   - 工具名（如 Bash）
   - 操作提示（如 `rm -rf /tmp/foo`）
   - 等待秒数（超过 10 秒变红）
   - A 批准 / B 拒绝
4. 用户响应：
   - **A 键短按**或**触摸 approval 上半部分** → 发送 `{"cmd":"permission","id":"...","decision":"once"}`
   - **B 键短按**或**触摸 approval 下半部分** → 发送 `decision":"deny"`
5. `responseSent = true` 后显示 "sent..."，等待下一次心跳清空 `promptId`。

## 7. 输入处理

### 7.1 按键

| 按键 | 动作 |
|------|------|
| A 短按 | 循环显示模式；在菜单/设置/重置中作为 "下一项" |
| A 长按（600ms） | 打开/关闭主菜单；在子菜单中作为 "返回" |
| B 短按 | 在 Info/Pet 中翻页；在菜单中作为 "确认"；在正常模式下滚动 HUD |
| 电源键长按（~1s，AXP） | 开关屏幕 |
| 电源键超长按（6s） | 关机 |

**防误触**：用按键唤醒屏幕时，该按键的本次完整按下周期会被 "吞掉"，不会触发模式切换或菜单。

### 7.2 触摸手势

所有触摸处理在按键处理后额外生效。

| 场景 | 手势 | 动作 |
|------|------|------|
| 有 approval | 上半部分点击 | 批准 |
| 有 approval | 下半部分点击 | 拒绝 |
| 菜单/设置/重置打开 | 点击对应行 | 选中并直接确认 |
| 非菜单/非提示 | 纵向滑动（>40px，垂直方向为主） | 9 页循环翻页 |
| clocking 模式 | 横向滑动（>40px，水平方向为主） | 切换宠物物种/GIF |
| 非 clocking 的 normal 模式 | 点击宠物身体区域 | 触发 heart 动画 |
| normal 模式 | 点击底部 HUD 区域 | 滚动消息 |
| Info/Pet 模式 | 点击右上角页码 | 翻页 |

## 8. 菜单系统

### 8.1 主菜单（6 项）

1. settings — 打开设置
2. turn off — 关机
3. help — 跳转到 Info 的 Buttons 页
4. about — 跳转到 Info 的 Credits 页
5. demo — 切换演示模式
6. close — 关闭菜单

### 8.2 设置菜单（10 项）

1. brightness — 亮度 0–4 循环
2. sound — 开关声音
3. bluetooth — 开关蓝牙偏好（BLE 保持运行）
4. wifi — 开关 WiFi 偏好（当前无 WiFi 栈）
5. led — 开关注意指示灯
6. transcript — 开关 HUD 转录
7. clock rot — 时钟方向（auto / port / land）
8. ascii pet — 切换宠物/GIF
9. reset — 进入重置菜单
10. back — 返回

### 8.3 重置菜单（3 项）

1. delete char — 删除 `/characters/` 目录并重启
2. factory reset — 清空 NVS、格式化 LittleFS、清除 BLE 配对并重启
3. back — 返回

**双击确认**：危险操作第一次点击显示 "really?"，3 秒内再次点击才执行。

## 9. HUD 转录

- 桌面端通过 `entries` 数组发送最近消息。
- `drawHUD()` 将多行重新拼接并按屏幕宽度自动换行。
- 最新行高亮显示，旧行变暗。
- 支持滚动查看历史（B 键短按或点击底部）。
- 消息更新时自动滚动到最新。

## 10. 睡眠、唤醒与省电

### 10.1 唤醒

任何按键、触摸、新消息、新权限提示都会调用 `wake()`：
- 如果屏幕关闭，点亮屏幕并恢复亮度。
- 如果处于 dim，恢复亮度。
- 更新 `lastInteractMs`。

### 10.2 面朝下小睡（Nap）

- IMU 检测面朝下（Z 轴负向为主，X/Y 很小）。
- 连续约 15 帧确认后进入 nap：
  - 亮度调到 0。
  - 暂停动画渲染。
  - 开始累计睡眠时间。
- 翻转回正面约 8 帧后结束 nap，累计睡眠时间写入 stats。

### 10.3 自动熄屏

- **USB 供电**：永不自动熄屏（时钟可常亮）。
- **电池 + clocking**：5 分钟无交互熄屏。
- **电池 + 非 clocking 空闲**：30 秒无交互熄屏。
- 熄屏期间 loop 降到 200ms，触摸/按键 IRQ 可立即唤醒。

### 10.4 烧屏缓解

每 5 分钟强制重绘一次完整画布，避免 OLED 长时间固定图案烧屏。

## 11. 数据流

1. 桌面端通过 BLE 或 USB 串口发送 JSON 心跳。
2. `dataPoll(&tama)` 解析 JSON 并填充 `TamaState`：
   - 会话统计
   - 消息/转录
   - 权限提示
   - 时间同步（设置 RTC）
3. `loop()` 根据 `tama` 推导基础情绪状态。
4. 渲染层根据状态绘制角色/宠物、HUD、approval 等。
5. 用户通过按键/触摸做出响应，通过 `sendCmd()` 回发 JSON 给桌面端。

## 12. 渲染流水线

每一帧 `loop()` 的渲染顺序：

1. 清屏/重绘宠物或 GIF 角色（根据 `buddyMode` 和 `characterLoaded`）。
2. 如果有 BLE 配对码，显示配对码界面。
3. 否则如果是 clocking 模式，绘制时钟。
4. 否则如果是 `DISP_INFO`，绘制信息页。
5. 否则如果是 `DISP_PET`，绘制宠物状态页。
6. 否则如果 HUD 开启，绘制 HUD（approval 优先于 HUD）。
7. 如果有重置/设置/主菜单打开，在最上层绘制对应面板。
8. 调用 `hwDisplayPush()` 将 canvas 刷到物理屏幕。

## 13. 板级差异对 UI 的影响

| 特性 | AMOLED 竖屏 | Xueersi 横屏 |
|------|-------------|--------------|
| 逻辑分辨率 | 184×224 | 160×128 |
| 触摸 | 有 | 无 |
| 时钟位置 | 屏幕下部 | 底部 footer |
| 宠物大小 | 2× home scale | 1× |
| 菜单行高 | 14px | 10px |
| approval 高度 | 78px | 52px |
| 安全边距 | 有（圆角/圆形 bezel） | 无 |

## 14. 调试/演示模式

- `demo` 设置项开启后，固件每 8 秒自动循环一组伪造的桌面状态（asleep / one idle / busy / attention / completed），方便离线测试 UI。

---

本文档随代码同步维护，关键实现入口：
- `src/main.cpp`：`loop()`、所有 `draw*()` 函数、输入处理。
- `src/ui_layout.h`：布局常量。
- `src/hw/display.cpp`：canvas 与物理面板的推送。
- `src/hw/input.cpp`：按键与触摸扫描。
- `src/character.cpp` / `src/buddy.cpp`：角色与宠物渲染。
- `src/data.h`：桌面 JSON 解析与状态填充。
