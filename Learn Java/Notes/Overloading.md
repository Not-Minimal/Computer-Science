**Method overloading** is a programming concept that allows you to design numerous methods that share the same name but have distinct arguments. When a method is called, the language determines which version of the method to run based on the number, types, and order of the arguments given. With method overloading, you can declare different versions of a method with the same name, creating code that is more concise and easier to understand while still handling all sorts of inputs.

#Overloading allows you to change a method’s signature: the number of parameters, their type, or both. If methods have the same name, but a different number or type of parameters, they are **overloaded**. It means you can invoke different methods by the same name by passing different arguments.

##### What is a method signature?

A method signature is a unique identifier for a method that comprises the method's name and its argument types. It specifies the number, type, and order of parameters that a method expects as arguments to determine its input.

```java
public int sum(int a, int b)
```

Here, the method name is "sum", and it takes two integer parameters named "a" and "b". This signature indicates that the "sum" function accepts two integer inputs. Method signatures are used to distinguish between methods with the same name that take various kinds or quantities of parameters and may be overloaded as a result. When a method is called, the compiler compares its signature to the method signature of the method specification so as to identify which method was called.

##### How to overload methods

As an example, let's consider some overloaded methods from the standard class `Math`:

```java
public static int abs(int a) { return (a < 0) ? -a : a; }

public static float abs(float a) { return (a <= 0.0F) ? 0.0F - a : a; }
```

Since one of these methods has an integer parameter and another has a float variable, but they have the same name, they are using method overloading.

It is impossible to declare more than one method with the same signature (method name and number, types and order of parameters). The code snippet below leads to a compilation error `abs(int) is already defined`. Despite the fact that the methods have different return types, their signatures are identical:

```java
public static int abs(int a) { return (a < 0) ? -a : a; } // abs(int) is already defined

public static float abs(int a) { return (a < 0.0F) ? 0.0F - a : a; } // abs(int) is already defined
```

Here are four methods `print` for printing different values.

```java
public static void print(String stringToPrint) {
    System.out.println(stringToPrint);
}

public static void print(String stringToPrint, int times) {
    for (int i = 0; i < times; i++) {
        System.out.println(stringToPrint);
    }
}

public static void print(int times, String stringToPrint) {
    for (int i = 0; i < times; i++) {
        System.out.println(stringToPrint);
    }
}

public static void print(int val) {
    System.out.println(val);
}
```

The first method prints an input string, the second and the third ones print an input string a given number of times, and the last one prints an integer value. These methods are overloaded.

Let's invoke these methods:

```java
print("some string");
print("another string", 2);
print(2, "another string again");
print(5);
```

As you can see, it's possible to call any of these methods by the same name passing suitable arguments. The code outputs:

```no-highlight
some string
another string
another string
another string again
another string again
5
```

Note that in the case where methods have the same types of parameters, changing the order of these parameters is a valid case of overloading, as you can see in the second and third methods from the example above.

The overloading mechanism allows us not to write different names for methods that perform similar operations.

##### Overloading and casting

To understand how overloading deals with **type casting**, let's consider an example of overloaded methods that only differ in the type of the single argument and see when each of them will be invoked and why.

```java
public class OverloadingExample {

    public static void print(short a) {
        System.out.println("short arg: " + a);
    }

    public static void print(int a) {
        System.out.println("int arg: " + a);
    }

    public static void print(long a) {
        System.out.println("long arg: " + a);
    }

    public static void print(double a) {
        System.out.println("double arg: " + a);
    }

    public static void main(String[] args) {
        print(100);
    }
}
```

Now, if we call `print(100)`, the program outputs:

```no-highlight
int arg: 100
```

What we see here is that 100 is treated as `int`, and the corresponding method is invoked.

In the case where the method parameter type is not exactly the same as the type of the passed argument, the compiler chooses the method that has the closest argument type in order of implicit casting.

Since all integer literals are treated as `int` by default, `int` will be the starting point. The closest one will then be `long`.

Let's remove or comment out the method `public static void print(int a)`, then recompile and run the program again. The result is as expected:

```no-highlight
long arg: 100
```

Ok, now let's remove `public static void print(long a)` too. Since we have no method with the `float` argument, the next type in order of the implicit type casting will be `double`. After recompiling, the program outputs:

```no-highlight
double arg: 100.0
```

If we remove the method `public static void print(double a)` the only method we have left is the one with `short` type of argument. The program won't compile if we just call `print(100)` as we did before.

Here is why: when we pass some value to the method, the compiler does not evaluate it. All that is known is that it is an integer literal, so it has the integer type.

In our case, 100 is treated as an `int` by default and JVM doesn't know if the passed value can be cast to `short` safely. So, the only way to pass the `short` argument is by casting the value explicitly:

```java
 public class OverloadingExample {

    public static void print(short a) {
        System.out.println("short arg: " + a);
    }

    public static void main(String[] args) {
        print((short) 100);  // explicit casting 
    }
}
```

##### Conclusion

Method overloading is an essential concept in object-oriented programming that makes the code more concise, easier to read and maintain, and enables its reuse. By understanding the method signature and the behavior of the compiler when matching method calls to method definitions, developers can take advantage of the flexibility of method overloading and create more versatile and reusable code.

[[Primitive and Reference Types]]
