You may remember that a method is a sequence of statements that can be invoked or referred to by its name. Nothing special, huh? But what if we tell you that you can use it in a program anytime you need and anywhere you want just by invoking it with one line of code? Hope that we have caught your attention now!

To get started, we will call any method:

```java
getVolume(a, b, h);
```

Here, `getVolume` is the name of the method that, for example, calculates a volume of some geometric shape, and the variables `a`, `b` and `h` are its parameters. Technically, the parameter of a method is some value that is used inside the method. The combination of the name and method parameters in parentheses is the way we call or invoke the method. Let's focus on it in more detail.

##### Name of the method

Each method has a name that is used to call it. Generally, it reflects what the method does – prints, finds, calculates, and provides you with some information.

The Java compiler requires a method name to be a **legal identifier**. The rules for legal identifiers are the following:

- identifiers are case-sensitive;
    
- an identifier can include Unicode letters, digits, underscore `_` or currency characters, such as `$`;
    
- an identifier can't start with a digit;
    
- identifiers must not be a keyword.
    

In addition, there is a naming convention that restricts possible method names. It's optional but desired for developers. By convention, a one-word name should be a verb in lowercase: `sum`, `multiply`, or `round`. On the contrary, such names as `recorded`, `students` or `highest` do not comply with the convention.

If a method has a multi-word name, the first letter of the second and the following words should be capitalized: `getValue`, `calculateNumberOfOranges`, or `findLetter`.

OK, now we know how methods are named. Let's talk about how we actually call them!

##### Calling a #method 

If you want to call (or invoke) a method in your program, you should write its name and pass the values of its parameters in parentheses. Here's how it can be done:

```java
printNumber(7); // this method prints 7

convertDoubleToInt(1.25); // this method converts double value to int

findUserByName("Kate"); // this method finds a user whose name is Kate
```

Let's take a look at the `findUserByName` example.

Here we pass a String value with a name to make the `findUserByName` method do its job.

To call a method from outside the class it belongs to, you need to indicate a class as a prefix. Check these methods:

```java
Math.round(79.378); // method with Math class name
Character.isLetter('a'); // method with Character class name
```

Let's try to perform a small task by invoking a method:

```java
double weight = 63.85;
weight = Math.round(weight); // now weight equals 64.0
```

Here, we have methods that take parameters, but what if we tell you that some methods don't accept parameters at all? In that case, just leave the parentheses empty.

Some methods are called in a slightly different ways. Take a look:

```java
// this is how you call an instance method

String name = new String("Anya"); // created an instance (1)
name = name.toLowerCase(); // anya (2)
```

Methods like this require an object of a certain class to be invoked. Before we called the `toLowerCase()` method, we created an object of the `String` class called `name`, since the method in question deals with strings. Now we can call the method for this particular **instance** _(2),_ which results in decapitalizing all the letters from our string.

As you see, this method requires an instance to be created before it can be called, that's why it is known as an **instance method**. We will talk about this type of method later.

##### Built-in methods

Why do you need to rewrite algorithms that have already been written? Of course, we're not talking about some special cases like educational tasks. Still, it is more efficient to use pre-defined methods that are always available to the user. That is why there are two types of methods in Java: **built-in** and **user-defined** methods.

Built-in methods belong to the Standard Java library. Now there are a lot of built-in methods that convert or compare values, round doubles, find the maximum or the minimum value, and do a lot of useful operations. We've already dealt with the `round()`, `isLetter()`, `compareTo()`, and `hasNext()` methods, but the number of built-in methods is huge and constantly growing. You can find the method you need in the Oracle documentation. For example, check out the link to the [Math library](https://docs.oracle.com/javase/8/docs/api/java/lang/Math.html).

In contrast to built-in methods, user-defined methods are created by the programmer. It is a common practice to create a customized subprogram for a specific purpose. You may create your own method and even put it in your own class. Later on, we will learn why it is a good practice to use user-defined methods and how to actually create them.

##### Conclusion

Generally, a method is a necessary tool for a programmer who is aiming for a neat and reusable code style. With the help of methods, you can perform any specific task you need. They make the program look more readable, and you don't need to repeat routine code lines over and over. Some tasks are wrapped in special built-in methods that are part of the standard Java library. Also, there are user-defined methods that are created by the programmer. We will discuss these methods in other topics.