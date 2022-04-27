## Load-Use Data Hazard

```as
LDUR X1, [X2, #0]
SUB X4, X1, X5
```

A specific form of data hazard in which the data eing loaded  by a load instruction have not yet become available when they are needed by another instruction.

**Pipeline stall/bubble:** A pipeline stall is a delay in execution of an instruction in order to resolve a hazard. A stall initiated in order to resolve a hazard

stall = 100-300ps, depending on instruction.
