# LEGv8 Instruction Format (I-Format) Instructions

|opcode	|immediate	|Rn	|Rd	|
|-------|---------------|-------|-------|
|10 bits|12 bits	|5 bits	|5 bits	|

Rn = Source Register

Rd = Destination Register

Examples:

```S
ADDI X9, X9, #1		; X9 += 1
SUBI X10, X7, #1	; X10 -= 1
```

Example: Translate following assembly instruction to machine instruction:

```S
ADDI X9, X9, #1
;	ADDI	X9,	X9,	#1
;	Opcode	Rd	Rn	Immediate
```

**580 1 9 9<sub>10</sub>**

**100100100 0000000000001 01001 01001<sub>2</sub>**

*1001 0010 0000 0000 0000 0101 0010 1001*

**0x91000529<sub>16</sub>**

## Shift Operations:

|opcode	|Rm	|shamt	|Rn	|Rd	|
|-------|-------|-------|-------|-------|
|11 bit	|5 bit	|6 bit	|5 bit	|5 bit	|

Rm = Operand 2

Shamt = Shift Amount

Rn = Operand 1

Rd = Destination Register

```S
LSL X11, X19, #4	; X11 = X19 * 2^4
LSR
```

LSL = 1691<sub>10</sub> = 11010011011<sub>2</sub>

Example: Translate `LSL X11, X19, #4` to machine instruction

**1691 0 4 19 11<sub>10</sub>**

**11010011011 00000 000100 10011 01011<sub>2</sub>**

*1101 0011 0110 0000 0001 0010 0110 1011*

**0xD360126B<sub>16</sub>**

## AND Operations
A logical bit-by-bit operation with two operands that calculates a 1 only if there is a 1 in both operands.

```S
AND X9, X10, X11	; if X10 and X11 are both 1, places a 1 in X9. Else, places a 0.
			; X11 = 11000000
			; X10 = 00000000
			; Start from the LSB to the MSB. In this case, X9 will be the same as X10, 00000000 since no bits are 1 in X10.
			; However,
			; X11 = 11000010
			; X10 = 01001010
			; X9  = 01001010
```

## OR operations
A logical bit-by-bit iperation with two operands that calculates a 1 only if there is a 1 in either operands

```S
OR X9, X10, X11		; if X10 or X11 are 1, places a 1 in X9. Else, places a 0.
			; X11 = 11000000
			; X10 = 00000000
			; Start from the LSB to the MSB. In this case, X9 will be the same as X11, 11000000.
			; Another case,
			; X11 = 10000110
			; X10 = 01100000
			; X9  = 11100110
```

Branch to a labeled instruction if a condition is true, otherwise continue sequentially

CBZ register, L1

- if (register == 0) branch to instruction labeled L1;
- Example: `CBZ X9, Else`

CBNZ register, L1

- if (register != 0) branch to instruction labeled L1;
- Example: `CBNZ X9, Else`

B L1

- branch unconditionally to instruction labeled L1;
- Example: B Exit

|		|Signed Numbers			|Unsigned Numbers		|
|---------------|-------------------------------|-------------------------------|
|Comparison	|Instruction	|CC Test	|Instruction	| CC Test	|
|==		|B.EQ		|Z=1		|B.EQ		|Z=1		|
|!=		|B.NE		|Z=0		|B.NE		|Z=0		|
|<		|B.LT		|N!=V		|B.LO		|C=0		|
|<=		|B.LE		|~(Z=0 & N=V)	|B.LS		|~(Z=0 & C=1)	|
|>		|B.GT		|(Z=0 & N=V)	|B.HI		|(Z=0 & C=1)	|
|>=		|B.GE		|N=V		|B.HS		|C=1		|

Convert the following C++ code to LEGv8 Assembly code. Assume the variables f, g, h, i, and j correspond to the five registers X19, X20, X21, X22, and X23.

```cpp
f = (g+h)-(i+j);
```
```S
			; X19 = f
			; X20 = g
			; X21 = h
			; X22 = i
			; X23 = j
ADD X9, X20, X21	; X9 = g + h
ADD X10, X22, X23	; X10 = i + j
SUB X19, X9, X10	; f = x9 - x10 = (g+h)-(i+j)
```

## If Statement
Convert the following C++ code to LEGv8 Assembly code. Assume the variables a and b correspond to registers X22 and X23

```cpp
if(a > b){
	a+=1;
}
```
```S
			; a = X22
			; b = X23
CMP X22, X23
B.GT L1
B Exit
L1: ADDI X22, X22, #1	; a+=1
Exit:
```

*Alternate Solution:*

**The most efficient way**

```S
CMP X22, X23
B.LE Exit
ADDI X22, X23, #1
Exit:
```

Example:

Assume variables a and b correspond to registers x22 and x23

```cpp
if(a == b){
	b = a * 8
}
```
```S
CMP X22, X23
B.EQ L1
B Exit
L1: LSL X23, X22, #3	; 2^3 = 8
Exit:
```

*Alternate Solution:*
```S
CMP X22, X23
B.NE Exit
LSL X23, X22, #3
Exit:
```
