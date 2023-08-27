Sometimes, you need to use a variable that should not be modified during the program. Such variables are known as **constants**. Java provides a special keyword called `final` to declare them. The only difference between a regular variable and a final variable is that we cannot modify the value of a final variable once assigned. Hence final variables must be used only for the values that we want to remain **constant** throughout the execution of the program.

##### Final variables

The following code demonstrates two final variables: `PI` which represents a well-known math constant and `HELLO_MSG` which represents a string text.

```java
final double PI = 3.1415;
final String HELLO_MSG = "Hello";

System.out.println(PI); // 3.1415
System.out.println(HELLO_MSG); // Hello
```

Both variables cannot be modified since they are marked as final, but they can be accessed as many times as we need them.

A good practice is to represent a final variable in all caps using an underscore to separate words. It allows you to distinguish them from regular variables. But sometimes, you will also see final variables written in lowercase: this is also admissible for **local final variables**.

Note, that the compiler will produce an error when trying to modify the value of a final variable.

Here is an example:

```java
final double PI = 3.1415;
PI = 3.1416; // error line
```

The Java compiler outputs the message: `cannot assign a value to final variable 'PI'`.

Important, if a final variable has not been assigned before using it, the compiler also will produce an error `"variable might not have been initialized"`.

Here is an example:

```java
final boolean FALSE;
System.out.println(FALSE); // error line
```

To fix it, just assign a value before accessing the value of a final variable:

```java
final boolean FALSE;       // not initialized
FALSE = false;             // initialized
System.out.println(FALSE); // no errors here
```

Notice that the value of a final variable can be reassigned to a regular variable without any restrictions:

```java
final int count = 10;
int cnt = count;
cnt = 20; // no errors here, cnt is not final
```

The value of a regular variable can be changed any time as always.

##### Final reference variables

The `final` keyword can be legally used with reference variables. In this case, the final keyword means that it is not possible to reassign a reference to the variable.

Here is an example with the `StringBuilder` class which is a mutable version of `String`.

```java
final StringBuilder builder = new StringBuilder();
builder = new StringBuilder(); // error line
```

In this code, the second line won't compile since we are trying to reassign a reference to the final variable `builder`. But there is one important point.

Note, that it is always possible to change the internal state of an object pointed at by a final reference variable, i.e. the constant is only the variable itself (the reference), not the object to which it refers.

So, the following code is absolutely correct:

```java
final StringBuilder builder = new StringBuilder(); // ""
builder.append("Hello!"); // it works
System.out.println(builder.toString()); // Hello!
```

As you can see, this code changed the internal state of an object (`""` → `"Hello!"`) referenced by a final variable. When we invoked the `append()` method we changed not the object itself but just the value of its fields. The `append()` method is one of the main operations on a `StringBuilder` that are not available in `String`. It converts its argument to a `String` and then appends its characters to the character sequence. We will discuss the `StringBuilder` class and its methods in further topics.

Since Java 11, it is also possible to use `final` with `var` to use automatic type inference for a constant variable.

```java
final var FINAL_VAR = 10; // int
final var MSG = "Hello!"; // String
```

##### When to use final variables

We hope you understand how the `final` keyword works for local variables. Now it's time to figure out when to use it.

Some programmers mark all variables that they do not want to modify as `final`. In this case, the program will contain a lot of such variables.

```java
final Scanner scanner = new Scanner(System.in);
final int a = scanner.nextInt();
final int b = scanner.nextInt();
System.out.println(a + b);
```

This approach allows you to write programs with the minimum number of mutable variables which usually leads to fewer errors. In addition, the Java compiler can optimize code with final variables effectively and your program can be a little faster. But this is not always predictable behavior and needs some advanced knowledge.

There is also a counterargument: massive use of the `final` keyword makes your code less readable ([boilerplate code](https://en.wikipedia.org/wiki/Boilerplate_code)).

Thus, in our learning examples, we will not always write the `final` keyword, but sometimes you will see such examples. In your solutions, you can write or avoid this keyword. During your real work as a programmer, we hope that the issue of using finals will be standardized for all programmers in the project.

Interestingly, the `final` keyword can also be used in some different contexts, not only for declaring constants. We will learn other ways to use this keyword in the next topics.
#Final-Variables


[[Write, Compile and Run]]
[[Iterating Over Arrays]]
