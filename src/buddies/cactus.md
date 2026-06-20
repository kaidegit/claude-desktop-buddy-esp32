# cactus

- **Source:** `src/buddies/cactus.cpp`
- **Namespace:** `cactus`
- **Body color:** `0x07E0`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses_

- **Sequence length:** 24 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 1, 0, 1, 0, 1, 3, 3, 4, 4, 3, 4, 0, 0, 1, 5, 1, 1]`

### Poses

#### `DROOP`
```text
            
    ____    
   |--  |   
   |_  _|   
    |  |    
```

#### `BREATHE`
```text
            
    ____    
 . |--  |.  
   |_  _|   
    |  |    
```

#### `SNORE`
```text
            
    ____    
   |~~  |   
   |_  _|   
   ~|  |~   
```

#### `SAG_L`
```text
            
    ____    
 \ |--  |   
  \|_  _|   
    |  |    
```

#### `SAG_R`
```text
            
    ____    
   |--  | / 
   |_  _|/  
    |  |    
```

#### `DEEP`
```text
            
            
    ____    
   |--  |   
   |_  _|   
```

### Overlays / effects

- Z particles drift up-right

## Idle

_─── IDLE ───  ~14s cycle, 10 poses_

- **Sequence length:** 33 beats
- **Sequence:** `[0, 0, 0, 1, 0, 2, 0, 4, 0, 3, 0, 0, 5, 5, 0, 6, 6, 0, 0, 7, 8, 7, 8, 0, 9, 9, 0, 4, 0, 0, 1, 2, 0]`

### Poses

#### `REST`
```text
            
 n  ____  n 
 | |o  o| | 
 |_|    |_| 
   |    |   
```

#### `LOOK_L`
```text
            
 n  ____  n 
 | |o   o|  
 |_|    |_| 
   |    |   
```

#### `LOOK_R`
```text
            
 n  ____  n 
 | | o  o|  
 |_|    |_| 
   |    |   
```

#### `LOOK_U`
```text
            
 n  ____  n 
 | |^  ^| | 
 |_|    |_| 
   |    |   
```

#### `BLINK`
```text
            
 n  ____  n 
 | |-  -| | 
 |_|    |_| 
   |    |   
```

#### `WAVE_L`
```text
  \         
   \____  n 
 n |o  o| | 
 |_|    |_| 
   |    |   
```

#### `WAVE_R`
```text
         /  
 n  ____/   
 | |o  o| n 
 |_|    |_| 
   |    |   
```

#### `SWAY_L`
```text
            
n   ____  n 
| |o  o| |  
 |_|    |_| 
   |    |   
```

#### `SWAY_R`
```text
            
 n  ____   n
 | |o  o| | 
 |_|    |_| 
    |    |  
```

#### `HUM`
```text
      o     
 n  ____  n 
 | |- -| |  
 |_|  o |_| 
   |    |   
```

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + sap-drip ticker_

- **Sequence length:** 21 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 2, 0, 1, 0, 1, 3, 3, 2, 4, 0, 1, 0, 1, 5]`

### Poses

#### `FOCUS`
```text
            
 n  ____  n 
 | |v  v| | 
 |_|  --|_| 
   |    |   
```

#### `SQUINT`
```text
            
 n  ____  n 
 | |- -| |  
 |_|  __|_| 
   |    |   
```

#### `THINK`
```text
      ?     
 n  ____  n 
 | |^  ^| | 
 |_|  ..|_| 
   |    |   
```

#### `SCRIBE`
```text
            
 n  ____  /=
 | |o  o|/  
 |_|  --|_| 
   |    |   
```

#### `EUREKA`
```text
      *     
 n  ____  n 
 | |O  O| | 
 |_|  ^^|_| 
   |    |   
```

#### `RECHECK`
```text
      .     
 n  ____  n 
 | |o  o| | 
 |_|  --|_| 
   |    |   
```

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse + bristling spines_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `BRISTLE`
```text
 *  ____  *  
 n *|O  O|* n
 |*|    |*|  
 |_|    |_|  
  *|    |*   
```

#### `SCAN_L`
```text
 *  ____  *  
 n *|O  O|* n
 |*|O    |   
 |_|    |_|  
  *|    |*   
```

#### `SCAN_R`
```text
 *  ____  *  
 n *|O  O|* n
 |*|    O|*| 
 |_|    |_|  
  *|    |*   
```

#### `TALL`
```text
 *  ^^^^  *  
 n *|O  O|* n
 |*|    |*|  
 |_|    |_|  
  *|    |*   
```

#### `SHARP`
```text
*** **** ***
*n*|O  O|*n*
*|*|    |*|*
*|_|    |_|*
 *|    |*   
```

#### `HUSH`
```text
 *  ____  *  
 n *|o  o|* n
 |*|    |*|  
 |_|  . |_|  
  *|    |*   
```

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses + flower bloom + confetti_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -6, -3, 0, 0, 0, 0, 0, 0, -3, -6, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
 n  ____  n 
 | |^  ^| | 
 |_|  ww|_| 
  /|    |\  
```

#### `HOP`
```text
    .--.    
 \  ____  / 
  \|^  ^|/  
 |_|  ww|_| 
   |    |   
```

#### `PEAK`
```text
    (**)    
  \ ____ /  
 \ |^  ^| / 
  ||  ww||  
   |    |   
```

#### `SPIN_L`
```text
            
<n  ____  n 
 | |<  <| | 
 |_|    |_| 
  /|    |   
```

#### `SPIN_R`
```text
            
 n  ____  n>
 | |>  >| | 
 |_|    |_| 
   |    |\  
```

#### `BLOOM`
```text
    @--@    
 n  \__/  n 
 | |^  ^| | 
 |_|  WW|_| 
  /|    |\  
```

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses + orbiting stars + spine wobble_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
            
n  ____   n 
| |@  @|  | 
 |_|~~  |_| 
   |    |   
```

#### `TILT_R`
```text
            
 n   ____  n
 |  |@  @| |
 |_|  ~~|_| 
   |    |   
```

#### `WOOZY`
```text
            
 n  ____  n 
 | |x  @| | 
 |_|  ~v|_| 
   /    \   
```

#### `WOOZY2`
```text
            
 n  ____  n 
 | |@  x| | 
 |_|  v~|_| 
   \    /   
```

#### `STUMBLE`
```text
            
 n  ____  n 
 | |@  @| | 
 |_|  --|_| 
  /-|  |-\  
```

## Heart

_─── HEART ───  ~10s cycle, 5 poses + rising heart stream + flower_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
    @       
 n  ____  n 
 | |^  ^| | 
 |_|  ww|_| 
   |    |   
```

#### `BLUSH`
```text
    @       
 n  ____  n 
 |#|^  ^|#| 
 |_|  ww|_| 
   |    |   
```

#### `EYES_C`
```text
    @--@    
 n  \__/  n 
 | |<3<3| | 
 |_|  ww|_| 
   |    |   
```

#### `TWIRL`
```text
       @    
 n  ____  n 
 | |@  @| | 
 |_|  ww|_| 
  /|    |\  
```

#### `SIGH`
```text
    @       
 n  ____  n 
 | |- -| |  
 |_|  ^^|_| 
   |    |   
```

