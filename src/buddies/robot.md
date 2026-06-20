# robot

- **Source:** `src/buddies/robot.cpp`
- **Namespace:** `robot`
- **Body color:** `0xC618`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses, robot in low-power mode_

- **Sequence length:** 25 beats
- **Sequence:** `[0, 1, 2, 1, 0, 1, 2, 1, 0, 0, 3, 3, 4, 4, 4, 3, 0, 1, 2, 1, 0, 5, 0, 1, 0]`

### Poses

#### `PWR_DN`
```text
            
   .[__].   
  [ -    - ]
  [ ____ ]  
  `------'  
```

#### `DIM_A`
```text
            
   .[..].   
  [ .    . ]
  [ ____ ]  
  `------'  
```

#### `DIM_B`
```text
            
   .[  ].   
  [        ]
  [ ____ ]  
  `------'  
```

#### `PING`
```text
            
   .[||].   
  [ -    - ]
  [ z__z ]  
  `------'  
```

#### `DREAM`
```text
    .[*].   
   .[||].   
  [ -    - ]
  [ zzzz ]  
  `------'  
```

#### `REBOOT`
```text
            
   .[..].   
  [ o    - ]
  [ ____ ]  
  `------'  
```

### Overlays / effects

- Z particles drift up-right (low power beeps)

## Idle

_─── IDLE ───  ~14s cycle, 10 poses with stiff mechanical motion_

- **Sequence length:** 30 beats
- **Sequence:** `[0, 0, 1, 1, 0, 2, 2, 0, 3, 0, 0, 4, 5, 4, 5, 0, 6, 7, 6, 7, 0, 0, 8, 8, 0, 9, 9, 0, 3, 0]`

### Poses

#### `REST`
```text
            
   .[||].   
  [ o    o ]
  [ ==== ]  
  `------'  
```

#### `SCAN_L`
```text
            
   .[||].   
  [o     o ]
  [ ==== ]  
  `------'  
```

#### `SCAN_R`
```text
            
   .[||].   
  [ o     o]
  [ ==== ]  
  `------'  
```

#### `BLINK`
```text
            
   .[||].   
  [ -    - ]
  [ ==== ]  
  `------'  
```

#### `ANT_L`
```text
            
   .[\\].   
  [ o    o ]
  [ ==== ]  
  `------'  
```

#### `ANT_R`
```text
            
   .[//].   
  [ o    o ]
  [ ==== ]  
  `------'  
```

#### `BEEP_A`
```text
            
   .[||].   
  [ o    o ]
  [ -==- ]  
  `------'  
```

#### `BEEP_B`
```text
            
   .[||].   
  [ o    o ]
  [ =--= ]  
  `------'  
```

#### `PING`
```text
    .[*].   
   .[||].   
  [ ^    ^ ]
  [ ==== ]  
  `------'  
```

#### `CLICK`
```text
            
   .[||].   
  [ o    o ]
  [ ==== ]  
 /`------'\ 
```

### Overlays / effects

- Antenna LED blink

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + binary stream_

- **Sequence length:** 21 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 2, 0, 1, 0, 1, 3, 3, 2, 4, 0, 1, 0, 1, 5]`

### Poses

#### `CALC_A`
```text
    01010   
   .[||].   
  [ #    # ]
  [ ==== ]  
 /`------'\ 
```

#### `CALC_B`
```text
    10101   
   .[||].   
  [ #    # ]
  [ -==- ]  
 \`------'/ 
```

#### `PROC`
```text
     ?      
   .[||].   
  [ ^    ^ ]
  [ .... ]  
  `------'  
```

#### `WHIRR`
```text
    [@@]    
   .[||].   
  [ o    o ]
  [ ==== ]  
  `------'  
```

#### `DING`
```text
     !      
   .[||].   
  [ O    O ]
  [ ^^^^ ]  
 /`------'\ 
```

#### `COOL`
```text
    ~~~     
   .[||].   
  [ -    - ]
  [ ____ ]  
  `------'  
```

### Overlays / effects

- Binary stream cycling next to body

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
    [!]     
   .[||].   
  [ O    O ]
  [ #### ]  
 /`------'\ 
```

#### `SCAN_L`
```text
    [!]     
   .[\\].   
  [O     O ]
  [ #### ]  
 /`------'\ 
```

#### `SCAN_R`
```text
    [!]     
   .[//].   
  [ O     O]
  [ #### ]  
 /`------'\ 
```

#### `SCAN_U`
```text
    [!]     
   .[||].   
  [ ^    ^ ]
  [ #### ]  
 /`------'\ 
```

#### `SIREN`
```text
    {!!}    
   .[||].   
  [ X    X ]
  [ #### ]  
//`------'\\
```

#### `HUSH`
```text
    [.]     
   .[||].   
  [ o    o ]
  [ .... ]  
  `------'  
```

### Overlays / effects

- Pulsing exclamations and warning lights

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses + sparks/confetti_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -6, -3, 0, 0, 0, 0, 0, 0, -3, -6, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
   .[||].   
  [ ^    ^ ]
  [ ==== ]  
 /`------'\ 
```

#### `JUMP`
```text
  \[||]/    
   .----.   
  [ ^    ^ ]
  [ ==== ]  
  `------'  
```

#### `PEAK`
```text
  \[**]/    
   .----.   
  [ O    O ]
  [ ^^^^ ]  
  `------'  
```

#### `SPIN_L`
```text
            
   .[\\].   
  [ <    < ]
  [ ==== ] /
  `------'  
```

#### `SPIN_R`
```text
            
   .[//].   
  [ >    > ]
 \[ ==== ]  
  `------'  
```

#### `POSE`
```text
    [**]    
   .[||].   
  [ ^    ^ ]
 /[ #### ]\ 
  `------'  
```

### Overlays / effects

- Sparks and bolts shooting out

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses + orbiting bolts (system glitch)_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
            
  .[||].    
 [ x    x ] 
 [ ~~~~ ]   
  `------'  
```

#### `TILT_R`
```text
            
    .[||].  
  [ x    x ]
   [ ~~~~ ] 
  `------'  
```

#### `GLITCH`
```text
            
   .[/\].   
  [ X    @ ]
  [ #v#v ]  
  `--__--'  
```

#### `GLITCH2`
```text
            
   .[\/].   
  [ @    X ]
  [ v#v# ]  
  `--__--'  
```

#### `CRASH`
```text
            
   .[??].   
  [ x    x ]
  [ ____ ]  
 /`-_--_-'\ 
```

### Overlays / effects

- Orbiting error symbols

## Heart

_─── HEART ───  ~10s cycle, 5 poses + rising heart stream_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
    [<3]    
   .[||].   
  [ ^    ^ ]
  [ ==== ]  
  `------'  
```

#### `BLUSH`
```text
    [<3]    
   .[||].   
  [#^    ^#]
  [ ==== ]  
  `------'  
```

#### `EYES_C`
```text
    [<3]    
   .[||].   
  [ <3  <3 ]
  [ ==== ]  
  `------'  
```

#### `TWIRL`
```text
    [<3]    
   .[||].   
  [ @    @ ]
  [ ==== ]  
 /`------'\ 
```

#### `SIGH`
```text
    [<3]    
   .[||].   
  [ -    - ]
  [ ^^^^ ]  
  `------'  
```

