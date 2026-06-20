# duck

- **Source:** `src/buddies/duck.cpp`
- **Namespace:** `duck`
- **Body color:** `0xFFE0`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, head tucked, gentle bobs on water_

- **Sequence length:** 23 beats
- **Sequence:** `[0, 0, 1, 0, 1, 2, 1, 0, 1, 0, 1, 3, 3, 4, 4, 3, 4, 0, 0, 1, 5, 1, 1]`

### Poses

#### `TUCK`
```text
            
            
    __      
  <(-_)_)   
 ~~~~~~~~~~ 
```

#### `BREATHE`
```text
            
    __      
  <(-_)_)   
  ~~~~~~~~  
   ~~~~~~   
```

#### `SNORE`
```text
            
    __      
  <(o.)_)   
  ~~~~~~~~  
   ~~~~~~   
```

#### `DRIFT_L`
```text
            
   __       
 <(-_)_)    
 ~~~~~~~~~~ 
  ~~~~~~~~  
```

#### `DRIFT_R`
```text
            
     __     
   <(-_)_)  
 ~~~~~~~~~~ 
  ~~~~~~~~  
```

#### `DREAM`
```text
            
    __      
  <(uu)_)   
 ~~~~~~~~~~ 
  ~~~~~~~~  
```

### Overlays / effects

- Z particles drift up-right

## Idle

_─── IDLE ───  ~14s cycle, 10 micro-actions_

- **Sequence length:** 30 beats
- **Sequence:** `[0, 0, 0, 1, 0, 2, 0, 4, 0, 5, 0, 0, 6, 7, 6, 7, 0, 0, 3, 3, 0, 4, 8, 0, 8, 0, 9, 9, 0, 0]`

### Poses

#### `REST`
```text
            
    __      
  <(o )___  
   (  ._>   
    `--´    
```

#### `LOOK_L`
```text
            
    __      
 <<(o )___  
   (  ._>   
    `--´    
```

#### `LOOK_R`
```text
            
    __      
  <( o)___  
   (  ._>   
    `--´    
```

#### `LOOK_U`
```text
    __      
  <(^ )     
  (    )___ 
   (  ._>   
    `--´    
```

#### `BLINK`
```text
            
    __      
  <(- )___  
   (  ._>   
    `--´    
```

#### `QUACK`
```text
            
    __      
  <O(o)___  
   (  ._>   
    `--´    
```

#### `PREEN_A`
```text
            
    __      
  <(o )___  
   ( v.->   
    `--´    
```

#### `PREEN_B`
```text
            
    __      
  <(o )___  
   ( ^.->   
    `--´    
```

#### `WAG_L`
```text
            
    __      
  <(o )___  
   (  ._<   
    `--´    
```

#### `SHAKE`
```text
            
    __      
  <(o )___  
  ~(  ._>~  
   ~`--´~   
```

## Busy

_─── BUSY ───  ~10s cycle, focused waddle/work + bubble ticker_

- **Sequence length:** 23 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 5, 5, 0, 1, 0, 1, 2, 3, 3, 2, 4, 4, 0, 1, 0, 1, 5]`

### Poses

#### `PADDLE_A`
```text
            
    __      
  <(o )___  
   (  ._>   
  ~ `--´    
```

#### `PADDLE_B`
```text
            
    __      
  <(o )___  
   (  ._>   
    `--´ ~  
```

#### `DIVE_A`
```text
            
            
    __      
  <(v )_O_  
   ( ._>~~~ 
```

#### `DIVE_B`
```text
            
            
      _o_   
    ^>>     
  ~~~~~~~~  
```

#### `SURFACE`
```text
            
    __      
  <(O )___  
  *(  ._>*  
  ~~~~~~~~  
```

#### `THINK`
```text
      ?     
    __      
  <(o )___  
   (  ._>   
    `--´    
```

### Overlays / effects

- Bubble stream rising

## Attention

_─── ATTENTION ───  ~8s cycle, head up alert + ! pulse_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 5, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
    __      
  <(O )     
  (    )___ 
   (  ._>   
    `--´    
```

#### `SCAN_L`
```text
    __      
 <<(O )     
  (    )___ 
   (  ._>   
    `--´    
```

#### `SCAN_R`
```text
    __      
  <( O)     
  (    )___ 
   (  ._>   
    `--´    
```

#### `CRANE`
```text
  <(O )     
    ||      
    ||      
   (  ._>   
    `--´    
```

#### `TENSE`
```text
    __      
 /<(O )\    
 /(    )___ 
  /(  ._>\  
   /`--´\   
```

#### `HONK`
```text
    __      
  <O(O )    
  (    )___ 
   (  ._>   
    `--´    
```

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, splash jump + confetti_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -6, -3, 0, 0, 0, 0, 0, 0, -3, -6, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
    __      
  <(^ )___  
   (  ._>   
 /`--´\     
```

#### `JUMP`
```text
  \(    )/  
    __      
  <(^ )___  
   (  ._>   
    `--´    
```

#### `PEAK`
```text
  \^ __ ^/  
   <(^ )___ 
   (  ._>   
    `--´    
  ~~~~~~~~  
```

#### `SPLASH_L`
```text
            
    __      
  <(^ )___  
 ~~( ._> )~ 
  ~~`--´~~  
```

#### `SPLASH_R`
```text
            
    __      
  <(^ )___  
  ~~( ._>~~ 
   ~`--´~   
```

#### `POSE`
```text
    \__/    
    __      
  <(^ )___  
 /(  ._>\   
    `--´    
```

## Dizzy

_─── DIZZY ───  ~5.6s cycle, woozy waddle + orbiting stars_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
            
   __       
 <(@ )___   
  (  .~>    
   `--´     
```

#### `TILT_R`
```text
            
     __     
   <(@ )___ 
    (  .~>  
     `--´   
```

#### `WOOZY`
```text
            
    __      
  <(x@)___  
   ( ~~>    
    `--´    
```

#### `WOOZY2`
```text
            
    __      
  <(@x)___  
   ( ~~>    
    `--´    
```

#### `STUMBLE`
```text
            
    __      
  <(@ )___  
   (  ~~>   
 /`-_---_'\ 
```

## Heart

_─── HEART ───  ~10s cycle, dreamy float + heart stream_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
            
    __      
  <(^ )___  
   (  ._>   
    `--´    
```

#### `BLUSH`
```text
            
    __      
  <(^#)___  
   (  ._>   
    `--´    
```

#### `EYES_C`
```text
            
    __      
  <(<3)___  
   (  ._>   
    `--´    
```

#### `TWIRL`
```text
            
    __      
  <(@ )___  
   (  ._>   
 /`--´\     
```

#### `SIGH`
```text
            
    __      
  <(- )___  
   (  ^_>   
    `--´    
```

