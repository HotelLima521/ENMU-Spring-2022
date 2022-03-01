# If Else Statement

Convert the following C++ code to LEGv8 Assembly Code. Assume the variables f, g, h, i, and j correspond to the five registers x19, x20, x21, x22, and x23.

```cpp
if (i == j){
	f = g + h;
}
else{
	f = g - h;
}

```

f = x19
g = x20
h = x21
i = x22
j = x23

```as
CMP X22, X23 ; The If Statement
B.NE else ; The Else Statement
ADD X19, X20, X21
B exit ; This is necessary to exit the if statement

else: SUB X19, X20, X21
exit:
@
```
The @ symbol is necessary to put at the end of the assembly code after using the `;` comment marking tags.

```as
CMP X22, X23
B.EQ else
SUB X19, X20, x21
B exit

else: ADD x19, x20, x21

exit:
```

# While Loop
Convert the following C++ code to LEGv8 Assembly Code. Assume the variables i and k respond to registers X22 and X24.

```cpp
while (i == k){
	i += 1;
}
```

i = x22
k = x24

```as
loop:
CMP X22, X24 ; Compare i & j, if i != k go to exit. i+=1
B.NE exit
ADDI X22, X22, #1
B loop

exit:
```

Convert the following C++ code to LEGv8 Assembly code. Assume the variables i and k correspond to registers X22 and X24. The base address of the array save is in X25.

```cpp
while(save[i]==k){
	i+=1;
}
```

i = x22
k = x24
save = x25

```as
loop: LSL x10, x22, #3	; X10 = i*2^3 = i * 8
ADD X10, X10, X25	; X10 = X25 + i * 8
LDUR X9, [x10,#0]	; X9 = save[i]
CMP X9, X24		; Compare save[i] and k
B.NE exit
ADDI X22, X22, #1	; i += 1
B loop

exit:
@
```

# For loop
Convert the following C++ code to LEGv8 Assembly code. Assume the variable a is in X22 and base address of array b is in X23.

```cpp
for(i=0, i<a, i++){
	b[i] = a + i;
}
```
a = x22
b = x23

```as
ADDI X9, XZR, #0 	; XZR = Zero Register = 0 = i. This is the same as MOV X9, #0.
loop: CMP X9, X22	; Compare i and a
B.GE exit
ADD X10, X22, X9	; X10 = a + i
LSL X11, X9, #3		; address of b[i] = x23 + i * 8
ADD X11, X23, X11	; X11 = X23 + i * 8
STUR X10, [X11, #0]	; b[i] = a + i
; STUR X10, [X23, X11] is the same as STUR X10, [X11, #0]
ADDI X9, X9, #1		; i++
B loop
exit:
```
