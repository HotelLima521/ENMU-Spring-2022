# Types of Computing

## Personal Computer:
A personal computer is a general-purpose, cost-effective computer that is designed to be used by a single **end-user**.
Examples:
- Desktop Computer
- Laptop Computer
- Smart Phone

## Server Computer:
A computer used for running larger programs for **multiple users**, often simultaneously, and typically accessed only via a network.

## Super Computer:
A supercomputer is a large array of small computers. A class of comptuers with the highest performance. It is built to solve complex problems.

- High end scientific calculations
- Weather forecasting
- Oil exploration
- Space exploration
It costs hundreds of millions of dollars.

## Embedded Computer:
An embedded computer is a combination of hardware and software that is designed to perform a **specific task**.
Examples:
- Smart Television
- Printer
- Projection

## Personal Mobile Devices (PMDs):
PMDs are small wireless devices to connect to the internet. It is both portable and capable of storing, transmitting, or processing electronic data or images.
Examples:
- Smart Phone

## Cloud Computing:
It refers to large collections of servers that provide service over internet. Instead of buying, owning, and maintaining physical data centers and servers, you can access technology services, such as computing power, storage, and databases, on an as-needed basis from a cloud provider.
Examples:
- Amazon Web Services (AWS)
- Linode
- Dropbox
- Microsoft Azure
- Google Drive
- Digital Ocean

# Languages

## High Level Languages:
- High level languages resemble human languages in many ways.
- They are designed to be easy for human beings to write programs in and to be easy for human beings to read.

`x = y + z`

Examples:
- C
- C++
- Python
- Java
- Rust
- Fortran

## Low Level Languages:
- The kind of a language a computer can understand is called a low-level language
- This instruction may be unclear to a human user. Low level languages do not resemble human languages. However, it is understood by the computer

`ADD X9, X20, X21` == `X9 = X20 + X21`
X9 => X
X20 => Y
X21 => Z

## Machine Languages:
- Programs written in the form of zeros and ones are called machine languages.
- Any high-level language must be translated into machine language before computer can read and understand the program.

`X = Y + Z` (High Level Language)
`ADD X9, X20, X21` (Low Level Language)
`1001 0001 1000 0000 0101 1000 0000 0110` (Machine Language)

## High Level Language to Machine Language:

```
High Level Language (X = Y + Z)
	|
	| Compiler
	v
Low Level Language (ADD X9,X20,X21)
	|
	| Assembler
	v
Machine Language
```

# Components of a Computer
Five Components: Input, Output, Memory, Control, Datapath
- Input: Keyboard, Touchscreen
- Output: Display, Speaker
- Memory: Hard disk, flash drive, RAM, ROM, Cache, VRAM
- Control: CPU, GPU
- Datapath:

## Define volatile and non-volatile memory
Volatile memory is lost when power goes off
Non volatile memory is not lost when power goes off

Volatile memory examples:
- CPU Cache
- Dynamic Random Access Memory (DRAM)

Non Volatile memory examples:
- SSD
- HDD
- Flash Memory
- Tape Drive
- Optical Disks

## Define response time and throughput, How to improve response time and throughput
Response time: Time required for CPU to complete a task

Throughput: Total number of work done in a given time.

## CPU Clocking - Clock period or Clock cycle time (T) and Clock frequency or Clock rate (f):

```
LHLHLH
```

Square-Wave, Digital Pulse

Clock-Period (T): Duration of a clock cycle
The time between rising edges of a repititive clock signal.

Clock-Frequency (f): **f = 1/T**

## CPU Time:
The actual time the CPU spends computing for a specific task is known as CPU time. It is also called CPU execution time.

**CPU Time = CPU Clock Cycle * Clock Cycle Time**

Problem: A program takes 1000 clock-cycles to run a processor running at 2GHz
What is the time spent on the CPU by the program

CPU Time = CPU Clock Cycle/Clock rate
= 1000/2*10^9Hz
= 0.5 * 10^-6
= 0.5ms

## Performance
Performance = 1/Execution Time

Suppose we have two computers, X & Y
and performance of X is greater than Y.

Performance X > Performance Y

1/Execution Time X > 1/Execution Time Y

Execution Time Y > Execution Time X

Problem:

If computer A runs a program in 10 seconds and computer B runs the same program in 15 seconds, how much faster is A than B?

1/10 = .1, 1/15 = .06, computer A is ~2 times faster than computer B.
