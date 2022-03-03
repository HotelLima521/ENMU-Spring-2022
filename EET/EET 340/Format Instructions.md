Example: Convert the following C++ code to LEGv8 assembly code. Assume A is an array of 10 doublewords, variable g and h are associated with registers X20 and X21, and the base address of the array A is in X22.

1. 
```cpp
g = h + A[1];
```

2. 
```cpp
g = h + A[8];
```
g = x20

h = x21

A = x22

Address of A[8] = Address of A + 8 * 8 = X22 + 64

```S
LDUR X9, [X22, #64]	; X9 = A[8]
ADD X20, X9, X21	; X20 = g, X21 = h
```

## Store Instruction
- The STUR instruction tells the CPU to store (copy) the contents of the CPU register to a memory location pointed by destination register.
- Since the CPU registers are 64-bit (8-byte) wide, we need 8 consecutive memory locations to store the contents of the register.

```S
STUR X3, [X6, #0]	; What will happen after executing this instruction?
			; if X3 = 10, X6 = 2000
```

Problem: Assume that X6 = 0x4000000000000200 and X3 = 0x4152637400000002. What will happen after running the following instructions: `STUR X3, [X6, #0]`

Example: Convert the following C++ code to LEGv8 Assembly code. Assume A is an Array of 10 double words, variable h is associated with register x21, and base address of array A is in X22.

Double word = 64-bit

```cpp
A[2] = h + A[1];
```
```S
			; X22 + 8 = A[1]
			; X22 + 16 = A[2]
LDUR X9, [X22, #8]	; X9 = A[1] 
ADD X9, X9, X21		; X9 = h + A[1]
STUR X9, [X22, #16]	; A[2] = h + A[1]
```

## Representing Instructions in the computer (Translating a LEGv8 assembly instruction into Machine instruction)
Instruction format: the layout of an instruction is called the instruction format. LEGv8 instructions are 32-bit long.

|Instruction 		|Format	|Opcode			|Rm	|shamt	|address	|op2	|Rn	|Rd  |
|-----------------------|-------|-----------------------|-------|-------|---------------|-------|-------|----|
|ADD (add)		|R	|1112<sub>ten</sub>	|reg	|0	|n.a.		|n.a.	|reg	|reg |  
|SUB (subtract)		|R	|1624<sub>ten</sub>	|reg	|0	|n.a.		|n.a.	|reg	|reg |
|ADDI (add immediate)	|I	|580<sub>ten</sub>	|reg	|n.a.	|constant	|n.a.	|reg	|n.a.|
|SUBI (sub immediate)	|I	|836<sub>ten</sub>	|reg	|n.a.	|constant	|n.a.	|reg	|n.a.|
|LDUR (load word)	|D	|1986<sub>ten</sub>	|reg	|n.a.	|address	|0	|reg	|n.a.|
|STUR (store word)	|D	|1984<sub>ten</sub>	|reg	|n.a.	|address	|0	|reg	|n.a.|

Addition/Subtraction = R Format instructions

### LEGv8 R Format Instructions:

|opcode	|Rm	|shamt	|Rn	|Rd	|
|-------|-------|-------|-------|-------|
|11 bits|5 bits	|6 bits	|5 bits	|5 bits	|

Opcode = Operation Code

Rm = Operand 2

shamt = shift amount

Rn = Operand 1

Rd = Destination Register

```S
ADD X9, X20, X21
; ADD		X9,	X20,	X21
; Opcode 1112,	Rd,	Rn,	Rm
```

Translate the following LEGv8 Assembly instruction into machine code:
Instruction: `ADD X9, X20, X21`

In base 10:

```
1112 21 0 20 9
```
11+5+6+5+5 = 32

In base 2:
```
10001011000 10101 000000 10100 01001
```
Then, make 4-bit groups
```
1000 1011 0001 0101 0000 0010 1000 1001
```
Hex value:
```
0x8b150289
```

### LEGv8 D Format Instructions:

|opcode	|address|op2	|Rn	|Rt	|
|-------|-------|-------|-------|-------|
|11 bits|9 bits	|2 bits	|5 bits	|5 bits |

Rn = Base Register

Address = Constant Offset

Rt =  Destination (load) or source (store) register number

```S
LDUR X9, [X10, #8]
;	LDUR	X9	[X10,	#8]
;	1986	Rt	Rn	offset/address
```

Translate the following LEGv8 assembly instruction into machine instruction:
```S
LDUR X9, [X10, #8]
```

Base 10:
```
1986 8 0 10 9
```

Base 2:
```
11111000010 000001000 00 01010 01001
```

Group in 4-bits
```
1111 1000 0100 0000 1000 0001 0100 1001
```
Base 16:
```
0xF8408149
```
