##### The declaration of the main method

Java is primarily an object-oriented language. It means a Java program can be considered as a collection of objects that communicate via calling each other's methods. A typical Java program includes a lot of classes, interfaces, objects, and other concepts from object-oriented programming.

Even the simplest "procedural-style" program should have at least one class and the main method inside to start the program. The main method is the entry point for any application. It means that the execution of any program begins right here. Ever since Java 7, there has been no other way to start an application than with this method (excluding the case in which you start your application inside a special container for applications but this is not considered in our materials).

Let's see an example of the simplest application that prints the text **"Hello, Java"** to the standard output:

```java
public class Main {

    public static void main(String[] args) {
        System.out.println("Hello, Java");
    }
}
```

Here is a class named `Main`. The class contains **the main method** for starting the program.

It is important to mention that a class containing the main method can have any name, but the main method should always have the name `main`.

Let's take a closer look at the declaration of the main method:

```java
public static void main(String[] args)
```

- the keyword `public` indicates that the method can be invoked from everywhere;
- the keyword `static` indicates the method can be invoked without creating an instance of the class;
- the keyword `void` indicates the method doesn't return any value;
- the array variable `args` contains arguments entered at the command line, the array is empty if there are no arguments.

As you can see, even the simplest Java application contains a lot of concepts. All of them will be studied in the next topics related to methods and object-oriented programming. Now you should just understand how to write and run a simple Java program with **the main method**.

##### Invalid declarations of the main method

If the main method has an invalid declaration, two cases are possible:

- your program cannot be compiled
- your program is successfully compiled but can't be started

**Your program cannot be compiled.** This is the case when the main method declaration breaks the syntax of Java.

Examples:

- invalid method declaration: no return value (even `void`).

```java
public static main(String[] args)
```

- invalid method declaration: a mistake in the keyword (`pulic` instead of `public`).

```java
pulic static void main(String[] args)
```

**A program can be compiled but cannot be run.** This is the case when the main method has a correct declaration as a regular method but doesn't satisfy the specific requirement of the main method.

Examples:

- invalid arguments (should be `String[] args`)

```java
public static void main(String args) {
    System.out.println("Hello, Java");
}
```

- the method declaration has no keyword `static`

```java
public void main(String[] args) { 
    System.out.println("Hello, Java");
} 
```

In both cases, an error happens at runtime.

##### Conclusion

So, the main method is the entry point of any Java program. It has a very specific syntax which you need to remember.

[[Functional Decomposition]]
