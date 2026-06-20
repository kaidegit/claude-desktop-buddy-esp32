# goose

- **Source:** `src/buddies/goose.cpp`
- **Namespace:** `goose`
- **Body color:** `0xFFFF`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses, head tucked under wing_

- **Sequence length:** 24 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 1, 0, 1, 0, 3, 4, 4, 4, 1, 0, 1, 2, 2, 0, 1, 5, 1]`

### Poses

#### `TUCK`
```text
            
    __      
   /  \__   
  (  zz  )  
   `~~~~`   
```

#### `BREATHE`
```text
            
    __      
   /  \__   
  (  --  )  
   `~~~~`   
```

#### `SNORE`
```text
    o O .   
    __      
   /  \__   
  (  --  )  
   `~~~~`   
```

#### `PEEK`
```text
            
    _o      
   /  \__   
  (  --  )  
   `~~~~`   
```

#### `SHIFT`
```text
            
      __    
   __/  \   
  (  zz  )  
   `~~~~`   
```

#### `HONK_DR`
```text
    HnK..   
    __      
   /  \__   
  (  zZ  )  
   `~~~~`   
```

### Overlays / effects

- Z particles drift up-right

## Idle

_─── IDLE ───  ~14s cycle, 10 poses, swaggering goose_

- **Sequence length:** 29 beats
- **Sequence:** `[0, 0, 4, 0, 1, 0, 2, 0, 7, 8, 7, 8, 0, 0, 3, 0, 4, 5, 5, 0, 6, 6, 0, 0, 9, 9, 0, 4, 0]`

### Poses

#### `STAND`
```text
            
    (>      
    ||      
  _(__)_    
   ^^^^     
```

#### `LOOK_L`
```text
            
  <)        
   ||       
  _(__)_    
   ^^^^     
```

#### `LOOK_R`
```text
            
      (>    
      ||    
  _(__)_    
   ^^^^     
```

#### `LOOK_U`
```text
    /\      
    (>      
    ||      
  _(__)_    
   ^^^^     
```

#### `BLINK`
```text
            
    (->     
    ||      
  _(__)_    
   ^^^^     
```

#### `PREEN`
```text
            
    (v      
    |\__    
  _(__)_    
   ^^^^     
```

#### `PECK`
```text
            
            
    (>      
    || _    
  _(__)_    
```

#### `STEP_L`
```text
            
    (>      
    ||      
  _(__)_    
   ^/ ^     
```

#### `STEP_R`
```text
            
    (>      
    ||      
  _(__)_    
   ^ \^     
```

#### `WING_FL`
```text
            
    (>      
 <==||==>   
  _(__)_    
   ^^^^     
```

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + honk ticker_

- **Sequence length:** 21 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 3, 3, 0, 1, 0, 1, 2, 2, 4, 4, 0, 1, 5, 5, 0]`

### Poses

#### `PATROL_A`
```text
            
    (>      
 <==||==>   
  _(__)_    
   /^ ^\    
```

#### `PATROL_B`
```text
            
    (>      
  =-||-=    
  _(__)_    
   ^/ \^    
```

#### `CHARGE`
```text
            
      (>>   
    _||_    
   (___)    
   //\\     
```

#### `PECK_DN`
```text
            
            
    \v_     
  _(__)_    
   ^^^^     
```

#### `HISS`
```text
    sss     
    (>>>    
    ||      
  _(__)_    
   ^^^^     
```

#### `STOMP`
```text
            
    (>      
  /=||=\    
  _(__)_    
  >^^  ^^<  
```

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse + HONK overlay_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 3, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
    HONK!   
     (>>    
     ||     
   _(__)_   
    ^^^^    
```

#### `SCAN_L`
```text
    HONK!   
  <<)       
    ||      
   _(__)_   
    ^^^^    
```

#### `SCAN_R`
```text
    HONK!   
       (>>  
      ||    
   _(__)_   
    ^^^^    
```

#### `RAISE`
```text
   HONK!!   
 <===(>>===>
     ||     
   _(__)_   
    ^^^^    
```

#### `LUNGE`
```text
  HONK!!!   
       (>>> 
      _||_  
    _(__)_  
    /^^^\   
```

#### `GLARE`
```text
    HONK!   
    (-->    
    ||      
  _(__)_    
  /^ ^^ ^\  
```

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses + confetti rain + HONK_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -7, -3, 0, 0, 0, 0, 0, 0, -3, -7, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
    (>      
   _||_     
  (____)    
   ^^^^     
```

#### `JUMP`
```text
  HONK!     
    (>>     
 <==||==>   
  _(__)_    
   /  \     
```

#### `PEAK`
```text
 *HONK!HONK*
    (^^>    
<===||===>  
  _(__)_    
   /  \     
```

#### `SPIN_L`
```text
             
  <)         
<==||        
  _(__)_     
   ^^^^      
```

#### `SPIN_R`
```text
            
       (>   
       ||==>
  _(__)_    
   ^^^^     
```

#### `POSE`
```text
    \o/     
    (>>     
 <==||==>   
 _(____)_   
   /^^\     
```

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses + orbiting stars_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
            
   (x       
   ||\      
  _(__)_    
   v^^v     
```

#### `TILT_R`
```text
            
       x)   
      /||   
    _(__)_  
     v^^v   
```

#### `WOOZY`
```text
            
    (@      
    ||~     
  _(__)_    
    ~vv~    
```

#### `WOOZY2`
```text
            
    @)      
   ~||      
  _(__)_    
    ~vv~    
```

#### `STUMBLE`
```text
            
    (X      
    /\      
 _(____)_   
  v^v  v^v  
```

## Heart

_─── HEART ───  ~10s cycle, 5 poses + rising heart stream_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
            
    (^>     
    ||      
  _(__)_    
   ^^^^     
```

#### `BLUSH`
```text
            
   #(^>#    
    ||      
  _(__)_    
   ^^^^     
```

#### `EYES_C`
```text
            
    (<3>    
    ||      
  _(__)_    
   ^^^^     
```

#### `TWIRL`
```text
            
    (@>     
 <==||==>   
  _(__)_    
   ^^^^     
```

#### `SIGH`
```text
    ~~~     
    (->     
    ||      
  _(__)_    
   ^^^^     
```

