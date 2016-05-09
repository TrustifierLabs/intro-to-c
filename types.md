# Introduction to pointers

## All about types

1 byte :  [ bbbbbbbb ] can represent 0 - 255 (256 numbers)

2 bytes:  [ bbbbbbbb bbbbbbbb ] can represent 0 - 65535 (65536 number)

4 bytes:  [ bbbbbbbb bbbbbbbb bbbbbbbb bbbbbbbb ] ...  etc...


## A number is *signed* unless otherwise specified

**Unsigned** eight bits [bbbbbbbb] represent 0 - 255

But 8 bits can also represent  -127 to 127 by treating the most-significant bit as an indicator of a sign:

If *signed-bit* is zero it means positive number,
If *signed-bit* is one it means negative number

### Signed char: *s*bbbbbbb
Signed Positive numbers: *0*bbbbbbb : 0 to 127
Signed Negative numbers: *1*bbbbbbb :-1 to -127

### Signed short: *s*bbbbbbb bbbbbbbb


### 
