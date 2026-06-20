# turtle

- **Source:** `src/buddies/turtle.cpp`
- **Namespace:** `turtle`
- **Body color:** `0x07E0`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses (turtle retracts into shell)_

- **Sequence length:** 27 beats
- **Sequence:** `[0, 0, 0, 0, 1, 0, 2, 3, 2, 3, 2, 3, 2, 3, 0, 0, 4, 4, 4, 2, 3, 2, 3, 1, 5, 1, 0]`

### Poses

#### `TUCKED`
```text
            
   _,--._   
  /      \  
 /[______]\ 
  ``    ``  
```

#### `PEEK`
```text
            
   _,--._   
  (-_    -) 
 /[______]\ 
  ``    ``  
```

#### `SNORE_A`
```text
            
   _,--._   
  ( -    -) 
 /[__zz__]\ 
  ``    ``  
```

#### `SNORE_B`
```text
            
   _,--._   
  ( -    -) 
 /[__ZZ__]\ 
  ``    ``  
```

#### `CURL`
```text
            
            
   _,--._   
  ( ____  ) 
 /[______]\ 
```

#### `DREAM`
```text
            
   _,--._   
  ( o    o) 
 /[__~~__]\ 
  ``    ``  
```

### Overlays / effects

- Z particles drift up-right from shell

## Idle

_─── IDLE ───  ~14s cycle, 10 poses (slow & steady micro-actions)_

- **Sequence length:** 40 beats
- **Sequence:** `[0, 0, 0, 1, 0, 2, 0, 3, 0, 0, 4, 4, 0, 5, 5, 0, 0, 3, 0, 0, 7, 8, 7, 8, 7, 8, 0, 0, 6, 6, 0, 0, 3, 0, 0, 9, 9, 9, 0, 0]`

### Poses

#### `REST`
```text
            
   _,--._   
  ( o    o) 
 /[______]\ 
  ``    ``  
```

#### `LOOK_L`
```text
            
   _,--._   
  (o     o) 
 /[______]\ 
  ``    ``  
```

#### `LOOK_R`
```text
            
   _,--._   
  ( o     o)
 /[______]\ 
  ``    ``  
```

#### `BLINK`
```text
            
   _,--._   
  ( -    -) 
 /[______]\ 
  ``    ``  
```

#### `PEEK_L`
```text
            
   _,--._   
 <( o    o) 
 /[______]\ 
  ``    ``  
```

#### `PEEK_R`
```text
            
   _,--._   
  ( o    o)>
 /[______]\ 
  ``    ``  
```

#### `CHEW`
```text
            
   _,--._   
  ( o    o) 
 /[______]\ 
  `'    `'  
```

#### `STEP_A`
```text
            
   _,--._   
  ( o    o) 
 /[______]\ 
  ,'    ``  
```

#### `STEP_B`
```text
            
   _,--._   
  ( o    o) 
 /[______]\ 
  ``    ',  
```

#### `STRETCH`
```text
            
   _,--._   
 _( o    o)_
/-[______]-\
  ``    ``  
```

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + dot ticker (deliberate plodding)_

- **Sequence length:** 22 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 2, 0, 1, 0, 1, 3, 3, 3, 2, 4, 0, 1, 0, 1, 5]`

### Poses

#### `PUSH_A`
```text
            
   _,--._   
  ( v    v) 
 /[______]\ 
  >`    >`  
```

#### `PUSH_B`
```text
            
   _,--._   
  ( v    v) 
 /[______]\ 
  `>    `>  
```

#### `THINK`
```text
      ?     
   _,--._   
  ( ^    ^) 
 /[__..__]\ 
  ``    ``  
```

#### `CARRY`
```text
    [#]     
   _,-#-._  
  ( o    o) 
 /[______]\ 
  ``    ``  
```

#### `EUREKA`
```text
      *     
   _,--._   
  ( O    O) 
 /[__^^__]\ 
  >`    >`  
```

#### `PUFF`
```text
    ~~~     
   _,--._   
  ( -    -) 
 /[______]\ 
  ``    ``  
```

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse (head fully extended, scanning)_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
            
   _,--._   
  ( O    O) 
 /[__||__]\ 
  ``    ``  
```

#### `SCAN_L`
```text
            
   _,--._   
 <(O     O) 
 /[__||__]\ 
  ``    ``  
```

#### `SCAN_R`
```text
             
   _,--._    
  ( O     O)>
 /[__||__]\  
  ``    ``   
```

#### `SCAN_U`
```text
    ^  ^    
   _,--._   
  ( ^    ^) 
 /[__||__]\ 
  ``    ``  
```

#### `TENSE`
```text
            
  /^_,--._^\
  ( O    O) 
 /[__||__]\ 
 /``    ``\ 
```

#### `HISS`
```text
            
   _,--._   
  ( o    o) 
 /[__><__]\ 
  ``    ``  
```

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses + confetti rain (tiny but determined hops)_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -6, -3, 0, 0, 0, 0, 0, 0, -3, -6, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
   _,--._   
  ( ^    ^) 
 /[__ww__]\ 
 /``    ``\ 
```

#### `HOP`
```text
  \(    )/  
   _,--._   
  ( ^    ^) 
 /[__ww__]\ 
  ``    ``  
```

#### `PEAK`
```text
  \^    ^/  
   _,--._   
  ( ^    ^) 
 /[__WW__]\ 
  ``    ``  
```

#### `FLIP_L`
```text
            
   .--._    
  ( ^    ^) 
/[==_v_==]\ 
  ``    ``  
```

#### `FLIP_R`
```text
            
    _,--.   
  ( ^    ^) 
 /[==_v_==]\
  ``    ``  
```

#### `POSE`
```text
    \__/    
   _,--._   
  ( ^    ^) 
/[__WW__]\  
 /``    ``\ 
```

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses + orbiting stars (shell wobble)_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
            
  _,--._    
 ( @    @)  
/[__~~__]\  
 ``    ``   
```

#### `TILT_R`
```text
            
    _,--._  
  ( @    @) 
  /[__~~__]\
   ``    `` 
```

#### `WOOZY`
```text
            
   _,--._   
  ( x    @) 
 /[__~v__]\ 
  ``    ``  
```

#### `WOOZY2`
```text
            
   _,--._   
  ( @    x) 
 /[__v~__]\ 
  ``    ``  
```

#### `FLIP`
```text
            
  ``    ``  
 \[__~~__]/ 
  ( @    @) 
   `--''    
```

## Heart

_─── HEART ───  ~10s cycle, 5 poses + rising heart stream (dreamy turtle blush)_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
            
   _,--._   
  ( ^    ^) 
 /[__ww__]\ 
  ``    ``  
```

#### `BLUSH`
```text
            
   _,--._   
  (#^    ^#)
 /[__ww__]\ 
  ``    ``  
```

#### `EYES_C`
```text
            
   _,--._   
  (<3    <3)
 /[__ww__]\ 
  ``    ``  
```

#### `SWAY`
```text
            
   _,--._   
  ( @    @) 
 /[__ww__]\ 
 /``    ``\ 
```

#### `SIGH`
```text
            
   _,--._   
  ( -    -) 
 /[__^^__]\ 
  ``    ``  
```

