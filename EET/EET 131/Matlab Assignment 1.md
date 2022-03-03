## Problem 1:

```matlab
mean(x) = 36.8720

median(x) = 36.8810

mode(x) = 36.8830

std(x) = 0.0214

stdm(x) = std(x)/sqrt(27) = 0.0041

% Check for 36.895

mean(x1) = 36.8712

std(x1) = 0.0213

% For 95% calculate

mean(x1)+2*std(x1) = 36.9138

mean(x1)-2*std(x1) = 36.8285

% 95 % sure 36.895 belongs in the data set because it is within the 95% range.

% for 99% calculate
mean(x1)+3*std(x1) = 36.9352

mean(x1-3*std(x1) = 36.8071

% 95% sure 36.895 belongs in the data set because it is witnhin the 99% range.
```

## Problem 2:

```matlab
mean(y) = 63.2548

median(y) = 63.2530

mode(y) = 63.2530

std(y) = 0.0075

stdm(y) = std(y)/sqrt(27) = 0.0014

% Check for 63.240

mean(y1) = 63.2554

std(y1) = 0.0071

% For 95% calculate

mean(y1)+2*std(y1) = 63.2695

mean(y1)-2*std(y1) = 63.2413

% 95% sure 63.240 does not belong in the data set because it is not within the 95% range.

% For 99% calculate

mean(y1)+3*std(y1) = 63.2766

mean(y1)-3*std(y1) = 63.2342

% 99% sure 63.240 belongs in the data set because it is within the 99% range.
```
