# owl

- **Source:** `src/buddies/owl.cpp`
- **Namespace:** `owl`
- **Body color:** `0x8430`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses_

- **Sequence length:** 24 beats
- **Sequence:** `[0, 1, 0, 1, 2, 2, 1, 0, 1, 0, 3, 3, 0, 4, 4, 0, 1, 2, 2, 1, 0, 5, 0, 0]`

### Poses

#### `TUCK`
```text
            
   .-..-.   
  ( -  - )  
  (  __  )  
   `----'   
```

#### `PUFF`
```text
    .--.    
   /-..-\   
  ( -  - )  
  (  __  )  
   `----'   
```

#### `DEEP`
```text
    .--.    
   /-..-\   
  ( _  _ )  
  (  ZZ  )  
   `----'   
```

#### `HEAD_L`
```text
            
   .-..-.   
 ( -  -  )  
  (  __  )  
   `----'   
```

#### `HEAD_R`
```text
            
   .-..-.   
  (  - - -) 
  (  __  )  
   `----'   
```

#### `HOOT`
```text
      hoo   
   .-..-.   
  ( -  - )  
  (  oo  )  
   `----'   
```

### Overlays / effects

- Z particles drift up-right (slow, sleepy)

## Idle

_─── IDLE ───  ~14s cycle, 10 poses_

- **Sequence length:** 32 beats
- **Sequence:** `[0, 0, 0, 1, 0, 0, 2, 2, 0, 3, 3, 0, 1, 0, 4, 4, 0, 5, 5, 0, 6, 0, 7, 7, 0, 8, 8, 0, 9, 9, 0, 0]`

### Poses

#### `REST`
```text
            
   /\  /\   
  ((O)(O))  
  (  ><  )  
   `----'   
```

#### `BLINK`
```text
            
   /\  /\   
  ((-)(-))  
  (  ><  )  
   `----'   
```

#### `LOOK_L`
```text
            
   /\  /\   
  ((O)(O))  
 (  ><   )  
   `----'   
```

#### `LOOK_R`
```text
            
   /\  /\   
  ((O)(O))  
  (   >< )  
   `----'   
```

#### `HEAD_L`
```text
            
  /\  /\    
 ((O)(O))   
  (  ><  )  
   `----'   
```

#### `HEAD_R`
```text
            
    /\  /\  
   ((O)(O)) 
  (  ><  )  
   `----'   
```

#### `WINK`
```text
            
   /\  /\   
  ((O)(-))  
  (  ><  )  
   `----'   
```

#### `PREEN`
```text
            
   /\  /\   
  ((o)(o))  
  (  v<  )  
   `----'   
```

#### `PUFF`
```text
            
  /^\  /^\  
 (((O)(O))) 
 (  ><  )   
  `------'  
```

#### `HOOT`
```text
      hoo   
   /\  /\   
  ((O)(O))  
  (  oo  )  
   `----'   
```

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + dot ticker_

- **Sequence length:** 25 beats
- **Sequence:** `[0, 1, 0, 2, 0, 1, 0, 2, 3, 3, 0, 1, 0, 2, 5, 5, 0, 1, 4, 4, 0, 2, 0, 1, 3]`

### Poses

#### `SCROLL`
```text
    [___]   
   /\  /\   
  ((v)(v))  
  (  --  )  
   `----'   
```

#### `PECK_A`
```text
    [___]   
   /\  /\   
  ((v)(v))  
  (  >>  )  
   `----'   
```

#### `PECK_B`
```text
    [___]   
   /\  /\   
  ((v)(v))  
  (  <<  )  
   `----'   
```

#### `PONDER`
```text
      ?     
   /\  /\   
  ((^)(^))  
  (  ..  )  
   `----'   
```

#### `EUREKA`
```text
      *     
   /\  /\   
  ((O)(O))  
  (  ^^  )  
  /`----'\  
```

#### `SCROLL2`
```text
   [____]   
  /\   /\   
 ((v) (v))  
  (  --  )  
   `----'   
```

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
            
  /^\  /^\  
 ((O))((O)) 
 (   ><   ) 
  `------'  
```

#### `SCAN_L`
```text
            
  /^\  /^\  
((O))((O))  
 (   ><   ) 
  `------'  
```

#### `SCAN_R`
```text
            
  /^\  /^\  
  ((O))((O))
 (   ><   ) 
  `------'  
```

#### `HEAD_T`
```text
            
 //^\\//^\\ 
 ((O))((O)) 
 (   ><   ) 
  `------'  
```

#### `TENSE`
```text
            
 /^^\/^^\   
((O))((O))  
((   ><   ))
 /`------'\ 
```

#### `GLARE`
```text
            
  /^\  /^\  
 ((-))((-)) 
 (   ><   ) 
  `------'  
```

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses + confetti rain_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -4, -7, -4, 0, 0, 0, 0, 0, 0, -4, -7, -4, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
   /\  /\   
  ((^)(^))  
  (  ww  )  
  /`----'\  
```

#### `FLAP_U`
```text
  </    \>  
   /\  /\   
  ((^)(^))  
  (  ww  )  
   `----'   
```

#### `FLAP_D`
```text
            
 \_/\  /\_/ 
  ((^)(^))  
  (  WW  )  
   `----'   
```

#### `SPIN_L`
```text
            
 </\  /\    
((<)(<))    
  (  ww  )  
   `----'   
```

#### `SPIN_R`
```text
            
    /\  /\> 
    ((>)(>))
  (  ww  )  
   `----'   
```

#### `POSE`
```text
    \__/    
  </\  /\>  
 ((^)(^))   
 /(  WW  )\ 
   `----'   
```

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses + orbiting stars_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
            
  /\  /\    
 ((@)(@))   
  (  ~~  )  
   `----'   
```

#### `TILT_R`
```text
            
    /\  /\  
   ((@)(@)) 
  (  ~~  )  
   `----'   
```

#### `WOOZY`
```text
            
   /\  /\   
  ((x)(@))  
  (  ~v  )  
   `----'   
```

#### `WOOZY2`
```text
            
   /\  /\   
  ((@)(x))  
  (  v~  )  
   `----'   
```

#### `SPIN360`
```text
            
   \/  \/   
  ((@)(@))  
  (  --  )  
  /`-_--'\  
```

## Heart

_─── HEART ───  ~10s cycle, 5 poses + rising heart stream_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
            
   /\  /\   
  ((^)(^))  
  (  ww  )  
   `----'   
```

#### `BLUSH`
```text
            
   /\  /\   
 #((^)(^))# 
  (  ww  )  
   `----'   
```

#### `HEART_E`
```text
            
   /\  /\   
  ((<3)(<3))
  (  ww  )  
   `----'   
```

#### `TWIRL`
```text
            
   /\  /\   
  ((@)(@))  
  (  ww  )  
  /`----'\  
```

#### `SIGH`
```text
      hoo   
   /\  /\   
  ((-)(-))  
  (  vv  )  
   `----'   
```

