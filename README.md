# Algorithms And Complexity

## 01 - Iterative Algorithms

### SumOfNumbersInArray

Main goal is: Finding sum of array of numbers.

- Time complexity of sum metod : T(n) = 3n + 3 ( O(n) )
- Space comlexity of sum metod : S(n) = n + 2

### PowerOfNumber

Main goal is: Compute number of power which is for positive integer. It has been ignored for some base cases.

- Time complexity of power1 metod : T(n) = 3n + 2 ( O(n) )
- Space comlexity of power1 metod : S(n) = 3
- T(n) Time complexity of power2 metod : T(n) = O(logn)
- S(n) Space complexity of power2 metod: S(n) = 4

Resources: https://www.cplusplus.com/doc/tutorial/operators/ , https://www.tutorialspoint.com/cplusplus/cpp_operators.htm ,
https://stackoverflow.com/questions/3904219/what-does-return-0x1-mean#:~:text=0x1%20Is%20just%20a%20hex,a%20different%20representation%20of%200.
https://www.geeksforgeeks.org/write-an-iterative-olog-y-function-for-powx-y/

Tip: In order to understand power2 metod:

   -First  iteration:\
	power = 10 (Decimal) = 1010 (Binary) (even number)\
	power ------------> 1010\
        0x1   ---------------> 0001\
	---------------------------\
  power & 0x1 ----> 0000  so if(0)

   -Second  iteration:\
	power = 5 (Decimal) = 0101 (Binary) (odd number)\
	power ------------> 0101\
        0x1   ---------------> 0001\
	---------------------------\
  power & 0x1 ----> 0001  so if(1)

   -Third  iteration:
	power = 2 (Decimal) = 0010 (Binary) (even number)\
	power ------------> 0010\
        0x1   ---------------> 0001\
	---------------------------\
  power & 0x1 ----> 0000  so if(0)

   -Fourth  iteration:
	power = 1 (Decimal) = 0001 (Binary) (odd number)\
	power ------------> 0001\
        0x1   ---------------> 0001\
	---------------------------\
  power & 0x1 ----> 0001  so if(1)

### PrimalityTest

Main Goal is: Given a positive number "n", return true if it is a prime number otherwise return false.


- Time complexity of isPrime1 metod : T(n) = 3n - 2 ( O(n) )
- Time complexity of isPrime2 metod : T(n) = 3(√n) + 4 ( O(logn) )

### MatrixMultiplication

Main goal is: Given two NxN matrices A and B. Compute the AxB.

- Time complexity of matrixMultiply metod : T(n) =  n^3 + n^2 ( O(n^3) )

### LinearSearch

Main goal is: Given an array of numbers and key. Implement an algorithm that returns the index of the array where the key is stored. If the key does not exist in the array, metod returns -1.

- Best case of time complexity of linearSearch metod : T(n) = 5 ( O(1) )
- Average (expected) case of time complexity of linearSearch metod: T(n) = 1.5n + 2
- Worst case of time complexity of linearSearch metod: T(n) = 3n + 2

### BinarySearch

Main goal is: Given a sorted array of integers and searching for a key. Implement an algorithm that returns the index of the array where the key is stored. If the key does not exist in the array, metod returns -1.

- Best case of time complexity of binarySearch metod : T(n) = 1 ( O(1) )
- Average (expected) case of time complexity of binarySearch metod: T(n) = 1.5 + 2.5logn
- Worst case of time complexity of binarySearch metod: T(n) = 3+ 5logn (logn)
