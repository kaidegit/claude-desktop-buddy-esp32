# capybara

- **Source:** `src/buddies/capybara.cpp`
- **Namespace:** `capybara`
- **Body color:** `0xC2A6`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses_

- **Sequence length:** 24 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 1, 0, 1, 0, 1, 3, 4, 3, 4, 3, 4, 3, 3, 1, 5, 1, 1]`

### Poses

#### `FLAT`
```text
            
            
    .--.    
  _( -- )_  
 (___zz___) 
```

#### `BREATHE`
```text
            
    .--.    
  _( -- )_  
 (___..___) 
  ~~~~~~~~  
```

#### `SNORE`
```text
            
    .--.    
  _( __ )_  
 (___oO___) 
  ~~~~~~~~  
```

#### `SIDE`
```text
            
            
  .---___   
 (--   --)= 
  `~~~~~~`  
```

#### `SIDE_Z`
```text
            
            
  .---___   
 (-- ZZZ-)= 
  `~~~~~~`  
```

#### `YAWN`
```text
            
    .--.    
  _( ^^ )_  
 (___O____) 
  ~~~~~~~~  
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
            
  n______n  
 ( o    o ) 
 (   oo   ) 
  `------'  
```

#### `LOOK_L`
```text
            
  n______n  
 (o     o ) 
 (   oo   ) 
  `------'  
```

#### `LOOK_R`
```text
            
  n______n  
 ( o     o) 
 (   oo   ) 
  `------'  
```

#### `LOOK_U`
```text
            
  n______n  
 ( ^    ^ ) 
 (   oo   ) 
  `------'  
```

#### `BLINK`
```text
            
  n______n  
 ( -    - ) 
 (   oo   ) 
  `------'  
```

#### `EAR_TW`
```text
            
  ^______n  
 ( o    o ) 
 (   oo   ) 
  `------'  
```

#### `CHEW_A`
```text
            
  n______n  
 ( o    o ) 
 (   ww   ) 
  `------'  
```

#### `CHEW_B`
```text
            
  n______n  
 ( o    o ) 
 (   WW   ) 
  `------'  
```

#### `YAWN`
```text
            
  n______n  
 ( -    - ) 
 (   OO   ) 
  `------'  
```

#### `STRETCH`
```text
            
 /n______n\ 
/( o    o )\
 (   oo   ) 
  `------'  
```

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + dot ticker_

- **Sequence length:** 21 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 2, 0, 1, 0, 1, 3, 3, 2, 4, 0, 1, 0, 1, 5]`

### Poses

#### `TYPE_A`
```text
            
  n______n  
 ( v    v ) 
 (   --   ) 
 /`------'\ 
```

#### `TYPE_B`
```text
            
  n______n  
 ( v    v ) 
 (   __   ) 
 \`------'/ 
```

#### `THINK`
```text
      ?     
  n______n  
 ( ^    ^ ) 
 (   ..   ) 
  `------'  
```

#### `SIP`
```text
    [_]     
  n_____|n  
 ( o    o|) 
 (   --   ) 
  `------'  
```

#### `EUREKA`
```text
      *     
  n______n  
 ( O    O ) 
 (   ^^   ) 
 /`------'\ 
```

#### `RELIEF`
```text
    ~~~     
  n______n  
 ( -    - ) 
 (   __   ) 
  `------'  
```

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
    ^  ^    
 /^_____^\  
( O      O )
 (   O    ) 
  `------'  
```

#### `SCAN_L`
```text
    ^  ^    
 /^_____^\  
(O       O )
 (   O    ) 
  `------'  
```

#### `SCAN_R`
```text
    ^  ^    
 /^_____^\  
( O       O)
 (   O    ) 
  `------'  
```

#### `SCAN_U`
```text
    ^  ^    
 /^_____^\  
( ^      ^ )
 (   O    ) 
  `------'  
```

#### `TENSE`
```text
    ^  ^    
/^^_____^^\ 
( O      O )
 (   O    ) 
 /`------'\ 
```

#### `HUSH`
```text
    ^  ^    
 /^_____^\  
( o      o )
 (   .    ) 
  `------'  
```

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses + confetti rain_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -6, -3, 0, 0, 0, 0, 0, 0, -3, -6, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
  n______n  
 ( ^    ^ ) 
 (   ww   ) 
 /`------'\ 
```

#### `JUMP`
```text
  \(    )/  
   n____n   
 ( ^    ^ ) 
 (   ww   ) 
  `------'  
```

#### `PEAK`
```text
  \^    ^/  
   n____n   
 ( ^    ^ ) 
 (   WW   ) 
  `------'  
```

#### `SPIN_L`
```text
            
  n______n  
( <    < ) /
 (   ww   ) 
  `------'  
```

#### `SPIN_R`
```text
            
  n______n  
\( >    > ) 
 (   ww   ) 
  `------'  
```

#### `POSE`
```text
    \__/    
  n______n  
 ( ^    ^ ) 
/(   WW   )\
  `------'  
```

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses + orbiting stars_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
            
 n______n   
( @    @ )  
 (   ~~   ) 
  `------'  
```

#### `TILT_R`
```text
            
   n______n 
  ( @    @ )
 (   ~~   ) 
  `------'  
```

#### `WOOZY`
```text
            
  n______n  
 ( x    @ ) 
 (   ~v   ) 
  `------'  
```

#### `WOOZY2`
```text
            
  n______n  
 ( @    x ) 
 (   v~   ) 
  `------'  
```

#### `STUMBLE`
```text
            
  n______n  
 ( @    @ ) 
 (   --   ) 
 /`-_---_'\ 
```

## Heart

_─── HEART ───  ~10s cycle, 5 poses + rising heart stream_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
            
  n______n  
 ( ^    ^ ) 
 (   ww   ) 
  `------'  
```

#### `BLUSH`
```text
            
  n______n  
 (#^    ^#) 
 (   ww   ) 
  `------'  
```

#### `EYES_C`
```text
            
  n______n  
 ( <3  <3 ) 
 (   ww   ) 
  `------'  
```

#### `TWIRL`
```text
            
  n______n  
 ( @    @ ) 
 (   ww   ) 
 /`------'\ 
```

#### `SIGH`
```text
            
  n______n  
 ( -    - ) 
 (   ^^   ) 
  `------'  
```

