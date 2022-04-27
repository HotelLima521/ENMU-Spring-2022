# Floating Point Subtraction (Binary)

1. Align binary ponts:
	- Align Binary point of the number with smaller exponent
2. Add significands:
3. Normalize result:
4. Round and renormalize if necessary.

Problem: Perform binary floating-point subtraction and convert the resulting values to IEEE-754 single. Finally convert them to hexadecimal values.

0.5 - 0.4375

0.5<sub>10</sub> = 0.1<sub>2</sub>

0.5 \* 2 = 1.0

0.5<sub>10</sub> = 1.0x2<sup>-1</sup>

0.4375 \* 2  = 0.875

0.875 \* 2 = 1.75

0.75 \* 2 = 1.5

0.5 \* 2 = 1.0

0.4375<sub>10</sub> = 0.0111<sub>2</sub>

0.4375<sub>10</sub> = 1.11x2<sup>-2</sup>

_Step 1_

0.5<sub>10</sub> = 1.0 \* 2<sup>-1</sup><sub>2</sub>

-0.4375<sub>10</sub> = -0.111 \* 2<sup>-1</sup><sub>2</sub>

1's Complement of 0.111 = 1.000

2's Complement of 0.111 = 1.001
```
 1.000
+1.001
--------
10.001
```
Remove the 1 due to subtraction

1.000 + 1.001 = **0.001** = 1.000 \* 2<sup>-4</sup>

Sign = 0

Exponent = -4 + 127 = 123<sub>10</sub> = 01111011<sub>2</sub>

Fraction = 0.001

# Floating Point Multiplication

1. Add exponents
2. Multiply Significands
3. Normalize Result
4. Round an renormalize if necessary
5. Determine the sign of result from signs of operands

## Floating point Multiplication (Decimal)

Consiuder a 4-digit decimal example: (1.110 \* 10<sup>10</sup>) \* (9.2 \* 10<sup>-5</sup>) = 10.212 \* 10<sup>5</sup>

1. Add exponents

e1 = 10

e2 = -5

e = e1 + e2 = 10 - 5 = 5

2. Multiply Significands

```
  1.110
* 9.2
-------
10.212
```

Result = 10.212 \* 10<sup>5</sup>

3. Result = 10.21 \* 10<sup>5</sup>

5. Sign = (+)\*(+) = +

10.21\*10<sup>5</sup>

**Problem**: Perform binary floating-point multiplication an convert the resulting values to IEEE-754 single precision format. finally convert them to hexadecimal values.

0.5\*-0.4375

0.5 = 0.1 = 1.0\*2<sup>-1</sup>

0.4375 = 0.0111 = 1.11\*2<sup>-2</sup>

1. Add exponents

e = e1+e2 = -1-2 = -3

2. Multiply significands

0.5 = 1.000\*2<sup>-1</sup>

0.4375 = 1.110\*2<sup>-2</sup>

```
     1.000
   * 1.110
 --------
      0000
     1000
    1000
+ 1000
--------
  1.110000
```

3. Result = 1.11\*2<sup>-3</sup>

5. Sign = (+)\*(-) = -

Sign = 1

Exponent = -3 + 127 = 124<sub>10</sub> = 01111100<sub>2</sub>

Fraction = 0.11

|Sign	|Exponent	|Fraction		|
|-------|---------------|-----------------------|
|1	|01111100	|110000000000000	|

0xBE600000

# Homework

6. Perform the following computation and convert the resulting values in IEEE-754 single precision format:
b.) -7.25\*6.5 = ?

7.25 = 111.01 = 1.1101\*2<sup>2</sup>

6.5 = 11.01 = 1.101\*2<sup>2</sup>

1. e1 = 2 e2 = 2

e = e1 + e2 = 4

2. 1.1101 \* 1.101 = 10.1111001

Result = 10.1111001\*2<sup>4</sup>

3. Normalize = 1.01111001\*2<sup>5</sup>

5. Sign = (-)\*(+) = (-)Ve

Sign = 1

Exponent = 5 + 127 = 132<sub>10</sub> = 10000100<sub>2</sub>

Fraction = 01111001

|Sign	|Exponent	|Fraction		|
|-------|---------------|-----------------------|
|1	|100000100	|01111001000....0	|

0xC23C8000<sub>16</sub>
