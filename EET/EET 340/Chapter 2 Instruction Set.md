# Operands

## Low Level Language (Assembly Language)
- An operand is a value (an argument) on which the instruction operates. The operand may be a processor register, a memory address, or a literal constant.
```as
ADD X0, X1, X2
```
- `ADD` = Operator
- `X0` = Operand

## High Level Language (C/C++/Java):
- Operands are the constants or variables which the operators operate on.
```cpp
C = a + b; // + is addition operator
// C = X0 for asm, a = X1, b = X2
```

We will be learning ARMv8's architecture for this class (aarch64).

| Name   |Register Number|     Usage										|
|--------|---------------|--------------------------------------------------------------------------------------|
| x0-x7  |	0-7	 |Arguments/Results									|
|   x8   |       8	 |Indirect Result location register							|
|x9-x15  |     9-15      |Temporaries										|
|x16(IP0)|	16	 |May be used by linker as a scratch register. Other times used as temporary register.	|
|x17(IP1)|	17	 |May be used as linker as a scratch register. Other times used as temporary register.	|
|x18	 |	18	 |Platform register for platform independent code. Otherwise a temporary register.	|
|x19-x27 |	19-27	 | Saved										|
|x28 (SP)|	28	 | Stack pointer									|
|x29 (FP)|	29	 | Frame pointer									|
|x30 (LR)|	30	 | Link register (return address)							|
|xZR	 |	31	 | The constant value 0									|

# Arithmetic Instructions
## ADD-
- The ADD instruction adds two operands and places the results on destination register. Both operands are register.

```as
ADD X0, X1, X2
```

This equates to X0 = X1 + X2

`ADD` = Operator
`X0` = Destination Register
`X1` = Operand 1
`X2` = Operand 2

## ADDI-
- The ADDI Instruction adds two operands and places the results on destination register. Operands 1 is a register, operands 2 is an immediate value.
```as
ADDI X0, X1, #4
```

This equates to `X0 = X1 + 4`

## SUB-
- The SUB instruction subtracts operand 2 from operand 1 and places the result in the destination register. Both operands are a register.
```as
SUB X0, X1, X2
```

This equates to `X0 = X1 - X2`

## SUBI-
- The SUBI instruction subtracts operand 2 from operand 1 and places the result on destination register. Operand 1 is a register, operand 2 is an immediate value.
```as
SUBI X0, X1, #4
```

This equates to `X0 = X1 - 4`

## MOV-
- This instruiciton loads a 64-bit value into the destination register from another register
```as
MOV X1, X2
```
This equates to `X1 = X2`

Think `C = a`

## MOVI-
- This instruction loads a 64-bit value into the destination register from an immediate value.
```as
MOVI X1, #8
```
`#8` moves to `X1`

## LSL - Logical shift left
- LSL instruction effectively multiplies the contents of a register by 2^I.
- Each bit of the register is shifted left. The MSB is removed and empty bits are filled with zeroes.
```as
LSL X0, X2, #2
```
This multiplies `X2` by `#2` and places the value in `X0`.

What's actually happening is X0 * 2^2.

**Problem**: Assume that X2 = 2(0X0000000000000002 in hexadecimal). What will be the value of X0 after running the following instruction: `LSL X0, X2, #2`

The solution should be: `0X0000000000000004`
(2 * 2^2 = 8)
The reason: focusing on the last four hex digits:
`0000 0000 0000 0010`, left shift of 2:
`0000 0000 0000 1000` = 4(16) = 8(10).

Note that the register is `0x0000000000000000` because it is 16 digits after the X, and each digit is a hexadecimal bit. Being hex represents 4 binary bits, 4 * 16 = 64 binary bits, which indicates the ISA bit length (aarch64).

## LSR - Logical shift right
- LSR instruction divides the contents of a register by 2^I.
- Each bit of the register is shifted right, LSB is removed and empty bits are filled with zeroes.

**Problem**: Assume that X2 = 24. What will be the value of x0 after running the full instruction:
```as
LSR X0, X2, #3
```
24 / 8 
`0000 0000 0001 1000` LSR #3 = `0000 0000 0000 0011`, or `0x0000000000000018` LSR #3 = `0x0000000000000002`. = 3(10)

# Memory

   |Register| Memory | 
   |--------|--------|
x0 |        |        | 0xFFFFFFFFFFFFFFFF	
x1 |   100  |        |
x2 |        |        |
x3 |        |  10    | 5000
...|        |        |
x11|  200   |        |
   |        |        | 3001
x31|        |        |

Register = 64-bit, Memory = 8-bit, 1 byte = 8-bits

**Problem** Assume that A is an array of 4 integer type elements (10, 20, 15, 8). Each element is 64 bit (doubleword). How does the array elements contained on the memory? The base address of the array A is 0x0000000000000000.

Solution: int A = {10, 20, 15, 8}... continuing on next class.
