# factorial
A C++ factorial implementation that uses cached results.

## Featured

Computes factorials of 20 ... 0. A cache retrieves any previous result, short-circuiting a repeat of that previous
 calculation.

## Run
Execute `factorial` from a command line.

### Console result
```
>factorial
 input: 20
 		cache miss : 20
 		cache miss : 19
 		cache miss : 18
 		cache miss : 17
 		cache miss : 16
 		cache miss : 15
 		cache miss : 14
 		cache miss : 13
 		cache miss : 12
 		cache miss : 11
 		cache miss : 10
 		cache miss : 9
 		cache miss : 8
 		cache miss : 7
 		cache miss : 6
 		cache miss : 5
 		cache miss : 4
 		cache miss : 3
 		cache miss : 2
 	factorial 20 is 2432902008176640000
 input: 19
 	factorial 19 is 121645100408832000
 input: 18
 	factorial 18 is 6402373705728000
 input: 17
 	factorial 17 is 355687428096000
 input: 16
 	factorial 16 is 20922789888000
 input: 15
 	factorial 15 is 1307674368000
 input: 14
 	factorial 14 is 87178291200
 input: 13
 	factorial 13 is 6227020800
 input: 12
 	factorial 12 is 479001600
 input: 11
 	factorial 11 is 39916800
 input: 10
 	factorial 10 is 3628800
 input: 9
 	factorial 9 is 362880
 input: 8
 	factorial 8 is 40320
 input: 7
 	factorial 7 is 5040
 input: 6
 	factorial 6 is 720
 input: 5
 	factorial 5 is 120
 input: 4
 	factorial 4 is 24
 input: 3
 	factorial 3 is 6
 input: 2
 	factorial 2 is 2
 input: 1
 	factorial 1 is 1
 input: 0
 	factorial 0 is 1

 Dumped cache:

 cached value for  20 is 2432902008176640000
 cached value for  19 is 121645100408832000
 cached value for  18 is 6402373705728000
 cached value for  17 is 355687428096000
 cached value for  16 is 20922789888000
 cached value for  15 is 1307674368000
 cached value for  14 is 87178291200
 cached value for  13 is 6227020800
 cached value for  12 is 479001600
 cached value for  11 is 39916800
 cached value for  10 is 3628800
 cached value for  9 is 362880
 cached value for  8 is 40320
 cached value for  7 is 5040
 cached value for  6 is 720
 cached value for  5 is 120
 cached value for  4 is 24
 cached value for  3 is 6
 cached value for  2 is 2
 cached value for  1 is 0
 cached value for  0 is 0
```
