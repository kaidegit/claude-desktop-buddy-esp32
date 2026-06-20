# axolotl

- **Source:** `src/buddies/axolotl.cpp`
- **Namespace:** `axolotl`
- **Body color:** `0xFB1E`
- **States:** sleep, idle, busy, attention, celebrate, dizzy, heart

## Sleep

_─── SLEEP ───  ~12s cycle, 6 poses + bubble stream_

- **Sequence length:** 24 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 1, 0, 1, 0, 1, 3, 3, 4, 4, 3, 4, 3, 3, 1, 5, 1, 1]`

### Poses

#### `FLOAT`
```text
            
}~(______)~{
}~( -  - )~{
  ( .__. )  
  (_/  \_)  
```

#### `BREATHE`
```text
            
}~(______)~{
}~( _  _ )~{
  ( .__. )  
  (_/  \_)  
```

#### `DEEP`
```text
            
~}(______){~
~}( _  _ ){~
  ( ____ )  
  ~_/  \_~  
```

#### `CURL`
```text
             
             
}~(.____.)~{ 
 }~(- __ -)~{
  (__//__)   
```

#### `SIDE`
```text
            
            
  }~~~~~_   
 }~( -- -)= 
  (__----)  
```

#### `SNORE`
```text
            
}~(______)~{
}~( o  o )~{
  ( oOOo )  
  (_/  \_)  
```

### Overlays / effects

- Bubbles drift up

## Idle

_─── IDLE ───  ~14s cycle, 10 poses + lazy bubbles_

- **Sequence length:** 32 beats
- **Sequence:** `[0, 0, 0, 1, 0, 2, 0, 4, 0, 5, 0, 6, 0, 7, 8, 7, 8, 0, 0, 3, 3, 0, 4, 9, 9, 0, 0, 1, 2, 1, 2, 0]`

### Poses

#### `REST`
```text
            
}~(______)~{
}~( o  o )~{
  ( .--. )  
  (_/  \_)  
```

#### `LOOK_L`
```text
            
}~(______)~{
}~(o   o )~{
  ( .--. )  
  (_/  \_)  
```

#### `LOOK_R`
```text
            
}~(______)~{
}~( o   o)~{
  ( .--. )  
  (_/  \_)  
```

#### `LOOK_U`
```text
            
}~(______)~{
}~( ^  ^ )~{
  ( .--. )  
  (_/  \_)  
```

#### `BLINK`
```text
            
}~(______)~{
}~( -  - )~{
  ( .--. )  
  (_/  \_)  
```

#### `GILL_L`
```text
            
}}~(_____)~{
}}~(o  o )~{
  ( .--. )  
  (_/  \_)  
```

#### `GILL_R`
```text
            
}~(_____)~{{
}~(o  o )~{{
  ( .--. )  
  (_/  \_)  
```

#### `CHEW_A`
```text
            
}~(______)~{
}~( o  o )~{
  ( wwww )  
  (_/  \_)  
```

#### `CHEW_B`
```text
            
}~(______)~{
}~( o  o )~{
  ( WWWW )  
  (_/  \_)  
```

#### `WIGGLE`
```text
            
~}(______){~
~}( o  o ){~
  ( .--. )  
  ~_/  \_~  
```

### Overlays / effects

- single lazy bubble

## Busy

_─── BUSY ───  ~10s cycle, 6 poses + dot ticker_

- **Sequence length:** 21 beats
- **Sequence:** `[0, 1, 0, 1, 0, 1, 2, 2, 0, 1, 0, 1, 3, 3, 2, 4, 0, 1, 0, 1, 5]`

### Poses

#### `TYPE_A`
```text
            
}~(______)~{
}~( v  v )~{
  (  --  )  
 /(_/  \_)\ 
```

#### `TYPE_B`
```text
            
}~(______)~{
}~( v  v )~{
  (  __  )  
 \(_/  \_)/ 
```

#### `THINK`
```text
      ?     
}~(______)~{
}~( ^  ^ )~{
  (  ..  )  
  (_/  \_)  
```

#### `SCRIBBLE`
```text
      /     
}~(_____)~{ 
}~( o  o )~{
  ( .--. ) /
  (_/  \_)  
```

#### `EUREKA`
```text
      *     
}~(______)~{
}~( O  O )~{
  (  ^^  )  
 /(_/  \_)\ 
```

#### `RELIEF`
```text
    ~~~     
}~(______)~{
}~( -  - )~{
  (  __  )  
  (_/  \_)  
```

### Overlays / effects

- tiny bubbles

## Attention

_─── ATTENTION ───  ~8s cycle, 6 poses + ! pulse_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 4, 0, 1, 0, 2, 0, 3, 4, 4, 0, 1, 2, 0, 5, 0]`

### Poses

#### `ALERT`
```text
    ^  ^      
}}~(______)~{{
}}~( O  O )~{{
  (  O   )    
  (_/  \_)    
```

#### `SCAN_L`
```text
    ^  ^      
}}~(______)~{{
}}~(O    O)~{{
  (  O   )    
  (_/  \_)    
```

#### `SCAN_R`
```text
    ^  ^      
}}~(______)~{{
}}~(O    O)~{{
  (   O  )    
  (_/  \_)    
```

#### `SCAN_U`
```text
    ^  ^      
}}~(______)~{{
}}~( ^  ^ )~{{
  (  O   )    
  (_/  \_)    
```

#### `TENSE`
```text
    ^  ^       
}}}~(____)~{{{ 
}}}~( O  O)~{{{
  (  O   )     
 /(_/  \_)\    
```

#### `HUSH`
```text
    ^  ^    
}~(______)~{
}~( o  o )~{
  (  .   )  
  (_/  \_)  
```

## Celebrate

_─── CELEBRATE ───  ~5.6s cycle, 6 poses + confetti rain_

- **Sequence length:** 16 beats
- **Sequence:** `[0, 1, 2, 1, 0, 3, 4, 3, 4, 0, 1, 2, 1, 0, 5, 5]`
- **Y shift:** `[0, -3, -6, -3, 0, 0, 0, 0, 0, 0, -3, -6, -3, 0, 0, 0]`

### Poses

#### `CROUCH`
```text
            
}~(______)~{
}~( ^  ^ )~{
  (  ww  )  
 /(_/  \_)\ 
```

#### `JUMP`
```text
  \(    )/  
}~(______)~{
}~( ^  ^ )~{
  (  ww  )  
  (_/  \_)  
```

#### `PEAK`
```text
  \^    ^/  
}~(______)~{
}~( ^  ^ )~{
  (  WW  )  
  (_/  \_)  
```

#### `SPIN_L`
```text
            
}~(______)~{
}~(<    <)~{
  (  ww  ) /
  (_/  \_)  
```

#### `SPIN_R`
```text
            
}~(______)~{
}~(>    >)~{
\ (  ww  )  
  (_/  \_)  
```

#### `POSE`
```text
    \__/    
}~(______)~{
}~( ^  ^ )~{
/ (  WW  ) \
  (_/  \_)  
```

## Dizzy

_─── DIZZY ───  ~6s cycle, 5 poses + orbiting stars_

- **Sequence length:** 14 beats
- **Sequence:** `[0, 1, 0, 1, 2, 3, 0, 1, 0, 1, 4, 4, 2, 3]`
- **X shift:** `[-3, 3, -3, 3, 0, 0, -3, 3, -3, 3, 0, 0, 0, 0]`

### Poses

#### `TILT_L`
```text
             
}~(______)~{ 
}~( @  @ )~{ 
  ( ~~~~ )   
  (_/  \_)   
```

#### `TILT_R`
```text
             
 }~(______)~{
 }~( @  @ )~{
  ( ~~~~ )   
  (_/  \_)   
```

#### `WOOZY`
```text
            
}~(______)~{
}~( x  @ )~{
  ( ~vv~ )  
  (_/  \_)  
```

#### `WOOZY2`
```text
            
}~(______)~{
}~( @  x )~{
  ( vv~~ )  
  (_/  \_)  
```

#### `STUMBLE`
```text
            
~}(______){~
~}( @  @ ){~
  (  --  )  
 /~_/  \_~\ 
```

## Heart

_─── HEART ───  ~10s cycle, 6 poses + rising heart stream_

- **Sequence length:** 20 beats
- **Sequence:** `[0, 0, 1, 0, 2, 2, 0, 1, 0, 4, 0, 0, 3, 3, 0, 1, 0, 2, 5, 0]`
- **Y bob:** `[0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0]`

### Poses

#### `DREAMY`
```text
            
}~(______)~{
}~( ^  ^ )~{
  ( .vv. )  
  (_/  \_)  
```

#### `BLUSH`
```text
            
}~(______)~{
}~(#^  ^#)~{
  ( .vv. )  
  (_/  \_)  
```

#### `EYES_C`
```text
            
}~(______)~{
}~(<3  <3)~{
  ( .vv. )  
  (_/  \_)  
```

#### `TWIRL`
```text
            
~}(______){~
~}( @  @ ){~
  ( .vv. )  
 /(_/  \_)\ 
```

#### `SIGH`
```text
            
}~(______)~{
}~( -  - )~{
  ( ^^^^ )  
  (_/  \_)  
```

#### `WINK`
```text
            
}~(______)~{
}~( ^  - )~{
  ( .vv. )  
  (_/  \_)  
```

### Overlays / effects

- a couple of pink bubbles too

