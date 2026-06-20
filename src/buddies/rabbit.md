# rabbit

- **Source:** `src/buddies/rabbit.cpp`
- **Namespace:** `rabbit`
- **Body color:** `0xFFFF`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses_

- **Sequence length:** 22 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 4, 1, 0, 1, 0, 1, 3, 3, 3, 3, 2, 2, 1, 5, 1, 1]`

### Poses

#### `CURL`
```text
            
    (\_/)   
   ( -.- )  
  (zzz___)  
   `""""`   
```

#### `BREATHE`
```text
            
    (\_/)   
   ( -_- )  
  (___zz_)  
   `""""`   
```

#### `EARS_DN`
```text
            
    (v_v)   
   ( -.- )  
  (___..)   
   `""""`   
```

#### `SIDE`
```text
            
            
   .-^^^-.  
  ( -- zZ ) 
   `~~~~`   
```

#### `TWITCH`
```text
            
    (\_/)   
   ( -.- )  
  (~__zz_)  
   `""""`   
```

#### `DREAM`
```text
            
    (\_/)   
   ( u.u )  
  (___oo_)  
   `""""`   
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
    (\_/)   
   ( o o )  
  =(  v  )= 
   (")_(")  
            
```

#### `LOOK_L`
```text
    (\_/)   
   (o  o )  
  =(  v  )= 
   (")_(")  
            
```

#### `LOOK_R`
```text
    (\_/)   
   ( o  o)  
  =(  v  )= 
   (")_(")  
            
```

#### `LOOK_U`
```text
    (\_/)   
   ( ^ ^ )  
  =(  v  )= 
   (")_(")  
            
```

#### `BLINK`
```text
    (\_/)   
   ( - - )  
  =(  v  )= 
   (")_(")  
            
```

#### `EAR_L`
```text
    (/_\)   
   ( o o )  
  =(  v  )= 
   (")_(")  
            
```

#### `NOSE_A`
```text
    (\_/)   
   ( o o )  
  =(  ^  )= 
   (")_(")  
            
```

#### `NOSE_B`
```text
    (\_/)   
   ( o o )  
  =(  *  )= 
   (")_(")  
            
```

#### `CARROT`
```text
    (\_/)      
   ( o o )     
  =(  V  )= >--
   (")_(")     
               
```

#### `STRETCH`
```text
   (\___/)  
  ( o   o ) 
 =(   v   )=
   (")_(")  
            
```

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + dot ticker_

- **Sequence length:** 21 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 2, 0, 1, 0, 1, 3, 3, 2, 4, 0, 1, 0, 1, 5]`

### Poses

#### `DIG_A`
```text
    (\_/)   
   ( v v )  
  =(  v  )= 
  /(")_(")\ 
  ~~~~~~~~  
```

#### `DIG_B`
```text
    (\_/)    
   ( v v )   
  =(  v  )=  
  \(")_(")/  
  ~~~~~~~~   
```

#### `THINK`
```text
  ? (\_/)   
   ( o o )  
  =(  v  )= 
   (")_(")  
            
```

#### `GNAW`
```text
    (\_/) >-
   ( o o )==
  =(  W  )= 
   (")_(")  
            
```

#### `EUREKA`
```text
  * (\_/) * 
   ( O O )  
  =(  ^  )= 
  /(")_(")\ 
            
```

#### `WIPE`
```text
    (\_/)   
   ( - - )  
  =(  _  )= 
   (")_(")  
    ~~~~    
```

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
   /|  |\   
  /(\_/)\   
  ( O  O )  
  =(  v  )= 
   (")_(")  
```

#### `SCAN_L`
```text
   /|  |\   
  /(\_/)\   
  (O   O )  
  =(  v  )= 
   (")_(")  
```

#### `SCAN_R`
```text
   /|  |\   
  /(\_/)\   
  ( O   O)  
  =(  v  )= 
   (")_(")  
```

#### `SCAN_U`
```text
   /|  |\   
  /(\_/)\   
  ( ^  ^ )  
  =(  v  )= 
   (")_(")  
```

#### `TENSE`
```text
  /|/  \|\  
  /(\_/)\   
  ( O  O )  
  =(  v  )= 
  /(")_(")\ 
```

#### `HUSH`
```text
   /|  |\   
   (\_/)    
  ( o  o )  
  =(  .  )= 
   (")_(")  
```

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses + confetti rain_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -4, -8, -4, 0, 0, 0, 0, 0, 0, -4, -8, -4, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
    (\_/)   
   ( ^ ^ )  
  =(  v  )= 
   (")_(")  
  ~~~~~~~~  
```

#### `HOP`
```text
  \ (\_/) / 
   ( ^ ^ )  
  =(  v  )= 
   (")_(")  
            
```

#### `PEAK`
```text
  \ (\o/) /  
   ( ^ ^ )   
  =(  W  )=  
   ('')_('') 
             
```

#### `SPIN_L`
```text
    (\_/)   
   ( <  < ) 
  =(  v  )=/
   (")_(")  
            
```

#### `SPIN_R`
```text
    (\_/)   
   ( >  > ) 
 \=(  v  )= 
   (")_(")  
            
```

#### `POSE`
```text
   \(\_/)/  
   ( ^ ^ )  
  =(  W  )= 
  /(")_(")\ 
            
```

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses + orbiting stars_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
   (\_/)    
  ( @ @ )   
 =(  ~  )=  
  (")_(")   
            
```

#### `TILT_R`
```text
    (\_/)   
    ( @ @ ) 
   =(  ~  )=
    (")_(") 
            
```

#### `WOOZY`
```text
    (\_/)   
   ( x @ )  
  =(  ~v )= 
   (")_(")  
            
```

#### `WOOZY2`
```text
    (\_/)   
   ( @ x )  
  =( v~  )= 
   (")_(")  
            
```

#### `FLOP`
```text
    (\_/)   
   ( @ @ )  
  =(  -  )= 
  /(")_(")\ 
 ~~~~~~~~~~ 
```

## Heart

_─── HEART ───  ~10s cycle, 5 poses + rising heart stream_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
    (\_/)   
   ( ^ ^ )  
  =(  v  )= 
   (")_(")  
            
```

#### `BLUSH`
```text
    (\_/)   
   (#^ ^#)  
  =(  v  )= 
   (")_(")  
            
```

#### `EYES_C`
```text
    (\_/)   
   (<3 <3)  
  =(  v  )= 
   (")_(")  
            
```

#### `TWIRL`
```text
   \(\_/)/  
   ( @ @ )  
  =(  v  )= 
  /(")_(")\ 
            
```

#### `SIGH`
```text
    (v_v)   
   ( - - )  
  =(  ^  )= 
   (")_(")  
            
```

