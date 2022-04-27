# Chapter 3
## Binary Addition:

Four basic rules of binary addition:

0 + 0 = 0 sum = 0, carry = 0

0 + 1 = 1 sum = 1, carry = 0

1 + 0 = 0 sum = 1, carry = 0

1 + 1 = 10 sum = 0, carry = 1

Example 1:

110 + 100 = 1010

Example 2:

111 + 11 = 1010

## Binary Subtraction:

0 - 0 = 0

1 - 0 = 1

1 - 1 = 0

0 - 1 = 1


When it's you're trying to subtract a 1 underneath a 0, you must borrow from another one to make it a 10 to subtract so it's 2-1.

Example 1:

101 - 011 = 010

Example 2:

110 - 101 = 001


## Binary Multiplication

Example 2:

111 x 101 = 100011

How:

```
111
101

Multiply first bottom digit across all three digits at top, move to next digit, then move to last digit

111
000
111

Then add
```


## Floating point numbers

**Scientific Notation:** A notation that renders numbers with a single digit to the left of the decimal point.

**Normalized Number:** A number in the scientific notation that has no leading 0s is called a normalized number.

0.001

1.0 x 10<sup>-3</sup> *(This one is the Scientific Notation)*

10.0 x 10<sup>-4</sup>

0.1 x 10<sup>-2</sup>

- Floating-point number (also known as a real number) consists of two parts plus a sign.
- The mantissa is the part of a floating-point number that represents the magnitude of the number and is between 0 and 1.
- The exponent is the part of a floating-point number that represents the number of places that the decimal point (or binary point) is to be moved.
- For binary floating-point numbers, the format is definied by ANSI/IEEE standard 754-1985 in three forms:
	- Single-Precision
	- Double-Precision

Example: Convert the decimal value 2.75 to IEEE-754 single precision format. Write your converted result in hexadecimal format.

| Sign	| Exponent	| Fraction |
|-------|---------------|----------|
|1 bit	| 8 bits	| 23 bits  |


2.75<sub>10</sub> = 10.11<sub>2</sub> = 1.011 x 2<sup>1</sup>

If number is positive, sign is 0.

If number is negative, sign is 1.

Bias = 127

Exponent = Exponent + Bins

= 127 + 1

= 128

Fraction = 011

0100 0000 0110 0000 0000 0000 0000 0000

0x40600000

Example: Convert the decimal value -4.25 to IEEE-754 single precision format. Write your converted result in hexadecimal format.

-4.25<sub>10</sub> = -100.01<sub>2</sub> = -1.0001 x 2<sup>2</sup>

Exponent = bias (127) + 2 = 129<sub>10</sub> = 10000001<sub>2</sub>

Fraction = 0001


1100 0000 1000 1000 0000 0000 0000 0000

0xC0880000
