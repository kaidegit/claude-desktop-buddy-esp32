# snail

- **Source:** `src/buddies/snail.cpp`
- **Namespace:** `snail`
- **Body color:** `0xD8FE`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses — tucked in shell, snoring slime bubbles_

- **Sequence length:** 24 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 1, 0, 1, 0, 1, 3, 3, 3, 3, 4, 4, 4, 4, 1, 5, 1, 1]`

### Poses

#### `TUCK`
```text
            
     .--.   
    ( zz )  
   `-____-` 
  ~~~~~~~~  
```

#### `BREATHE`
```text
            
     .--.   
    ( -- )  
   `-____-` 
  ~~~~~~~~  
```

#### `SNORE`
```text
      o     
     .--.   
    ( __ )  
   `-____-` 
  ~~~~~~~~  
```

#### `DEEP`
```text
      O     
     .--.   
    ( __ )  
   `-zzzz-` 
  ~~~~~~~~  
```

#### `DREAM`
```text
    . o O   
     .--.   
    ( UU )  
   `-____-` 
  ~~~~~~~~  
```

#### `TWITCH`
```text
            
     .--.   
    ( ^^ )  
   `-____-` 
 ~~~~~~~~~~ 
```

### Overlays / effects

- Z particles drift up-left (snails are slow, gentle Z's)

## Idle

_─── IDLE ───  ~14s cycle, 10 poses — antennae wiggle, eye peeks, slime trail_

- **Sequence length:** 30 beats
- **Sequence:** `[0, 0, 0, 1, 0, 2, 0, 4, 0, 5, 6, 5, 6, 0, 0, 0, 3, 3, 0, 4, 7, 8, 7, 8, 0, 9, 9, 9, 0, 0]`

### Poses

#### `REST`
```text
  \\  /     
    .--.    
  _( oo )_  
 (___@@___) 
  ~~~~~~~~  
```

#### `LOOK_L`
```text
  \\  /     
    .--.    
  _(<<  )_  
 (___@@___) 
  ~~~~~~~~  
```

#### `LOOK_R`
```text
  \\  /     
    .--.    
  _(  >>)_  
 (___@@___) 
  ~~~~~~~~  
```

#### `LOOK_U`
```text
  \\  /     
    .--.    
  _( ^^ )_  
 (___@@___) 
  ~~~~~~~~  
```

#### `BLINK`
```text
  \\  /     
    .--.    
  _( -- )_  
 (___@@___) 
  ~~~~~~~~  
```

#### `WIGGLE_L`
```text
  /  //     
    .--.    
  _( oo )_  
 (___@@___) 
  ~~~~~~~~  
```

#### `WIGGLE_R`
```text
  \\  \\    
    .--.    
  _( oo )_  
 (___@@___) 
  ~~~~~~~~  
```

#### `MUNCH_A`
```text
  \\  /     
    .--.    
  _( oo )_  
 (___ww___) 
  ~~~~~~~~  
```

#### `MUNCH_B`
```text
  \\  /     
    .--.    
  _( oo )_  
 (___WW___) 
  ~~~~~~~~  
```

#### `STRETCH`
```text
   \  /     
    .--.    
  _( oo )__ 
 (___@@____)
 ~~~~~~~~~~ 
```

### Overlays / effects

- Slow slime drip below trail

## Busy

_─── BUSY ───  ~10s cycle, 6 poses — shell spiral spinning, focused eyes, dot ticker_

- **Sequence length:** 21 beats
- **Sequence:** `[0, 1, 2, 3, 0, 1, 2, 3, 4, 4, 0, 1, 2, 3, 4, 4, 5, 0, 1, 2, 3]`

### Poses

#### `SPIRAL_A`
```text
  \\  /     
    .o-.    
  _( vv )_  
 (___--___) 
  ~~~~~~~~  
```

#### `SPIRAL_B`
```text
  \\  /     
    .-o.    
  _( vv )_  
 (___--___) 
  ~~~~~~~~  
```

#### `SPIRAL_C`
```text
  \\  /     
    .--.    
  _( vv )o  
 (___--___) 
  ~~~~~~~~  
```

#### `SPIRAL_D`
```text
  \\  /     
    .--.    
  o( vv )_  
 (___--___) 
  ~~~~~~~~  
```

#### `THINK`
```text
 ? \\  /    
    .--.    
  _( ^^ )_  
 (___..___) 
  ~~~~~~~~  
```

#### `EUREKA`
```text
 * \\  / *  
    .--.    
  _( OO )_  
 (___^^___) 
  ~~~~~~~~  
```

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses — antennae periscope up, scanning_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
  ||  ||    
    .--.    
  _( OO )_  
 (___OO___) 
  ~~~~~~~~  
```

#### `SCAN_L`
```text
  \\  \\    
    .--.    
  _(OO  )_  
 (___OO___) 
  ~~~~~~~~  
```

#### `SCAN_R`
```text
  //  //    
    .--.    
  _(  OO)_  
 (___OO___) 
  ~~~~~~~~  
```

#### `SCAN_U`
```text
  ||  ||    
    .--.    
  _( ^^ )_  
 (___OO___) 
  ~~~~~~~~  
```

#### `TENSE`
```text
  ||  ||    
   /.--.\   
  _( OO )_  
/(___OO___)\
 /~~~~~~~~\ 
```

#### `HUSH`
```text
  \|  |/    
    .--.    
  _( oo )_  
 (___..___) 
  ~~~~~~~~  
```

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses — shell hops, antennae fling, confetti rain_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -6, -3, 0, 0, 0, 0, 0, 0, -3, -6, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
  \\  /     
    .--.    
  _( ^^ )_  
 (___ww___) 
 /~~~~~~~~\ 
```

#### `JUMP`
```text
  \^  ^/    
   _.--._   
  ( ^  ^ )  
 (___ww___) 
  ~~~~~~~~  
```

#### `PEAK`
```text
  \(  )/    
   _.--._   
  ( **  ) ) 
 (___WW___) 
  ~~~~~~~~  
```

#### `SPIN_L`
```text
  /\        
    .--.    
  _( <<)_   
 (___ww___) 
  ~~~~~~~~  
```

#### `SPIN_R`
```text
        /\  
    .--.    
   _(>> )_  
 (___ww___) 
  ~~~~~~~~  
```

#### `POSE`
```text
  \\  // *  
  * .--.    
  _( ^^ )_  
/(___WW___)\
  ~~~~~~~~  
```

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses — shell wobble, antennae droop, orbiting stars_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
  \\\       
   .--.     
  ( @x )    
 (___~v___) 
  ~~~~~~~~  
```

#### `TILT_R`
```text
       ///  
     .--.   
    ( x@ )  
 (___v~___) 
  ~~~~~~~~  
```

#### `WOOZY`
```text
  \~  ~/    
    .--.    
  _( @x )_  
 (___~v___) 
  ~~~~~~~~  
```

#### `WOOZY2`
```text
  ~\  /~    
    .--.    
  _( x@ )_  
 (___v~___) 
  ~~~~~~~~  
```

#### `STUMBLE`
```text
  \v  v/    
    .--.    
  _( @@ )_  
 (___--___) 
 /~_~~_~~\  
```

## Heart

_─── HEART ───  ~10s cycle, 5 poses — twined antennae, heart eyes, rising hearts_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
  \\  /     
    .--.    
  _( ^^ )_  
 (___ww___) 
  ~~~~~~~~  
```

#### `BLUSH`
```text
  \\  /     
    .--.    
  _(#^^#)_  
 (___ww___) 
  ~~~~~~~~  
```

#### `EYES_C`
```text
  \\  /     
    .--.    
  _(<3<3)_  
 (___ww___) 
  ~~~~~~~~  
```

#### `TWINE`
```text
  \\//      
    .--.    
  _( @@ )_  
 (___ww___) 
 /~~~~~~~~\ 
```

#### `SIGH`
```text
  \\  /     
    .--.    
  _( -- )_  
 (___^^___) 
  ~~~~~~~~  
```

