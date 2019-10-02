# factorial
A C++ factorial implementation that uses cached results.

## Run
Execute `factorial` from a command line.

## Console result
```
>factorial
factorial 20 is 2432902008176640000
factorial 19 is 121645100408832000
factorial 18 is 6402373705728000
factorial 17 is 355687428096000
factorial 16 is 20922789888000
factorial 15 is 1307674368000
factorial 14 is 87178291200
factorial 13 is 6227020800
factorial 12 is 479001600
factorial 11 is 39916800
factorial 10 is 3628800
factorial 9 is 362880
factorial 8 is 40320
factorial 7 is 5040
factorial 6 is 720
factorial 5 is 120
factorial 4 is 24
factorial 3 is 6
factorial 2 is 2
factorial 1 is 1
factorial 0 is 1
```

## Featured

Computes factorials of 20 ... 0. A cache retreives any previous 
result, short-circuiting a repeat of that previous calculation.
