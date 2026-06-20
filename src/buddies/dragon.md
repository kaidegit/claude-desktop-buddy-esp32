# dragon

- **Source:** `src/buddies/dragon.cpp`
- **Namespace:** `dragon`
- **Body color:** `0xF800`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses_

- **Sequence length:** 27 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 1, 0, 1, 0, 1, 3, 4, 3, 4, 1, 2, 1, 5, 5, 0, 0, 1, 2, 1, 2]`

### Poses

#### `CURL`
```text
            
            
   _____    
  (--   )~  
  `vvvvv'   
```

#### `BREATH`
```text
            
            
   _____    
  (--   )~~ 
  `vvvvv'   
```

#### `PUFF`
```text
            
       o    
   _____    
  (--   )~~ 
  `vvvvv'   
```

#### `TWITCH`
```text
            
  /v\  /v\  
 <  --  -- >
 (        ) 
  `-vvvv-'  
```

#### `SNORE`
```text
            
  /^\  /^\  
 <  oo  oo >
 (   __   ) 
  `-vvvv-'  
```

#### `HOARD`
```text
            
            
   _____    
  (--   )$  
  `vvvvv'$$ 
```

### Overlays / effects

- Z's drift up-right, smoke puff drifts up
- Smoke ring rising

## Idle

_─── IDLE ───  ~14s cycle, 10 poses_

- **Sequence length:** 34 beats
- **Sequence:** `[0, 0, 1, 0, 2, 0, 3, 4, 5, 4, 5, 4, 5, 0, 0, 6, 7, 0, 3, 0, 8, 8, 0, 1, 2, 0, 9, 9, 0, 0, 7, 0, 8, 0]`

### Poses

#### `PROUD`
```text
            
  /^\  /^\  
 <  o    o >
 (   ww   ) 
  `-vvvv-'  
```

#### `LOOK_L`
```text
            
  /^\  /^\  
 <o     o  >
 (   ww   ) 
  `-vvvv-'  
```

#### `LOOK_R`
```text
            
  /^\  /^\  
 <  o     o>
 (   ww   ) 
  `-vvvv-'  
```

#### `BLINK`
```text
            
  /^\  /^\  
 <  -    - >
 (   ww   ) 
  `-vvvv-'  
```

#### `WING_UP`
```text
  /^\  /^\  
  \_/  \_/  
 <  o    o >
 (   ww   ) 
  `-vvvv-'  
```

#### `WING_DN`
```text
            
  \v/  \v/  
 <  o    o >
 (   ww   ) 
  `-vvvv-'  
```

#### `SNIFF`
```text
      ~     
  /^\  /^\  
 <  o    o >
 (   nn   ) 
  `-vvvv-'  
```

#### `PUFF_R`
```text
         ~  
  /^\  /^\  
 <  o    o >
 (   ww   )~
  `-vvvv-'  
```

#### `SMUG`
```text
            
  /^\  /^\  
 <  ^    ^ >
 (   --   ) 
  `-vvvv-'  
```

#### `STRETCH`
```text
  /^\  /^\   
 //^\  /^\\  
< <  o   o> >
  (   ww  )  
   `-vvvv-'  
```

### Overlays / effects

- Tiny smoke trail from nostrils when sniffing/puffing

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + gold-coin ticker_

- **Sequence length:** 21 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 2, 0, 1, 0, 1, 3, 3, 2, 4, 0, 1, 0, 1, 5]`

### Poses

#### `COUNT_A`
```text
    $$$$    
  /^\  /^\  
 <  v    v >
 (   --   ) 
 /`-vvvv-'\ 
```

#### `COUNT_B`
```text
    $$$$    
  /^\  /^\  
 <  v    v >
 (   __   ) 
 \`-vvvv-'/ 
```

#### `PONDER`
```text
      ?     
  /^\  /^\  
 <  ^    ^ >
 (   ..   ) 
  `-vvvv-'  
```

#### `STACK`
```text
    [$]     
  /^|  /^\  
 <  v|   v >
 (   --   ) 
  `-vvvv-'  
```

#### `EUREKA`
```text
      *     
  /^\  /^\  
 <  O    O >
 (   ^^   )~
  `-vvvv-'  
```

#### `PUFF_OUT`
```text
    ~~~~    
  /^\  /^\  
 <  -    - >
 (   __   ) 
  `-vvvv-'  
```

### Overlays / effects

- Gold coins clinking — '$' and '.' alternate
- Sparkle on top of pile

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 3, 5, 0]`

### Poses

#### `ROAR`
```text
    ^  ^    
 /^^\  /^^\ 
<  O    O  >
 (   <>   ) 
  `-vvvv-'  
```

#### `SCAN_L`
```text
    ^  ^    
 /^^\  /^^\ 
< O      O >
 (   O    ) 
  `-vvvv-'  
```

#### `SCAN_R`
```text
    ^  ^    
 /^^\  /^^\ 
<  O      O>
 (    O   ) 
  `-vvvv-'  
```

#### `FLAME`
```text
  ~~~  ~~~  
 /^^\  /^^\ 
<  O    O  >
 (   <>   )~
  `-vvvv-'  
```

#### `PUFF_UP`
```text
    ^  ^    
/^^^\  /^^^\
<  O    O  >
((  <>   ))~
 /`-vvvv-'\ 
```

#### `HISS`
```text
    ^  ^    
 /^^\  /^^\ 
<  o    o  >
 (   ss   ) 
  `-vvvv-'  
```

### Overlays / effects

- Pulsing exclamations
- Flame puff after a flame frame

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses + multicolor confetti_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -6, -3, 0, 0, 0, 0, 0, 0, -3, -6, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
  /^\  /^\  
 <  ^    ^ >
 (   WW   ) 
 /`-vvvv-'\ 
```

#### `JUMP`
```text
  \(    )/  
   /^\/^\   
 <  ^    ^ >
 (   WW   ) 
  `-vvvv-'  
```

#### `PEAK`
```text
  \^    ^/  
  //^\/^\\  
 <  *    * >
 (   OO   ) 
  `-vvvv-'  
```

#### `SPIN_L`
```text
            
  /^\  /^\  
< <    <  > 
 (   ww   ) 
  `-vvvv-'  
```

#### `SPIN_R`
```text
            
  /^\  /^\  
 <  >    > >
 (   ww   ) 
  `-vvvv-'  
```

#### `POSE`
```text
    \$$/    
  /^\  /^\  
 <  ^    ^ >
/(   WW   )\
  `-vvvv-'  
```

### Overlays / effects

- Multicolor confetti raining

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses + orbiting stars_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
            
 /^\  /^\   
< @    @ )  
 (   ~~   ) 
  `-vvvv-'  
```

#### `TILT_R`
```text
            
   /^\  /^\ 
  ( @    @ >
 (   ~~   ) 
  `-vvvv-'  
```

#### `WOOZY`
```text
            
  /v\  /^\  
 <  x    @ >
 (   ~v   ) 
  `-vvvv-'  
```

#### `WOOZY2`
```text
            
  /^\  /v\  
 <  @    x >
 (   v~   ) 
  `-vvvv-'  
```

#### `STUMBLE`
```text
            
  /v\  /v\  
 <  @    @ >
 (   --   ) 
 /`_-vv-_'\ 
```

### Overlays / effects

- Orbiting stars
- Spinning '$' coin to remind us this is a dragon

## Heart

_─── HEART ───  ~10s cycle, 5 poses + rising heart stream_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
            
  /^\  /^\  
 <  ^    ^ >
 (   ww   ) 
  `-vvvv-'  
```

#### `BLUSH`
```text
            
  /^\  /^\  
 <#^    ^# >
 (   ww   ) 
  `-vvvv-'  
```

#### `EYES_C`
```text
            
  /^\  /^\  
 < <3  <3  >
 (   ww   ) 
  `-vvvv-'  
```

#### `TWIRL`
```text
            
  /^\  /^\  
 <  @    @ >
 (   ww   ) 
 /`-vvvv-'\ 
```

#### `SIGH`
```text
      v     
  /^\  /^\  
 <  -    - >
 (   ^^   )~
  `-vvvv-'  
```

### Overlays / effects

- Rising heart stream
- Lovesick smoke ring drifts up

