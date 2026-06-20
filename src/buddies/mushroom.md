# mushroom

- **Source:** `src/buddies/mushroom.cpp`
- **Namespace:** `mushroom`
- **Body color:** `0xF810`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses_

- **Sequence length:** 24 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 1, 0, 1, 0, 1, 3, 4, 3, 4, 3, 4, 3, 3, 1, 5, 1, 1]`

### Poses

#### `TUCK`
```text
            
 .-o-OO-o-. 
(__________)
   |-  - |  
   |____|   
```

#### `BREATHE`
```text
            
 .-O-oo-O-. 
(__________)
   |-  - |  
   |____|   
```

#### `DEEP`
```text
            
 .-o-oo-o-. 
(__________)
   |_  _ |  
   |____|   
```

#### `LEAN`
```text
            
  .-o-OO-o-.
  (________)
    |-  -| /
    |____|  
```

#### `LEAN_Z`
```text
            
  .-o-OO-o-.
  (________)
    |z  z| /
    |____|  
```

#### `MUMBLE`
```text
            
 .-O-OO-O-. 
(__________)
   |o  o |  
   |____|   
```

### Overlays / effects

- Z particles drift up-right

## Idle

_─── IDLE ───  ~14s cycle, 10 poses_

- **Sequence length:** 30 beats
- **Sequence:** `[0, 0, 0, 1, 0, 2, 0, 4, 0, 5, 0, 0, 6, 7, 6, 7, 0, 0, 3, 3, 0, 4, 8, 8, 0, 0, 9, 9, 0, 0]`

### Poses

#### `REST`
```text
            
 .-o-OO-o-. 
(__________)
   |o   o|  
   |____|   
```

#### `LOOK_L`
```text
            
 .-o-OO-o-. 
(__________)
   |o  o |  
   |____|   
```

#### `LOOK_R`
```text
            
 .-o-OO-o-. 
(__________)
   | o  o|  
   |____|   
```

#### `LOOK_U`
```text
            
 .-o-OO-o-. 
(__________)
   |^   ^|  
   |____|   
```

#### `BLINK`
```text
            
 .-o-OO-o-. 
(__________)
   |-   -|  
   |____|   
```

#### `CAP_BOB`
```text
            
 .-O-oo-O-. 
(__________)
   |o   o|  
   |____|   
```

#### `SPORE_A`
```text
  . o .  .  
 .-o-OO-o-. 
(__________)
   |o   o|  
   |____|   
```

#### `SPORE_B`
```text
 o  .  o .  
 .-O-oo-O-. 
(__________)
   |o   o|  
   |____|   
```

#### `SHIVER`
```text
            
 .~o-OO-o~. 
(~~~~~~~~~~)
   |o   o|  
   |____|   
```

#### `SWAY`
```text
            
  .-o-OO-o-.
  (________)
   |o   o|  
   |____|   
```

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + dot ticker_

- **Sequence length:** 21 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 2, 0, 1, 0, 1, 3, 3, 2, 4, 0, 1, 0, 1, 5]`

### Poses

#### `SCAN_A`
```text
            
 .-o-OO-o-. 
(__________)
   |v   v|  
  /|____|\  
```

#### `SCAN_B`
```text
            
 .-o-OO-o-. 
(__________)
   |v   v|  
  \|____|/  
```

#### `THINK`
```text
      ?     
 .-O-oo-O-. 
(__________)
   |^   ^|  
   |____|   
```

#### `READ`
```text
    [_]     
 .-o-OO-o|. 
(________|_)
   |o   o|  
   |____|   
```

#### `AHA`
```text
      *     
 .-O-OO-O-. 
(__________)
   |O   O|  
  /|____|\  
```

#### `PHEW`
```text
    ~~~     
 .-o-OO-o-. 
(__________)
   |-   -|  
   |____|   
```

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
            
 /^o-OO-o^\ 
(__________)
   |O   O|  
   |____|   
```

#### `SCAN_L`
```text
            
 /^o-OO-o^\ 
(__________)
   |O  O |  
   |____|   
```

#### `SCAN_R`
```text
            
 /^o-OO-o^\ 
(__________)
   | O  O|  
   |____|   
```

#### `SCAN_U`
```text
            
 /^o-OO-o^\ 
(__________)
   |^   ^|  
   |____|   
```

#### `TENSE`
```text
    ^  ^    
/^^o-OO-o^^\
(__________)
   |O   O|  
  /|____|\  
```

#### `HUSH`
```text
            
 /^o-OO-o^\ 
(__________)
   |o   o|  
   |____|   
```

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses + confetti rain_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -6, -3, 0, 0, 0, 0, 0, 0, -3, -6, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
 .-o-OO-o-. 
(__________)
   |^   ^|  
  /|____|\  
```

#### `JUMP`
```text
  \(    )/  
 .-o-OO-o-. 
(__________)
   |^   ^|  
   |____|   
```

#### `PEAK`
```text
  \^    ^/  
 .-O-OO-O-. 
(__________)
   |^   ^|  
   |____|   
```

#### `SPIN_L`
```text
            
 .-o-OO-o-. 
(__________)
  <|<   <|  
   |____|   
```

#### `SPIN_R`
```text
            
 .-o-OO-o-. 
(__________)
   |>   >|> 
   |____|   
```

#### `POSE`
```text
    \__/    
 .-O-OO-O-. 
(__________)
   |^   ^|  
 /|____|\   
```

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses + orbiting stars_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
            
.-o-OO-o-.  
(________)  
  |@   @|   
  |____|    
```

#### `TILT_R`
```text
            
  .-o-OO-o-.
  (________)
    |@   @| 
    |____|  
```

#### `WOOZY`
```text
            
 .~o-OO-o~. 
(~~~~~~~~~~)
   |x   @|  
   |~v~~|   
```

#### `WOOZY2`
```text
            
 .~o-OO-o~. 
(~~~~~~~~~~)
   |@   x|  
   |~~v~|   
```

#### `STUMBLE`
```text
            
 .-o-OO-o-. 
(__________)
   |@   @|  
 /-|_---_|\ 
```

## Heart

_─── HEART ───  ~10s cycle, 5 poses + rising heart stream_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
            
 .-o-OO-o-. 
(__________)
   |^   ^|  
   |____|   
```

#### `BLUSH`
```text
            
 .-o-OO-o-. 
(__________)
  #|^   ^|# 
   |____|   
```

#### `EYES_C`
```text
            
 .-O-oo-O-. 
(__________)
   |<3 <3|  
   |____|   
```

#### `TWIRL`
```text
            
 .-O-OO-O-. 
(__________)
   |@   @|  
  /|____|\  
```

#### `SIGH`
```text
            
 .-o-OO-o-. 
(__________)
   |-   -|  
   |^^^^|   
```

