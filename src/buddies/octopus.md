# octopus

- **Source:** `src/buddies/octopus.cpp`
- **Namespace:** `octopus`
- **Body color:** `0xA01F`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses_

- **Sequence length:** 26 beats
- **Sequence:** `[0, 0, 1, 1, 0, 0, 2, 2, 1, 1, 0, 0, 3, 3, 4, 4, 3, 4, 1, 1, 2, 2, 0, 5, 1, 1]`

### Poses

#### `CURL`
```text
            
            
   .----.   
  ( -- -- ) 
  (~~zz~~)  
```

#### `BREATHE`
```text
            
   .----.   
  ( -- -- ) 
  (______)  
  ~~~~~~~~  
```

#### `DEEP`
```text
            
   .----.   
  ( __ __ ) 
  (______)  
  ~~~~~~~~  
```

#### `DRIFT_L`
```text
            
  .----.    
 ( -- -- )  
 (______)   
 ~/~/~/~/   
```

#### `DRIFT_R`
```text
            
    .----.  
   ( -- -- )
   (______) 
   /~/~/~/~ 
```

#### `SNORE`
```text
            
   .----.   
  ( oO oO ) 
  (__o___)  
  ~~~~~~~~  
```

### Overlays / effects

- Z particles drift up

## Idle

_─── IDLE ───  ~14s cycle, 10 poses_

- **Sequence length:** 34 beats
- **Sequence:** `[0, 1, 0, 1, 0, 2, 1, 3, 0, 1, 4, 0, 5, 6, 5, 6, 0, 1, 0, 4, 1, 0, 7, 7, 0, 1, 8, 8, 0, 1, 9, 9, 0, 1]`

### Poses

#### `REST`
```text
            
   .----.   
  ( o  o )  
  (______)  
  /\/\/\/\  
```

#### `WAVE_A`
```text
            
   .----.   
  ( o  o )  
  (______)  
  \/\/\/\/  
```

#### `LOOK_L`
```text
            
   .----.   
  (o   o )  
  (______)  
  /\/\/\/\  
```

#### `LOOK_R`
```text
            
   .----.   
  ( o   o)  
  (______)  
  \/\/\/\/  
```

#### `BLINK`
```text
            
   .----.   
  ( -  - )  
  (______)  
  /\/\/\/\  
```

#### `CURL_T`
```text
            
   .----.   
  ( o  o )  
  (______)  
  /)/\/\(\  
```

#### `WIGGLE`
```text
            
   .----.   
  ( ^  ^ )  
  (______)  
  )(/\/\)(  
```

#### `FLOAT_U`
```text
   .----.   
  ( o  o )  
  (______)  
  /\/\/\/\  
            
```

#### `GRIN`
```text
            
   .----.   
  ( ^  ^ )  
  (\__/\)   
  /\/\/\/\  
```

#### `STRETCH`
```text
            
  /.----.\  
 /( o  o )\ 
 \(______)/ 
 //\/\/\/\\ 
```

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + bubble ticker_

- **Sequence length:** 21 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 2, 0, 1, 0, 1, 3, 3, 2, 4, 0, 1, 0, 1, 5]`

### Poses

#### `TYPE_A`
```text
            
   .----.   
  ( v  v )  
  (__--__)  
  /)\/\/(\  
```

#### `TYPE_B`
```text
            
   .----.   
  ( v  v )  
  (__==__)  
  (\/\/\/)  
```

#### `THINK`
```text
      ?     
   .----.   
  ( ^  ^ )  
  (__..__)  
  /\/\/\/\  
```

#### `SCRIBE`
```text
    [_]     
   .---|.   
  ( o  o|)  
  (__--__)  
  /\(\/\/\  
```

#### `EUREKA`
```text
      *     
   .----.   
  ( O  O )  
  (__^^__)  
 //\/\/\\\  
```

#### `RELIEF`
```text
    ~~~     
   .----.   
  ( -  - )  
  (__--__)  
  /\/\/\/\  
```

### Overlays / effects

- Tiny bubbles drift up

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
    ^  ^    
   .----.   
  ( O  O )  
  (__O___)  
  /\/\/\/\  
```

#### `SCAN_L`
```text
    ^  ^    
   .----.   
  (O   O )  
  (__O___)  
  /\/\/\/\  
```

#### `SCAN_R`
```text
    ^  ^    
   .----.   
  ( O   O)  
  (__O___)  
  \/\/\/\/  
```

#### `SCAN_U`
```text
    ^  ^    
   .----.   
  ( ^  ^ )  
  (__O___)  
  /\/\/\/\  
```

#### `TENSE`
```text
    ^  ^    
  /.----.\  
 ( O    O ) 
  (__O___)  
 //\/\/\\\  
```

#### `HUSH`
```text
    ^  ^    
   .----.   
  ( o  o )  
  (__.___)  
  /\/\/\/\  
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
  ( ^  ^ )  
  (__ww__)  
 //\/\/\\\  
```

#### `JUMP`
```text
  \/    \/  
   .----.   
  ( ^  ^ )  
  (__ww__)  
  )(\/\/)(  
```

#### `PEAK`
```text
  \^    ^/  
   .----.   
  ( ^  ^ )  
  (__WW__)  
  ((    ))  
```

#### `SPIN_L`
```text
            
   .----.   
 (( <  < )) 
  (__ww__)  
 /)/\/\(\   
```

#### `SPIN_R`
```text
            
   .----.   
 (( >  > )) 
  (__ww__)  
 (\/\/\/)/  
```

#### `POSE`
```text
    \__/    
   .----.   
 /( ^  ^ )\ 
 \(__WW__)/ 
 //\/\/\\\  
```

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses + orbiting stars + ink cloud_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
            
  .----.    
 ( @  @ )   
 (__~~__)   
 /\/\/\/\   
```

#### `TILT_R`
```text
            
    .----.  
   ( @  @ ) 
   (__~~__) 
   \/\/\/\/ 
```

#### `WOOZY`
```text
            
   .----.   
  ( x  @ )  
  (__~v__)  
  /\)/\(\   
```

#### `WOOZY2`
```text
            
   .----.   
  ( @  x )  
  (__v~__)  
  (\/\(/\/  
```

#### `STUMBLE`
```text
            
   .----.   
  ( @  @ )  
  (__--__)  
 /)\_/\_(\  
```

### Overlays / effects

- Orbiting stars
- Ink cloud puff drifts down occasionally

## Heart

_─── HEART ───  ~10s cycle, 6 poses + rising heart stream_

- **Sequence length:** 22 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 5, 5, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1]`

### Poses

#### `DREAMY`
```text
            
   .----.   
  ( ^  ^ )  
  (__ww__)  
  /\/\/\/\  
```

#### `BLUSH`
```text
            
   .----.   
  (#^  ^#)  
  (__ww__)  
  /\/\/\/\  
```

#### `EYES_C`
```text
            
   .----.   
  (<3  <3)  
  (__ww__)  
  \/\/\/\/  
```

#### `TWIRL`
```text
            
   .----.   
  ( @  @ )  
  (__ww__)  
 //\/\/\\\  
```

#### `SIGH`
```text
    ~~~     
   .----.   
  ( -  - )  
  (__^^__)  
  /\/\/\/\  
```

#### `HUG`
```text
            
  /.----.\  
 /(#^  ^#)\ 
 \(__ww__)/ 
  )(\/\/)(  
```

