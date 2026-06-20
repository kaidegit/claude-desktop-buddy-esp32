# chonk

- **Source:** `src/buddies/chonk.cpp`
- **Namespace:** `chonk`
- **Body color:** `0xFD20`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses (heavy belly breathing)_

- **Sequence length:** 29 beats
- **Sequence:** `[0, 0, 0, 1, 2, 1, 2, 1, 2, 1, 2, 3, 3, 1, 2, 1, 2, 1, 2, 5, 4, 5, 4, 0, 0, 1, 2, 3, 2]`

### Poses

#### `CURL`
```text
            
            
  /\____/\  
 ( -    - ) 
 (___zz___) 
```

#### `INHALE`
```text
            
  /\____/\  
 ( -    - ) 
 (   --   ) 
 (________) 
```

#### `EXHALE`
```text
            
  /\____/\  
 ( -    - ) 
(    --    )
(__________)
```

#### `SNORE`
```text
            
  /\____/\  
 ( -    - ) 
(    OO    )
(__________)
```

#### `JIGGLE`
```text
            
  /\____/\  
 ( -    - ) 
(   ~~~~   )
 ~~~~~~~~~~ 
```

### Overlays / effects

- Belly jiggle on EXHALE/JIGGLE poses
- Z particles drift up-right, lazy and heavy

## Idle

_─── IDLE ───  ~16s cycle, 10 poses (round mystery, ears swivel)_

- **Sequence length:** 36 beats
- **Sequence:** `[0, 0, 0, 4, 0, 1, 1, 0, 2, 2, 0, 4, 5, 0, 6, 0, 0, 3, 3, 0, 7, 8, 7, 8, 0, 0, 4, 0, 9, 9, 0, 0, 0, 5, 6, 0]`

### Poses

#### `REST`
```text
            
  /\____/\  
 ( o    o ) 
 (   ..   ) 
  `------'  
```

#### `LOOK_L`
```text
            
  /\____/\  
 (o     o ) 
 (   ..   ) 
  `------'  
```

#### `LOOK_R`
```text
            
  /\____/\  
 ( o     o) 
 (   ..   ) 
  `------'  
```

#### `LOOK_U`
```text
            
  /\____/\  
 ( '    ' ) 
 (   ..   ) 
  `------'  
```

#### `BLINK`
```text
            
  /\____/\  
 ( -    - ) 
 (   ..   ) 
  `------'  
```

#### `EAR_L`
```text
            
  /|____/\  
 ( o    o ) 
 (   ..   ) 
  `------'  
```

#### `EAR_R`
```text
            
  /\____|\  
 ( o    o ) 
 (   ..   ) 
  `------'  
```

#### `JIG_A`
```text
            
  /\____/\  
 ( o    o ) 
(    ..    )
 (________) 
```

#### `JIG_B`
```text
            
  /\____/\  
 ( o    o ) 
 (   ..   ) 
(__________)
```

#### `SNIFF`
```text
            
  /\____/\  
 ( o    o ) 
 (   oo   ) 
  `------'  
```

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + cog ticker_

- **Sequence length:** 23 beats
- **Sequence:** `[1, 2, 1, 2, 1, 2, 0, 0, 1, 2, 1, 2, 3, 3, 3, 4, 4, 1, 2, 1, 2, 5, 5]`

### Poses

#### `PONDER`
```text
      ?     
  /\____/\  
 ( o    o ) 
 (   --   ) 
  `------'  
```

#### `CALC_A`
```text
            
  /\____/\  
 ( v    v ) 
 (   ::   ) 
 /`------'\ 
```

#### `CALC_B`
```text
            
  /\____/\  
 ( v    v ) 
 (   ;;   ) 
 \`------'/ 
```

#### `SCRIBE`
```text
    ___     
  /\___/\/  
 ( o    o-- 
 (   --   ) 
  `------'  
```

#### `AHA`
```text
      *     
  /\____/\  
 ( O    O ) 
 (   ^^   ) 
 /`------'\ 
```

#### `SIGH`
```text
    ~~~     
  /\____/\  
 ( -    - ) 
 (   __   ) 
  `------'  
```

### Overlays / effects

- Cog/dot ticker spinning beside head

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse (heavy alert wobble)_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
    ^  ^    
  /^____^\  
 ( O    O ) 
 (   o    ) 
  `------'  
```

#### `SCAN_L`
```text
    ^  ^    
  /^____^\  
 (O     O ) 
 (   o    ) 
  `------'  
```

#### `SCAN_R`
```text
    ^  ^    
  /^____^\  
 ( O     O) 
 (   o    ) 
  `------'  
```

#### `PERK`
```text
    /\/\    
  /^____^\  
 ( ^    ^ ) 
 (   o    ) 
  `------'  
```

#### `TENSE`
```text
    ^  ^    
 /^^____^^\ 
 ( O    O ) 
 (   o    ) 
 /`------'\ 
```

#### `GULP`
```text
    ^  ^    
  /^____^\  
 ( o    o ) 
 (   O    ) 
  `------'  
```

## Celebrate

_─── CELEBRATE ───  ~6s cycle, 6 poses + confetti rain (heavy belly bounce)_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -7, -3, 0, 0, 0, 0, 0, 0, -3, -7, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
  /\____/\  
 ( ^    ^ ) 
(    WW    )
(__________)
```

#### `JUMP`
```text
  \(    )/  
   /____\   
 ( ^    ^ ) 
 (   WW   ) 
  `------'  
```

#### `PEAK`
```text
  \^    ^/  
   /____\   
 ( ^    ^ ) 
 (   OO   ) 
  `------'  
```

#### `SPIN_L`
```text
            
  /\____/\  
( <    < ) /
 (   ww   ) 
  `------'  
```

#### `SPIN_R`
```text
            
  /\____/\  
\( >    > ) 
 (   ww   ) 
  `------'  
```

#### `POSE`
```text
    \__/    
  /\____/\  
 ( ^    ^ ) 
/(   WW   )\
  `------'  
```

## Dizzy

_─── DIZZY ───  ~6s cycle, 5 poses + orbiting stars (big body lurches)_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-4, 4, -4, 4, 0, 0, -4, 4, -4, 4, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
            
 /\____/\   
( @    @ )  
 (   ~~   ) 
  `------'  
```

#### `TILT_R`
```text
            
   /\____/\ 
  ( @    @ )
 (   ~~   ) 
  `------'  
```

#### `WOOZY`
```text
            
  /\____/\  
 ( x    @ ) 
 (   ~v   ) 
  `------'  
```

#### `WOOZY2`
```text
            
  /\____/\  
 ( @    x ) 
 (   v~   ) 
  `------'  
```

#### `TUMBLE`
```text
            
  /\____/\  
 ( @    @ ) 
(    --    )
 /`-_---_'\ 
```

### Overlays / effects

- Stars orbiting in a wider ellipse around the chonk's head

## Heart

_─── HEART ───  ~10s cycle, 6 poses + rising heart stream (blushy chonk)_

- **Sequence length:** 23 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 5, 5, 0, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
            
  /\____/\  
 ( ^    ^ ) 
 (   ww   ) 
  `------'  
```

#### `BLUSH`
```text
            
  /\____/\  
 (#^    ^#) 
 (   ww   ) 
  `------'  
```

#### `EYES_C`
```text
            
  /\____/\  
 ( <3  <3 ) 
 (   ww   ) 
  `------'  
```

#### `TWIRL`
```text
            
  /\____/\  
 ( @    @ ) 
(    ww    )
 /`------'\ 
```

#### `SIGH`
```text
            
  /\____/\  
 ( -    - ) 
 (   ^^   ) 
  `------'  
```

#### `HUG`
```text
  v      v  
  /\____/\  
 ( ^    ^ ) 
/(   ww   )\
  `------'  
```

