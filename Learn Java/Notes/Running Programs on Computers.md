Programmers write computer programs to get some practical results. In order to get the result, you need to write code and compile and run it. In this topic, you will learn how to compile and run the simplest **Hello World** program on your computer.

##### Installing Java on your computer

Before compiling and running any Java code, you need to install a **JDK** to develop Java applications. Please, [download the up-to-date Java version](https://www.oracle.com/java/technologies/downloads/). Our projects now support Java 17. Just follow the installation instructions given for your operating system.

To check that the installation has been completed, let's check the version of Java by typing the following command in a terminal:

```java
java -version
```

It outputs the version of Java that is installed on your computer. If it does not work correctly, open the installation instructions and try to set the `path` variable in your operating system.

If you get stuck with Java not being recognizable, [try to watch this video](https://www.youtube.com/watch?v=7zIvAxaRy_U).

##### Writing a program

Let's write a simple program and then start it on your computer. To do that, we will use a terminal.

**Step 1.** Create a file named `Main.java` using any text editor (such as TextPad or NotePad++ for Windows; jEdit or gedit for Mac OS X; gedit for Ubuntu; or something else) and save it in a folder.

**Step 2.** Paste the following source code into this file:

```java
public class Main {

    public static void main(String[] args) {
        System.out.println("Hello, Java");
    }
}
```

The public class name must be the same as the file name.

Note we assume you already understand how the **Hello World** program works. If not, see [here](https://hyperskill.org/learn/lesson/67844/) and then come back.

##### Compiling and running a program

To run the program, we will use a terminal installed in your OS. All the following commands need to be executed from within the same folder that the `.java` file is created in.

**Step 3.** Compile the program using the following command in the terminal:

```java
javac Main.java
```

The `javac` command asks the compiler to translate the source code into bytecode. The result of this command is a file named `Main.class`.

**Step 4.** Run the compiled program (make sure that your terminal is open in the same directory as your source file):

```java
java -cp . Main
```

The `java` command starts a Java application. It does this by starting a JRE and invoking the main method inside the `Main` class.

The `-cp` parameter (_classpath_) specifies the location of user-defined classes and packages. The dot `.` means the current terminal directory. We will consider it in detail in the next topics.

Note: you should not specify the `.class` extension when running a program.

The program should output the following text:

```java
Hello, Java
```

Below is an animation that executes all these steps.

![Compiling and running a program](https://ucarecdn.com/a4678ea3-6d23-464e-bc65-54bab5c64a77/)

**Congratulations!** You have just started a simple program on your computer. Try to change this program if you would like to get more interesting results.

Since Java 11, it is possible to compile and run Java source code file using a single command `java Main.java`. It will compile the file in-memory, so it does not produce a `.class` file. Many developers don't know this small but interesting feature.