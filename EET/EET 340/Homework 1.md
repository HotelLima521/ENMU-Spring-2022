# 1. Write characteristics of the six different classes of computers:
## Personal Computer:
- General computing for personal use. The End-user (Client) side of applications. Used for checking web applications, playing games, filling forms, etc.
## Server computer:
- Built for running long-term services, e.g. Web servers, email servers, game servers, hypervisors that split out the services into sub-servers (e.g. Proxmox, Hyper-V, etc).
## Super computer:
- Built for specific algorithm solving. E.g., prime number calculations for encryption, breaking encryptions, solving DNA sequences, Protein folding, searching for extra terrestrial intelligence, etc. While these can be built in house, they can also be a client-application running on people's personal computers and split up the work, having them all run as one large networked super computer (See Berkeley Open Infrastructure of Networked Computing (BOINC)).
## Embedded Computers:
- Built for very specific tasks, e.g. Gaming consoles, IoT devices, 2d and 3d printers, VoIP phones, modern 2-DIN head units on cars, etc.
## Personal Mobile Devices (PMD's)
- Very similar to a Personal Computer, however has wireless connectivity and a battery, enabling it to be used on the go without being plugged into anything. These devices can transcieve, store, or process data and media. Examples include: Smart Phones, Laptops, Tablets, and technically some peripherals that can connect to those devices such as flash media or external hard drives; albeit it's sort of by extension (Mostly on the storing data/media).
## Cloud Computing
- Similar to Server Computers, however they are off-site servers and run as a service (Think Software as a Service (SaaS)). There are multiple tiers of plans, depending on how much processing power, storage, or network throughput you need. Examples include: Amazon Web Services (AWS), Linode, Digital Ocean, Microsoft Azure, Google Cloud, etc.
# 2. What are the three levels of program code? Describe each level.
## High Level languages
- Resembles human language in multiple ways, making readibility easier for writing, editing, and understanding the source. Examples: C, C++, Rust, Go, Python, Java, C#
## Low Level languages
- Understood by the computer, low level language is not very clear to the human. Examples: x86 ASM, ARM ASM, RARS (In the process of development at the moment for RISC-V Assembly) ...Note I am a bit confused on the first part where it states this is directly understood by the computer, which I understood from the lecture, since I am pretty confident an assembler such as the GNU Assembler (GAS, or just As), is required to assemble the assembly language into machine language for the computer to actually execute the bins.
## Machine Languages
- Programs written in binary. High level languages are compiled into machine language to be executed by computers. (And I believe low level languages are assembled into bins as well).
# 3. Discuss five components of a computer, give at least two examples of each component.
## Input:
- Pretty much just peripherals, for example a mouse, keyboard, writing pad with stylus, a touch screen, gaming controllers, microphones, etc.
## Output:
- Anything being outputted from the computer to the user, for example the Display, Speakers, LED indicators, haptic feedback, vibration on controllers, etc.
## Memory:
- The locations where information is stored. Examples: CPU Cache, Dynamic Random Access Memory, Read Only Memory, Video Random Access Memory, Hard Disk Drives, Solid State Drives, Flash Memory
## Control:
- The processing units that calculate the data, interpret the logic, etc. E.g.: Central Processing Unit, Graphical Processing Unit
## Datapath:
- The component that processes the arithmetic operations, along with staging instructions to the CU. Examples: Arithmetic Logic Unit, Instruction Register and decoder, Program Counter. Honestly, the Control Unit and Datapaths make up modern Central Processing Units and Graphical Processing Units at this point  in time so it's difficult to break down how they all fit together, especially with the rise of System on Chip devices.
# 4. State Amdahl's Law.
- Amdahls law: Performance = 1/Execution Time
# 5. Consider three different processors P1, P2, and P3 executing the same instruction set. If the processors each execute a program in 10 seconds, find the number of cycles and the number of instructions for each processor

|            |    P1    |    P2   |   P3   |
|:----------:|:--------:|:-------:|:------:|
| Clock Rate |   3 GHz  | 2.5 GHz |  4 GHz |
|    CPI     |    1.5   |     1   |   2.2  |


