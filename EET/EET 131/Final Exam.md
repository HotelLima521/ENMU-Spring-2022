## When
Tuesday May 10

1445 - 1645

## Animation
There are three facilities for Animation

1. Comet (2d), Comet3 (3d)
2. getFrame function, may be used to generate movie frames for a sequence of graphs.

```matlab
t=-pi:pi/50:pi;
comet3(sin(5*t),cos(3*t),t) // 3d
comet(sin(5*t),t) // 2d
y=exp(-.01*t);
comet3(sin(y.*5*t),y.*cos(3*t),t)

```

## Bar Graph
MATLAB has four specialized functions that display bar graphs

Vertical **2d** = bar **3d** = bar3

Horizontal **2d** = barh **3d** = bar3h

```matlab
y = [5 2 1;8 7 3;9 8 6;5 5 5;4 3 2] // 5x3
bar(y)
bar3(y)
barh(y)
bar3h(y)
```

# Display a graph containing three area graphs, one per column

area(y)

## Pie Chart

Pie chart displays the percentage that each element has in a vector matrix.
```matlab
x=[0.19 0.22 0.41];
pie(x)
pie3(x)
y=randn(10,3)
hist(y)
```

Histogram: Show the distribution of data values (freq of data values)

