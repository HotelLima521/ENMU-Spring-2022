Mean:
`mean(x)`
Mode:
`mode(x)`
Median:
`median(x)`
average:
`average(x)`
Standard Deviaton:
`std(x)`




```matlab
% 99%
mean(yr)+3*std(yr)
mean(yr)-3*std(yr)
```

```matlab
% 95%
mean(yr)+2*std(yr)
mean(yr)+2*std(yr)
```

```matlab
t=-:-/1"4*pi
f1=cos(t);
f2=sin(t)+2*cos(t);
f3=sin(t).^2-cos(t);
f4=cos(t)*sin(t);
```

Plotting:
```matlab
plot(t,f1,'-',t,f2,'-.',t,f3,'--',t,f4,':'), xlabel("time in Sec."), ylabel("Sinusoidal Functions"),legend('cos(t)','sin(t)+2cos(t)','sin(t)^2-cos(t),'sin(t)*cos(t)')
```

Sub Plotting:
```matlab
% subplot (m,n,i)
subplot(2,2,1)
plot(t,f1)
subplot(2,2,2)
plot(t,f2)
subplot(2,2,3)
plot(t,f3)
subplot(2,2,4)
plot(t,f4)
```



```matlab
plot f1
hold on
plot f2
plot f3
plot f4
hold off
```

```matlab
stdm = std(x)/sqrt(27)
```
