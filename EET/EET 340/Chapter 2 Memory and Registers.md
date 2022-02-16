# Memory and Registers
32 Registers total, x0-x31, all are 64-bit.

Memory can store (2^64)-1 bits.

Memory address looks something like: `0x0000000000000000`, which is 16 hex digits

**Problem** Assume that A is an array of 4 integer type elements (10, 20, 15, 8). Each element is 64-bit (double word). How does the array elements contained on the memory? The base address of the array A is: `0x0000000000000000`. 

4 * 64 = 256

256 / 8 = 32

Each integer takes up 32 bits of memory.

```cpp
int A = {10, 20, 15, 8}; // Values inside are elements
//	  0   1   2  3    <-- Index values
```

This equates to:

0x0A, 0x14, 0x0F, 0x08. (As 8 bit). Converting to 64 bit:

`0x000000000000000A`, `0x0000000000000014`, `0x000000000000000F`, and `0x0000000000000008`.

8 bits = 1 byte = 2 hex digit.

Storing a 64-bit number requires 8 places in the memory to store the value, since 64/8 = 8.

Think of storing memory locations kind of like a phone block, or an IP address where it can have a ton of values, and some numbers are more significant, or less significant than the others.

Address of A[0] = Base address + 0 * 8 = 0x0000000000000000

Address of A[1] = Base address + 1 * 8 = 0x0000000000000008

Address of A[2] = Base address + 2 * 8 = 0x0000000000000010

Address of A[i] = Base address + i * 8

# Load and Store instructions
- The ARM CPU allows direct access to all locations in the memory, but they are done with specific instructions. Since these instructions either load the register with data from meory or store the data in the register to the memory, they are called load/store instructions.

Assume x2 = 100, x5 = 2000

x0|Register    |Memory| 2^64-1
x1|------------|------|
x2| 100	       |      |
x3|            |      |2002
x4|            |  08  |2001
x5| 200        | 100  |2000
   64 bit        8 bit  64 bit

```as
LDUR X2, [X5, #0]
```

Places value stored in X5 + 0 to the value X2.

## Load instruction
- LDUR X2, [X5, #0] instruction copies the content of the memory locations pointed by X5 + 0 into register X2.
- Since the X2 register is a 64-bit wide, it expects a 64-bit operand in the range of 0x0000000000000000 to 0xFFFFFFFFFFFFFFFF

**Problem**: Assume that X5 = 0x80000000000004000 and locations 0x800000000000004000 through 0x80000000000004007 contain 0x15, 0x28, 0xA2, 0xC5, 0xA0, 0xB1, 0x02, and 0x23, respectively. What will happen to x2 after running the following instruction: `LDUR X2, [X5, #0]`?
```
x23 ... 0x0000000000004007
x02
xB1
xA0
xC5
xA2
x28
x15 ... 0x0000000000004000
```
`0x2302B1A0C5A22815`

Little Endian: Least significant digit is at the bottom of memory and goes to the right.

Big Endian: Least significant digit is at the top of the memory and goes to the right.

**Example**: Convert the following C++ code to LEGv8 Assembly code. Assume A is an array of 10 double words, variable g and h are associated with registers X20 and X21, and the base address of A is in X22.
1. `g = h + A[1];`

2. `g = h + A[8];`


X20 = g, X21 = h, x22 = A

```as
LDUR X9, [X22, #8]
ADD X20, X9, X21
```

A[1] = Base address + 1 * 8.
= X22 + 1 * 8
= X22 + 8

