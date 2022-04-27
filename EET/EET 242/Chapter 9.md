# Up/Down Synchronous Counters

An up/down synchronous counter is one that can progress in either direcdtion through a certain sequence

0, 1, 2, 3, 4, 5, 4, 3, 2, 3, 4, 5, 6, 7, 6, 5, etc.

Up/Down sequence for a 3 bit counter:

|Clock Pulse	|Up	|*Q*<sub>2</sub>|*Q*<sub>1</sub>|*Q*<sub>0</sub>|Down	|
|:-------------:|:-----:|:-------------:|:-------------:|:-------------:|:-----:|
|0		|0	|0		|0		|0		|0	|
|1		|	|0		|0		|1		|1	|
|2		|	|0		|1		|0		|2	|
|3		|	|0		|1		|1		|3	|
|4		|	|1		|0		|0		|4	|
|5		|	|1		|0		|1		|5	|
|6		|	|1		|1		|0		|6	|
|7		|	|1		|1		|1		|7	|

If signal in (Up/Down) is 1, counter goes up. If 0, counter goes down.

 |J	|K	|Q	|
 |:----:|:-----:|:-----:|
^|0	|0	|NC	|
^|0	|1	|0	|
^|1	|0	|1	|
^|1	|1	|Q1	|
