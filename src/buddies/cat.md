# cat

- **Source:** `src/buddies/cat.cpp`
- **Namespace:** `cat`
- **Body color:** `0xC2A6`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses (curled loaf, breathing, twitching tail)_

- **Sequence length:** 26 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 3, 3, 0, 1, 4, 5, 4, 5, 4, 5, 2, 2, 0, 1, 0, 1, 5, 5, 4, 4]`

### Poses

#### `LOAF`
```text
            
            
   .-..-.   
  ( -.- )   
  `------`~ 
```

#### `BREATHE`
```text
            
            
   .-..-.   
  ( -.- )_  
 `~------'~ 
```

#### `PURR`
```text
            
            
   .-..-.   
  ( u.u )   
 `~------'~ 
```

#### `CURL`
```text
            
            
   .-/\.    
  (  ..  )) 
  `~~~~~~`  
```

#### `CURL_TW`
```text
            
            
   .-/\.    
  (  ..  )) 
  `~~~~~~`~ 
```

### Overlays / effects

- Z particles drift up-right (3 staggered streams)

## Idle

_─── IDLE ───  ~16s cycle, 10 poses (sassy micro-actions)_

- **Sequence length:** 37 beats
- **Sequence:** `[0, 0, 0, 3, 0, 1, 0, 2, 0, 7, 8, 7, 8, 7, 0, 5, 0, 6, 0, 4, 4, 0, 9, 9, 9, 0, 0, 3, 0, 8, 7, 8, 7, 0, 0, 4, 0]`

### Poses

#### `REST`
```text
            
   /\_/\    
  ( o   o ) 
  (  w   )  
  (")_(")   
```

#### `LOOK_L`
```text
            
   /\_/\    
  (o    o ) 
  (  w   )  
  (")_(")   
```

#### `LOOK_R`
```text
            
   /\_/\    
  ( o    o) 
  (  w   )  
  (")_(")   
```

#### `BLINK`
```text
            
   /\_/\    
  ( -   - ) 
  (  w   )  
  (")_(")   
```

#### `SLOW_BL`
```text
            
   /\-/\    
  ( _   _ ) 
  (  w   )  
  (")_(")   
```

#### `EAR_L`
```text
            
   <\_/\    
  ( o   o ) 
  (  w   )  
  (")_(")   
```

#### `EAR_R`
```text
            
   /\_/>    
  ( o   o ) 
  (  w   )  
  (")_(")   
```

#### `TAIL_L`
```text
            
   /\_/\    
  ( o   o ) 
  (  w   )  
  (")_(")~  
```

#### `TAIL_R`
```text
            
   /\_/\    
  ( o   o ) 
  (  w   )  
 ~(")_(")   
```

#### `GROOM`
```text
            
   /\_/\    
  ( ^   ^ ) 
  (  P   )  
  (")_(")   
```

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + dot ticker (knocking-things-off-table energy)_

- **Sequence length:** 21 beats
- **Sequence:** `[2, 2, 2, 0, 1, 0, 1, 3, 4, 3, 4, 5, 5, 2, 2, 0, 1, 0, 1, 5, 2]`

### Poses

#### `PAW_UP`
```text
      .     
   /\_/\    
  ( o   o ) 
  (  w   )/ 
  (")_(")   
```

#### `PAW_TAP`
```text
    .       
   /\_/\    
  ( o   o ) 
  (  w   )_ 
  (")_(")   
```

#### `STARE`
```text
            
   /\_/\    
  ( O   O ) 
  (  w   )  
  (")_(")   
```

#### `NUDGE`
```text
    o       
   /\_/\    
  ( o   o ) 
  ( -w   )  
  (")_(")   
```

#### `SHOVE`
```text
  o         
   /\_/\    
  ( o   o ) 
  (-w    )  
  (")_(")   
```

#### `SMUG`
```text
            
   /\_/\    
  ( -   - ) 
  (  w   )  
  (")_(")   
```

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse (ears up, dilated pupils)_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
            
   /^_^\    
  ( O   O ) 
  (  v   )  
  (")_(")   
```

#### `SCAN_L`
```text
            
   /^_^\    
  (O    O ) 
  (  v   )  
  (")_(")   
```

#### `SCAN_R`
```text
            
   /^_^\    
  ( O    O) 
  (  v   )  
  (")_(")   
```

#### `SCAN_U`
```text
            
   /^_^\    
  ( ^   ^ ) 
  (  v   )  
  (")_(")   
```

#### `CROUCH`
```text
            
   /^_^\    
 /( O   O )\
 (   v    ) 
 /(")_(")\  
```

#### `HISS`
```text
            
   /^_^\    
  ( O   O ) 
  (  >   )  
  (")_(")   
```

## Celebrate

_─── CELEBRATE ───  ~5s cycle, 6 poses + confetti rain (zoomies)_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -6, -3, 0, 0, 0, 0, 0, 0, -3, -6, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
   /\_/\    
  ( ^   ^ ) 
  (  W   )  
 /(")_(")\  
```

#### `JUMP`
```text
  \^   ^/   
    /\_/\   
  ( ^   ^ ) 
  (  W   )  
  (")_(")   
```

#### `PEAK`
```text
  \^   ^/   
    /\_/\   
  ( * * * ) 
  (  W   )  
  (")_(")~  
```

#### `SPIN_L`
```text
            
   /\_/\    
  ( <   < ) 
  (  W   ) /
 ~(")_(")   
```

#### `SPIN_R`
```text
            
   /\_/\    
  ( >   > ) 
 \(  W   )  
  (")_(")~  
```

#### `POSE`
```text
    \o/     
   /\_/\    
  ( ^   ^ ) 
 /(  W   )\ 
  (")_(")   
```

## Dizzy

_─── DIZZY ───  ~6s cycle, 5 poses + orbiting stars (chasing own tail)_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
            
  /\_/\     
 ( @   @ )  
 (   ~~  )  
 (")_(")    
```

#### `TILT_R`
```text
            
    /\_/\   
  ( @   @ ) 
  (  ~~  )  
    (")_(") 
```

#### `WOOZY`
```text
            
   /\_/\    
  ( x   @ ) 
  (  v   )  
  (")_(")~  
```

#### `WOOZY2`
```text
            
   /\_/\    
  ( @   x ) 
  (  v   )  
 ~(")_(")   
```

#### `SPLAT`
```text
            
   /\_/\    
  ( @   @ ) 
  (  -   )  
 /(")_(")\~ 
```

## Heart

_─── HEART ───  ~10s cycle, 5 poses + rising hearts (smitten purr-monster)_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
            
   /\_/\    
  ( ^   ^ ) 
  (  u   )  
  (")_(")~  
```

#### `BLUSH`
```text
            
   /\_/\    
  (#^   ^#) 
  (  u   )  
  (")_(")   
```

#### `HEART_E`
```text
            
   /\_/\    
  ( <3 <3 ) 
  (  u   )  
  (")_(")~  
```

#### `PURR`
```text
            
   /\-/\    
  ( ~   ~ ) 
  (  u   )  
 ~(")_(")~  
```

#### `HEAD_T`
```text
            
   /\_/\    
  ( ^   - ) 
  (  u   )  
  (")_(")   
```

