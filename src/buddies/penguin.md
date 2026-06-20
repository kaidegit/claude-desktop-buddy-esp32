# penguin

- **Source:** `src/buddies/penguin.cpp`
- **Namespace:** `penguin`
- **Body color:** `0x041F`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses, curled on ice_

- **Sequence length:** 24 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 1, 0, 1, 0, 1, 3, 4, 3, 4, 3, 4, 3, 3, 1, 5, 1, 1]`

### Poses

#### `TUCK`
```text
            
   .---.    
  ( -- )    
  (_____)   
   ~~~~~    
```

#### `BREATHE`
```text
            
   .---.    
  ( -- )    
  (_____)   
   =====    
```

#### `SNORE`
```text
    o O .   
   .---.    
  ( __ )    
  (_____)   
   =====    
```

#### `TIPPED`
```text
            
            
  .-----.   
 ( --   )=> 
  `~~~~~`   
```

#### `TIPPED2`
```text
            
            
  .-----.   
 ( zz   )=> 
  `~~~~~`   
```

#### `TWITCH`
```text
            
   .---.    
  ( ^^ )    
 /(_____)   
   ~~~~~    
```

### Overlays / effects

- Z particles drift up-right with cold-blue tint

## Idle

_─── IDLE ───  ~14s cycle, 10 poses of waddling, formal posture_

- **Sequence length:** 34 beats
- **Sequence:** `[0, 0, 1, 2, 1, 2, 0, 3, 0, 4, 0, 5, 0, 6, 6, 0, 3, 0, 1, 2, 1, 2, 0, 7, 7, 0, 0, 8, 8, 0, 9, 9, 0, 0]`

### Poses

#### `STAND`
```text
   .---.    
  ( o>o )   
 /(     )\  
  `-----`   
   J   L    
```

#### `WAD_L`
```text
   .---.    
  ( o>o )   
/(     )    
  `-----`   
  J    L    
```

#### `WAD_R`
```text
   .---.    
  ( o>o )   
 (     )\   
  `-----`   
   J    L   
```

#### `BLINK`
```text
   .---.    
  ( ->- )   
 /(     )\  
  `-----`   
   J   L    
```

#### `LOOK_L`
```text
   .---.    
  (o> o )   
 /(     )\  
  `-----`   
   J   L    
```

#### `LOOK_R`
```text
   .---.    
  ( o >o)   
 /(     )\  
  `-----`   
   J   L    
```

#### `PREEN`
```text
   .---.    
  ( o>o )   
 /(  v  )\  
  `-----`   
   J   L    
```

#### `FLAP`
```text
  \.---./   
  ( o>o )   
/(     )\   
  `-----`   
   J   L    
```

#### `BOW`
```text
            
   .---.    
  ( v>v )   
 /(_____)\  
   J   L    
```

#### `STRETCH`
```text
  /.---.\   
 ( ^>^ )    
//(     )\\ 
  `-----`   
   J   L    
```

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + dot ticker, formal flipper-typing_

- **Sequence length:** 21 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 2, 0, 1, 0, 1, 3, 3, 2, 4, 0, 1, 0, 1, 5]`

### Poses

#### `TYPE_A`
```text
   .---.    
  ( v>v )   
 /(     )\  
 /`-----`\  
   J   L    
```

#### `TYPE_B`
```text
   .---.    
  ( v>v )   
 \(     )/  
 \`-----`/  
   J   L    
```

#### `THINK`
```text
      ?     
   .---.    
  ( ^>^ )   
 /(  .  )\  
   J   L    
```

#### `SIP`
```text
    [_]     
   .---.|   
  ( o>o |   
 /(     )\  
   J   L    
```

#### `EUREKA`
```text
      *     
   .---.    
  ( O>O )   
 /(  ^  )\  
   J   L    
```

#### `RELIEF`
```text
    ~~~     
   .---.    
  ( ->- )   
 /(  _  )\  
   J   L    
```

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse, alert flippers up_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
   .---.    
  ( O>O )   
 /(     )\  
  `-----`   
   J   L    
```

#### `SCAN_L`
```text
   .---.    
  (O> O )   
 /(     )\  
  `-----`   
   J   L    
```

#### `SCAN_R`
```text
   .---.    
  ( O >O)   
 /(     )\  
  `-----`   
   J   L    
```

#### `SCAN_U`
```text
   .---.    
  ( ^>^ )   
 /(     )\  
  `-----`   
   J   L    
```

#### `TENSE`
```text
  /.---.\   
 /( O>O )\  
//(     )\\ 
  `-----`   
  J     L   
```

#### `HUSH`
```text
   .---.    
  ( o>o )   
 /(  .  )\  
  `-----`   
   J   L    
```

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses + confetti rain, jumping penguin_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -6, -3, 0, 0, 0, 0, 0, 0, -3, -6, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
   .---.    
  ( ^>^ )   
 /(_____)\  
   J   L    
```

#### `JUMP`
```text
  \.---./   
  ( ^>^ )   
 /(     )\  
  `-----`   
   ^   ^    
```

#### `PEAK`
```text
  \^---^/   
  ( O>O )   
 /(  W  )\  
  `-----`   
   v   v    
```

#### `SPIN_L`
```text
   .---.    
  ( <>< )   
/(     )    
  `-----`   
   /   \    
```

#### `SPIN_R`
```text
   .---.    
  (>< ><)   
 (     )\   
  `-----`   
   \   /    
```

#### `POSE`
```text
    \_/     
   .---.    
  ( ^>^ )   
/(  W  )\   
   J   L    
```

## Dizzy

_─── DIZZY ───  ~5.6s cycle, 5 poses + orbiting stars, slipping on ice_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `SLIP_L`
```text
  .---.     
 ( @>@ )    
/(     )    
 `-----`    
  J   L     
```

#### `SLIP_R`
```text
    .---.   
   ( @>@ )  
   (     )\ 
    `-----` 
     J   L  
```

#### `WOOZY`
```text
   .---.    
  ( x>@ )   
 /(  ~  )\  
  `-----`   
   J   L    
```

#### `WOOZY2`
```text
   .---.    
  ( @>x )   
 /(  ~  )\  
  `-----`   
   J   L    
```

#### `SPLAT`
```text
            
   .---.    
  ( @>@ )   
 (_______)= 
   ~~~~~    
```

## Heart

_─── HEART ───  ~10s cycle, 5 poses + rising heart stream, dreamy penguin_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 1, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
   .---.    
  ( ^>^ )   
 /(     )\  
  `-----`   
   J   L    
```

#### `BLUSH`
```text
   .---.    
  (#^>^#)   
 /(     )\  
  `-----`   
   J   L    
```

#### `EYES_C`
```text
   .---.    
  (<3><3)   
 /(     )\  
  `-----`   
   J   L    
```

#### `TWIRL`
```text
   .---.    
  ( @>@ )   
/(     )\   
  `-----`   
    \ /     
```

#### `SIGH`
```text
   .---.    
  ( ->- )   
 /(  ^  )\  
  `-----`   
   J   L    
```

