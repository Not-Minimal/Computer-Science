When you need to process multiple objects of the same type, you can save them in an **array** and then process them together as a single unit. It is a very convenient approach if you know how many objects the program will process during runtime.

You may consider an array as a collection of elements of the same type. All elements are stored in the memory sequentially.

All elements in a collection are stored under the same name. The possible number of elements to be stored is established when the array is created and cannot be changed. But a stored element can be modified at any time.

##### Arrays in Java

The picture below illustrates an array of five floating-point numbers. Each element has an integer index (0-4) to be accessed.

![Arrays in Java](https://ucarecdn.com/9e6fb36e-293b-4fce-99e5-430e520d0783/)

The first element has an index of 0, and the last element has an index equal to **array size minus 1**.

In Java, an array has the following important features:

- an array is a reference type;
    
- all array elements are stored in the memory sequentially;
    
- each element of the array is accessed by its numerical index, the first element has the **index 0**;
    
- the last element is accessed by the index equal to **array size – 1**;
    
- it is possible to create an array to store elements of any type.
    

##### Declaration, instantiation, initialization

To create an array filled with elements we should:

- declare a variable of an array type **(declaration);**
    
- create an instance of the array object **(instantiation)**;
    
- initialize the array by some values **(initialization)**.
    

When we declare a variable, we define its type and name. Instantiation happens when memory is allocated for this object. Initializing the array object means that we put certain values of the array object into the memory of our program.

To declare an array, we must use two special characters **[ ]** after the type of elements in the array:

```java
int[] array; // declaration form 1
```

It can also be used after the name of the array variable:

```java
int array[]; // declaration form 2: less used in practice
```

We will use the first form of declaration because it is most often used when writing Java.

##### Creating an array with specified elements

Java provides several ways to create an array with specified elements.

The simplest way to instantiate and initialize an array is to enumerate all its elements:

```java
int[] numbers = { 1, 2, 3, 4 }; // instantiating and initializing an array of 1, 2, 3, 4
```

Another way is to initialize an array using variables:

```java
int a = 1, b = 2, c = 3, d = 4;
int[] numbers = { a, b, c, d }; // instantiating and initializing an array of 1, 2, 3, 4
```

In this case, we should have all the elements at the moment of the array creation.

##### Creating an array using the "new" keyword

The most general way to create an array is to use the special keyword `new` and specify the necessary number of elements:

```java
int n = ...; // n is a length of an array
int[] numbers = new int[n];
```

This form is useful when the number of elements is known before starting the program. When we create an instance of the array object with indicated length like `[n]` or `[5]` and don't enumerate its elements explicitly, the array is initialized with default values of its type.

Now, the array has `n` elements. Each element is equal to zero (the default value of the type `int`). Next, we should make an explicit initialization of elements.

The size of an array cannot be greater than `Integer.MAX_VALUE`. Actually, it is even slightly smaller than this value.

It's possible to separate declaration and instantiation into two lines:

```java
int[] numbers; // declaration
numbers = new int[n]; // instantiation and initialization with default values
```

Also, we can write the keyword `new` and enumerate all elements of an array:

```java
float[] floatNumbers; // declaration 
floatNumbers = new float[] { 1.02f, 0.03f, 4f }; // instantiation and initialization
```

By default, an array of a primitive type is initialized with default values. For other values, you need to fill values explicitly or use the utility class Arrays. It provides a convenient way to fill a whole array or a part of it with some values:

```java
int size = 10;
char[] characters = new char[size];

// It takes an array, start index, end index (exclusive) and the value for filling the array
Arrays.fill(characters, 0, size / 2, 'A'); 
Arrays.fill(characters, size / 2, size, 'B');

System.out.println(Arrays.toString(characters)); // it prints [A, A, A, A, A, B, B, B, B, B]
```

##### The length of an array

To obtain the length of an existing array, access the special property `arrayName.length`. Here is an example:

```java
int[] array = { 1, 2, 3, 4 }; // an array of numbers
        
int length = array.length; // number of elements of the array
        
System.out.println(length); // 4
```

##### Accessing elements

The values of elements of an array can be changed. You can use the index to set a value of the array or to get a value from it.

Set the value by the index:

```java
array[index] = val;
```

Get the value by the index:

```java
val = array[index];
```

Indexes of an array have numbers from **0** to **length – 1** inclusive.

Let's see an example.

```java
int[] numbers = new int[3]; // numbers: [0, 0, 0]
numbers[0] = 1; // numbers: [1, 0, 0]
numbers[1] = 2; // numbers: [1, 2, 0]
numbers[2] = numbers[0] + numbers[1]; // numbers: [1, 2, 3]
```

This code works as follows:

- In the first line, the array of integers named `numbers` with three elements in it is created. It is initialized with default values, which is 0 for the `int` type.
    
- In the second line, the value "1" is assigned to the very first element of the array by its index (do not forget, the first element has the index 0).
    
- In the third line, the value "2" is assigned to the second element of the array by its index (numbers[1] is the second element).
    
- In the last line, the sum of the first two elements is assigned to the third element by its index.
    

If we try to access a non-existing element by an index then a runtime exception occurs.

For instance, let's try to get the fourth element (with index 3) of the considered array `numbers`.

```java
int elem = numbers[3];
```

The program throws an `ArrayIndexOutOfBoundsException.`

Be careful when indexing elements of an array.

##### Conclusion

An array is a collection of elements of the same type. It allows to store elements in memory sequentially and process them all together as one unit. In this topic, you learned how to declare, instantiate and initialize an array, as well as create an array with specified elements. We also showed you how to create an array using the `new` keyword, obtain an array's length, and access its elements to change their values.

Example:
```java
public class Main {
    public static void main(String[] args) {
        int[] integerArray = new int[]{1, 2, 3, 4, 5};
        System.out.println(arraySum(integerArray));
    }
    private static int arraySum(int[] arrayToSum) {
        int sum = 0;
        for (int number : arrayToSum) {
            sum += number;
        }
        return sum;
    }
}
```

[[Arrays as Parameters]]
