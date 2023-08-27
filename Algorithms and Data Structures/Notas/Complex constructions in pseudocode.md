In the previous steps, we started discussing pseudocode and covered some basic concepts, such as variables, arithmetic operations, conditional statements, and some others. However, it might not be enough: to describe some algorithms, we will need more complex constructions. In this topic, we will learn more advanced concepts used in pseudocode, such as loops, arrays, and functions. Knowing them will allow you to express sophisticated algorithmic ideas in a simple and concise manner.

##### Loops

Loops serve to perform repeated calculations. We will use two kinds of loops: the `while` and the `for` loops. A `while` loop looks like this:

```
i = 0
while i < 5:
    print(i)
    i = i + 1
```

The syntax is the following: the `while` keyword followed by a condition, colon, and a loop body. This code means "execute the body while the condition is true". In this case, the snippet prints numbers from 0 to 4.

Here is what the `for` loop looks like:

```
sum = 0

for i in (1, 9):
    sum = sum + i

print(sum) // 45, sum of numbers from 1 to 9
```

The (`1, 9)` construction denotes a range of numbers from 1 to 9. The last number is included in the range: we use a **closed interval**, which includes all its limit points. In general, `for i in (a, b)` means that the variable `i` is sequentially assigned all numbers from the range (`a, b)`.

##### Arrays

Arrays serve to store a collection of objects of the same type. If we need an array and want to initialize its elements later, we will write the following construction:

```
array[1, 10] // 10-element array with indices from 1 to 10
```

Here, the variable `array` denotes an array of 10 elements. We can also initialize an array with some data explicitly:

```
fib = [0, 1, 1, 2, 3, 5, 8] // array with the name fib
```

The two most commonly-used operations for arrays are learning the length and accessing elements. Enumeration of elements starts with **1**. As you may know, array indices in programming often start with 0, but we will use a common pseudocode approach. Let's have a look at how it works:

```
x = fib[4] // x is 2
length = len(fib) // length is 7

for i in (1, len(fib)):
    print(fib[i])
```

The last `for` loop iterates through the numbers in the `fib` array and prints all of them to the screen.

Another useful operation is getting a subarray of an array. It functions as follows:

```
array = [0, 3, 2, 4, 1]
subarray = array[2, 4]
print(subarray) // 3, 2, 4
```

To get a subarray, we just specify the desired range in square brackets. Remember that the last number is included in the range.

##### Functions

A function is a piece of program code that can be accessed from another place in the program, which can accept parameters (arguments) and returns the result value.  
We often work with functions, because they allow us to make sense of things better and allow us in our pseudocode to ignore some implementation details. Now, let's learn how to write the function using pseudocode. Below is a function that calculates the mean value of numbers in an array:

```
function calc_mean(array):
    sum = 0

    for i in (1, len(array)):
        sum = sum + array[i]
    
    return sum / len(array)
```

First, we put a keyword `function` , then a function's name, its arguments in round brackets separated by commas and at the end of a line, we put a colon. After that, we write the function's body with an indent. If we need to return something from a function, we use the `return` keyword, like in the example above.

##### Implementing simple algorithms in pseudocode

Let's see how we can implement some simple algorithms using the described pseudocode. The first example is a function that takes an array of numbers as input and returns either zero (if the array is empty) or the maximum number in the array:

```
function find_max(array):
    if len(array) == 0 then:
        return 0

    max = array[1]
    
    for i in (2, len(array)):
        if array[i] > max then:
            max = array[i]
    
    return max
```

Another example is a function that merges two arrays. It takes two sorted arrays as input and returns one sorted array containing the numbers from both input arrays:

```
function merge(left, right):
    merged[1, len(left) + len(right)] // new array 
    
    i = 1      // 
    j = 1      // indices for loop
    k = 1      // 
    
    // iterate over two arrays while both of them have elements left
    while i <= len(left) and j <= len(right):
        if left[i] < right[j] then:    // put element from left array to merged array
            merged[k] = left[i]
            i = i + 1   // move to next element in left array
        else:
            merged[k] = right[j] // put element from right array to merged array
            j = j + 1   // move to next element in right array
        k = k + 1   // move to next element in merged array
                
    while i <= len(left):    // move remaining element in left array to merged array
        merged[k] = left[i]
        i = i + 1
        k = k + 1

    while j <= len(right):   // move remaining element in right array to merged array
        merged[k] = right[j]
        j = j + 1
        k = k + 1

    return merged
```

Note that we don't care about passing arguments by value, by reference, and so on. If you change any variable inside the function, those changes are saved outside the function. Thus, if you need to keep an argument immutable, just make a copy of it to operate with. Consider this example of the `swap` function that swaps two variables:

```
function swap(a, b):
    temp = a
    a = b
    b = temp

c = 3
d = 5

swap(c, d)

print(c) // 5
print(d) // 3
```

##### Summary

In this topic, we've learned some advanced concepts that we use in pseudocode: loops, arrays, and functions. Along with the ideas covered in the introductory part, they are enough to express both simple and complex algorithmic ideas in a clear manner. Further, we will use the introduced syntax to describe and learn algorithms. Remember: in our dialect, arrays start with `1`, and we use closed ranges!

[[Big-O Notation]]


