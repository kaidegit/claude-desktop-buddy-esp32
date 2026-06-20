# ghost

- **Source:** `src/buddies/ghost.cpp`
- **Namespace:** `ghost`
- **Body color:** `0xFFFF`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, drifting + fading_

- **Sequence length:** 29 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 5, 5, 0, 1, 0, 1, 2, 2, 3, 3, 4, 4, 0, 1, 0, 1, 5, 5, 2, 3, 4, 0, 1]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, -1, -2, -1, -2, -2, -3, -3, -3, -2, -1, -1, 0, 0, -1, 0, -1, -1, -2, -1, 0, -1]`

### Poses

#### `DRIFT_A`
```text
            
   .----.   
  ( -    - )
  |        |
  ~`~``~`~  
```

#### `DRIFT_B`
```text
            
   .----.   
  ( -    - )
  |        |
  `~`~~`~`  
```

#### `FADE`
```text
            
   . -- .   
  ( -    - )
  .        .
  . . . . . 
```

#### `GONE`
```text
            
            
   .    .   
            
  . .  . .  
```

#### `RETURN`
```text
            
   .    .   
  ( -    - )
  .        .
  . `~`  .  
```

#### `SNORE`
```text
            
   .----.   
  ( z    z )
  |   o    |
  ~~`~~`~~  
```

### Overlays / effects

- Z particles drift up-right

## Idle

_─── IDLE ───  ~14s cycle, 10 micro-poses_

- **Sequence length:** 32 beats
- **Sequence:** `[0, 0, 6, 7, 0, 1, 0, 2, 0, 4, 0, 6, 5, 5, 0, 0, 7, 6, 0, 3, 0, 4, 8, 8, 0, 0, 9, 9, 0, 6, 7, 0]`
- **Y bob:** `[0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, -2, -1, -1, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `HOVER`
```text
            
   .----.   
  ( o    o )
  |   __   |
  ~`~``~`~  
```

#### `LOOK_L`
```text
            
   .----.   
  (o    o  )
  |   __   |
  ~`~``~`~  
```

#### `LOOK_R`
```text
            
   .----.   
  (  o    o)
  |   __   |
  ~`~``~`~  
```

#### `LOOK_U`
```text
            
   .----.   
  ( ^    ^ )
  |   __   |
  ~`~``~`~  
```

#### `BLINK`
```text
            
   .----.   
  ( -    - )
  |   __   |
  ~`~``~`~  
```

#### `SMILE`
```text
            
   .----.   
  ( o    o )
  |   uu   |
  ~`~``~`~  
```

#### `WIGGLE`
```text
            
   .----.   
  ( o    o )
  |   __   |
  `~`~~`~`  
```

#### `WIGGLE2`
```text
            
   .----.   
  ( o    o )
  |   __   |
  ~~`~~`~~  
```

#### `TRANS`
```text
            
   . -- .   
  . o    o .
  .   __   .
  . `~``~ . 
```

#### `PHASE`
```text
            
   .----.   
  ( O    O )
  |   oo   |
  ~`~``~`~  
```

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + boo ticker_

- **Sequence length:** 21 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 2, 0, 1, 0, 1, 3, 3, 2, 4, 0, 1, 0, 1, 5]`

### Poses

#### `WORK_A`
```text
            
   .----.   
  ( v    v )
  |   --   |
 /~`~``~`~\ 
```

#### `WORK_B`
```text
            
   .----.   
  ( v    v )
  |   __   |
 \~`~``~`~/ 
```

#### `THINK`
```text
      ?     
   .----.   
  ( ^    ^ )
  |   ..   |
  ~`~``~`~  
```

#### `CONJURE`
```text
    * . *   
   .----.   
  ( O    O )
  |   oo   |
  ~`~``~`~  
```

#### `EUREKA`
```text
      !     
   .----.   
  ( O    O )
  |   ^^   |
 /~`~``~`~\ 
```

#### `RELIEF`
```text
    ~ ~ ~   
   .----.   
  ( -    - )
  |   __   |
  `~`~~`~`  
```

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + BOO! pulse_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `SPOOK`
```text
    ! !!    
   .----.   
  ( O    O )
  |   OO   |
 /~`~``~`~\ 
```

#### `SCAN_L`
```text
    ! !!    
   .----.   
  (O      O)
  |   O    |
  ~`~``~`~  
```

#### `SCAN_R`
```text
    ! !!    
   .----.   
  ( O    O )
  |    O   |
  ~`~``~`~  
```

#### `SCAN_U`
```text
    ! !!    
   .----.   
  ( ^    ^ )
  |   O    |
  ~`~``~`~  
```

#### `TENSE`
```text
    ! !!    
  /.----.\  
  ( O    O )
  |   O    |
 /~`~``~`~\ 
```

#### `HUSH`
```text
    .  .    
   .----.   
  ( o    o )
  |   .    |
  ~`~``~`~  
```

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses + confetti rain_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -6, -3, 0, 0, 0, 0, 0, 0, -3, -6, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
   .----.   
  ( ^    ^ )
  |   ww   |
 /~`~``~`~\ 
```

#### `JUMP`
```text
  \(    )/  
   .----.   
  ( ^    ^ )
  |   ww   |
  ~`~``~`~  
```

#### `PEAK`
```text
  \^    ^/  
   .----.   
  ( ^    ^ )
  |   WW   |
  ~`~``~`~  
```

#### `SPIN_L`
```text
            
   .----.   
  ( <    < )
  |   ww   |
  ~`~``~`~/ 
```

#### `SPIN_R`
```text
            
   .----.   
  ( >    > )
  |   ww   |
 \~`~``~`~  
```

#### `POSE`
```text
    \__/    
   .----.   
  ( ^    ^ )
  |   WW   |
/~`~``~`~\  
```

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses + orbiting stars_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
            
  .----.    
 ( @    @ ) 
 |   ~~   | 
  ~`~``~`~  
```

#### `TILT_R`
```text
             
    .----.   
  ( @    @ ) 
   |   ~~   |
  ~`~``~`~   
```

#### `WOOZY`
```text
            
   .----.   
  ( x    @ )
  |   ~v   |
  ~`~``~`~  
```

#### `WOOZY2`
```text
            
   .----.   
  ( @    x )
  |   v~   |
  ~`~``~`~  
```

#### `WOBBLE`
```text
            
   .----.   
  ( @    @ )
  |   --   |
 /~_~``_~\  
```

## Heart

_─── HEART ───  ~10s cycle, 5 poses + rising heart stream_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[-1, -2, -1, -2, -1, -2, -1, -2, -1, -1, -2, -1, -1, -1, -2, -1, -2, -1, -2, -1]`

### Poses

#### `DREAMY`
```text
            
   .----.   
  ( ^    ^ )
  |   ww   |
  ~`~``~`~  
```

#### `BLUSH`
```text
            
   .----.   
  (#^    ^#)
  |   ww   |
  ~`~``~`~  
```

#### `EYES_C`
```text
            
   .----.   
  ( <3  <3 )
  |   ww   |
  ~`~``~`~  
```

#### `TWIRL`
```text
            
   .----.   
  ( @    @ )
  |   ww   |
 /~`~``~`~\ 
```

#### `SIGH`
```text
            
   .----.   
  ( -    - )
  |   ^^   |
  `~`~~`~`  
```

