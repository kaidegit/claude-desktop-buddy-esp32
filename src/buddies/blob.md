# blob

- **Source:** `src/buddies/blob.cpp`
- **Namespace:** `blob`
- **Body color:** `0x07F0`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses_

- **Sequence length:** 25 beats
- **Sequence:** `[0, 1, 2, 1, 0, 1, 2, 1, 0, 4, 4, 0, 1, 2, 5, 2, 1, 3, 3, 0, 0, 1, 2, 1, 0]`

### Poses

#### `PUDDLE`
```text
            
            
   .----.   
  ( -- -- ) 
  `~------~`
```

#### `BREATH`
```text
            
   .----.   
  ( -- -- ) 
  (        )
   `------` 
```

#### `DEEP`
```text
            
  .------.  
 ( -- -- )  
 (         )
  `~------~`
```

#### `DRIP`
```text
            
            
   .----.   
  ( -- -- ) 
  `--.----` 
```

#### `MELT`
```text
            
            
   .----.   
  ( __ __ ) 
 `~~~~~~~~~`
```

#### `SNORE`
```text
            
  .------.  
 ( __ __ )  
 (    o    )
  `~------~`
```

### Overlays / effects

- Z particles drift up-right + a slow drip falling
- slow droplet falling under the puddle

## Idle

_─── IDLE ───  ~14s cycle, 10 poses_

- **Sequence length:** 39 beats
- **Sequence:** `[1, 2, 1, 0, 1, 2, 1, 3, 1, 4, 1, 5, 2, 2, 8, 8, 2, 6, 7, 6, 7, 1, 1, 2, 9, 9, 1, 1, 3, 4, 3, 4, 1, 5, 1, 0, 0, 2, 2]`

### Poses

#### `SMALL`
```text
            
    .--.    
   (o  o)   
   (    )   
    `--`    
```

#### `MED`
```text
            
   .----.   
  ( o  o )  
  (      )  
   `----`   
```

#### `BIG`
```text
            
  .------.  
 ( o    o ) 
 (        ) 
  `------`  
```

#### `LOOK_L`
```text
            
   .----.   
  (o   o )  
  (      )  
   `----`   
```

#### `LOOK_R`
```text
            
   .----.   
  ( o   o)  
  (      )  
   `----`   
```

#### `BLINK`
```text
            
   .----.   
  ( -  - )  
  (      )  
   `----`   
```

#### `WIGGLE_L`
```text
            
  .----.    
 ( o  o )   
 (      )   
  `----`    
```

#### `WIGGLE_R`
```text
            
    .----.  
   ( o  o ) 
   (      ) 
    `----`  
```

#### `JIGGLE`
```text
            
  .~~~~~~.  
 ( o    o ) 
 (        ) 
  `~~~~~~`  
```

#### `DRIP_S`
```text
            
   .----.   
  ( o  o )  
  (      )  
  `--.--.`  
```

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + dot ticker_

- **Sequence length:** 21 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 2, 0, 1, 0, 1, 3, 3, 4, 4, 0, 1, 5, 5, 2]`

### Poses

#### `FOCUS_A`
```text
            
   .----.   
  ( v  v )  
  (   --  ) 
   `----`   
```

#### `FOCUS_B`
```text
            
   .----.   
  ( v  v )  
  (   __  ) 
   `----`   
```

#### `CHURN`
```text
            
  .~----~.  
 ( v    v ) 
 (   oo   ) 
  `~----~`  
```

#### `THINK`
```text
      ?     
   .----.   
  ( ^  ^ )  
  (   ..  ) 
   `----`   
```

#### `PROCESS`
```text
      *     
  .------.  
 ( O    O ) 
 (   ==   ) 
  `------`  
```

#### `DRIP_W`
```text
            
   .----.   
  ( v  v )  
  (   --  ) 
  `--.----` 
```

### Overlays / effects

- tiny bubble rising inside the slime

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 3, 0, 0, 6, 0]`

### Poses

#### `TALL`
```text
    .--.    
   (    )   
  ( O  O )  
  (   !   ) 
  `------`  
```

#### `PEEK_L`
```text
    .--.    
   (    )   
 ( O  O  )  
 (   !    ) 
 `------`   
```

#### `PEEK_R`
```text
    .--.    
   (    )   
  ( O  O )  
   (   !  ) 
   `------` 
```

#### `STRETCH`
```text
     ||     
    /  \    
  ( O  O )  
  (   !   ) 
  `------`  
```

#### `TENSE`
```text
    .--.    
  /(    )\  
 /( O  O )\ 
 (   !!   ) 
 /`------`\ 
```

#### `SHRINK`
```text
            
    .--.    
   (O  O)   
   (  !  )  
    `--`    
```

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses + droplet/confetti rain_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -2, -7, -2, 0, 0, 0, 0, 0, 0, -2, -7, -2, 0, 0, 0]`

### Poses

#### `SQUASH`
```text
            
            
  .--------.
 ( ^      ^)
 `~~------~`
```

#### `LAUNCH`
```text
            
   .----.   
  ( ^  ^ )  
 /(  ww  )\ 
  `------`  
```

#### `AIRBORNE`
```text
    .--.    
   ( ^^ )   
   (  WW)   
    `--`    
    : :     
```

#### `SPLAT_L`
```text
            
            
 .---------.
( ^      ^ )
 `~~~------`
```

#### `SPLAT_R`
```text
            
            
.---------. 
( ^      ^ )
`------~~~` 
```

#### `POSE`
```text
    \__/    
   .----.   
  ( *  * )  
 /(  WW  )\ 
  `------`  
```

### Overlays / effects

- alternating splat-droplets and stars

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses + orbiting stars_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `LEAN_L`
```text
            
  .----.    
 ( @  @ )   
 (  ~~  )   
  `----`    
```

#### `LEAN_R`
```text
            
    .----.  
   ( @  @ ) 
   (  ~~  ) 
    `----`  
```

#### `WOBBLE`
```text
            
  .~----~.  
 ( x    @ ) 
 (   vv   ) 
  `~----~`  
```

#### `WOBBLE2`
```text
            
  .~----~.  
 ( @    x ) 
 (   vv   ) 
  `~----~`  
```

#### `SPLAT`
```text
            
            
 .---------.
( @      @ )
 `--._.--._`
```

## Heart

_─── HEART ───  ~10s cycle, 5 poses + rising heart stream_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
            
   .----.   
  ( ^  ^ )  
  (   ww  ) 
   `----`   
```

#### `BLUSH`
```text
            
   .----.   
  (#^  ^#)  
  (   ww  ) 
   `----`   
```

#### `HEART_E`
```text
            
  .------.  
 ( <3  <3 ) 
 (    v   ) 
  `------`  
```

#### `MELT_H`
```text
            
  .~~~~~~.  
 ( @    @ ) 
 (   ww   ) 
  `~------` 
```

#### `SIGH`
```text
            
   .----.   
  ( -  - )  
  (   ^^  ) 
   `----`   
```

