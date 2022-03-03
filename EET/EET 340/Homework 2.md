# Homework 2
# EET 340

1. Convert Decimal value to binary and then convert them to hexadecimal value
a. 45(10)
b. 22(10)

2. What will be the value of X1 after running the following instruction: `LSL X1, X2, #2`. Assume that X2 = 4. (Show the steps of calculation).

3. What will happen to X2 after running the following instruction: `LDUR X2, [X5, #0]`. Assumet hat X5 = 0X8000000000004000 and locations 0X8000000000004000 through 0X8000000000004007 contain 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X02, and 0X23, respectively.

4. Convert he following assembly instruction to 32 bit machine code and then change it to hexadecimal format.
a.
```S
LDUR X10, [X5, #16]
```

b.
```S
SUB X12, X14, X15
```

c.
```S
LSR X11, X19, #2
```

5. Convert C++ code snipped to LEGv8 assembly code. The following variables x, y, and z are associated with registers X19, X20, and X21 respectively, and base address of the array A is in X22. Comment the code.

```cpp
x = x + y;
z = x + 4;
A[8] = A[3] + z;
```

```S
			; x = X19
			; y = X20
			; z = X21
			; A[0] = X22
ADD X19, X19, X20	; x += y
ADD X21, X19, #4	; z = x + 4
LDUR X9, [X22, #24]	; A[3]
ADD X9, X9, X21		; A[3] + z
STUR X9, [X22, #64]	; A[8] = A[3] + z
```

6. Convert C++ code snipped to LEGv8 assembly code. The following variables x, y, and z are associated with registers X19, X20, and X21, respectively, and base address of array d is in X22. Comment the code.

a.
```cpp
if (x > y){
	z = y + 4;
}
else{
	z = y - 16;
}
```

```S
		; x = X19
		; y = x20
		; z = x21
		; d[0] = x22
CMP X19, X20
B.EQ else
ADD X21, X20, #4
B exit
else: SUB X21, X20, #16
```

b.
```cpp
for (i = 0; i < x; i++){
	y = d[i] + z;
}
```
