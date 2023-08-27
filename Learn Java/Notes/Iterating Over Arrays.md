When we work with elements of an [[Array]], we often need to perform some kind of algorithm. For example, we might need to sort them, find the maximum element, print only positive numbers, reverse the order, calculate the arithmetic average of a series of numbers, and so on.

##### Processing arrays using loops like [[The For-Loop]]

A convenient way to process an array is to iterate over it using a loop. The `length` property of an array can help us avoid an `ArrayIndexOutOfBoundsException`.

In the example below, you can see how we can **fill an array with the squares of the indices of its elements**.

```java
int n = 10; // the size of an array
int[] squares = new int[n]; // creating an array with the specified size

System.out.println(Arrays.toString(squares)); // [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

/* iterating over the array */
for (int i = 0; i < squares.length; i++) {
    squares[i] = i * i; // set the value by the element index 
}

System.out.println(Arrays.toString(squares)); // [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
```

In this code, an array of size 10 is created and filled with zeros. Then, the value of each element of the array is set to the square of the element's index. Then the program converts the array to the string representation that lists all elements inside square brackets, and prints it to the standard output.

Now let's see how we can use the loop to **check the order of elements**.

The following program checks if the given array is sorted in ascending order and prints "OK" if the answer is positive, otherwise prints "BROKEN".

```java
int[] numbers = { 1, 2, 3, 4, 5, 10, 6 }; // the order is broken

boolean broken = false; // suppose the array is well-ordered

/* iterating over the array */
for (int i = 1; i < numbers.length; i++) {
    
    if (numbers[i] < numbers[i - 1]) { // if the order is broken
        broken = true; // write a result
        break;         // terminate the loop
    }
}

if (broken) {
    System.out.println("BROKEN");
} else {
    System.out.println("OK");
}
```

For the given array the program prints `"BROKEN"`.

[[The While and Do-While Loops]] are also admissible for iterating arrays, but they are less commonly used.

##### Reading an array from the standard input

We can also use a loop to read all the elements of an array from the standard input.

For example, the following input consists of two lines. The first line contains the length of the array and the second line contains all its elements.

```java
5
101 102 504 302 881
```

Let's read these numbers using `Scanner` (you can use other tools for reading) and then output all the numbers it read.

```java
Scanner scanner = new Scanner(System.in);
        
int len = scanner.nextInt(); // reading a length
int[] array = new int[len];  // creating an array with the specified length
        
for (int i = 0; i < len; i++) {
    array[i] = scanner.nextInt(); // read the next number of the array
}

System.out.println(Arrays.toString(array)); // output the array
```

The program outputs:

```java
[101, 102, 504, 302, 881]
```

##### Using for-each loop

Since Java 5, there has been a special form of the for-loop called **for-each**. It is used to iterate through each element of an array, a string, or a collection (we will learn them in the following topics) without indices.

Here's what it looks like:

```no-highlight
for (type var : array) { 
    //statements using var
}
```

And here's how it can be read: for each element `var` of type `type` in the `array` array do `{` some statements in the body `}`.

Let's consider the constituents in more detail. `type` specifies the type of variable that will store one element of the array in each iteration. Usually, that type equals the type of the elements stored in the array. `var` is the name of that variable. You can choose any name you prefer, but remember to stick to variable naming conventions. On the first iteration, it stores the first element of the array, on the second iteration it stores the second element, and so on.

Let's now calculate the number of `'a'` letters in the given character array using a **for-each loop**:

```java
char[] characters = { 'a', 'b', 'c', 'a', 'b', 'c', 'a' };

int counter = 0;
for (char ch : characters) {
    if (ch == 'a') {
        counter++;
    }
}

System.out.println(counter); // it outputs "3"
```

We can do the same thing with a for-loop:

```java
char[] characters = {'a', 'b', 'c', 'a', 'b', 'c', 'a'};

int counter = 0;
for (int i = 0; i < characters.length; i++) {
    if (characters[i] == 'a') {
        counter++;
    }
}

System.out.println(counter); // it outputs "3"
```

The for-each loop has some limitations. First of all, you cannot use it if you want to modify an array, because the variable we use for iterations doesn't store the array element itself, only its copy. It is also impossible to obtain an element by its index since we have no index. Finally, as is clear from the name, we cannot move through an array with more than one step per iteration: we iterate over each and every element, so we work with them one by one.

As you can see, the absence of indices makes the code more readable. The for-each loop also allows you to avoid the `ArrayIndexOutOfBoundsException`. All of this makes it a popular tool for iterating over an array.

##### Conclusion

Using loops is a convenient way to process an array of elements. You can perform various algorithms, iterate an array and read in from the standard input with a loop. A form of for-loop called for-each is commonly used to iterate through each element of an array, string, or collection without the elements' indices. There are some limitations to its use, but it makes the code more readable and allows us to avoid the `ArrayIndexOutOfBoundsException`.
#int #for-loop #do-while #Characters #String-algorithms 

[[Binary Numbers]]
[[Introduction to Operating Systems]]
