When programmers are writing a real program, they use standard classes as building blocks. However, they often need to declare new program-specific classes to better represent the domain area. In this topic, we will see how you can create a **custom class** in Java.
##### Declaring new classes
A new class is declared with the `class` keyword followed by the name of the class. For example, this is how you would create a class named `Nothing`:
``` java
class Nothing {
    // empty body
}
```

A class body can include fields, methods, and constructors. **Fields** store data, **methods** define behavior and **constructors** allow us to create and initialize new objects of the class. Not all Java classes have fields and methods so sometimes you will see classes without them.

The source code of a class is placed in a `.java` file. Usually, a source code file contains only one class and has the same name as that class, but sometimes a file can contain more classes.
#Fields #methods #constructors
##### Writing fields
A **field** is a variable that stores data. It may have any type, including primitive types (int, float, boolean and so on) and classes (even the same class). A class can have as many fields as you need.

Let's declare a class `Patient`:
``` java
/*
The class is a "blueprint" for patients
*/
  class Patient {

  String name;
  int age;
  float height;
  }
```

This class represents a patient in a hospital information system. It has three fields for storing important information about the patient: `name`, `age`, and `height`. All objects of the class `Patient` have the same fields, but their values may be different for each object.

##### Creating objects

Let's create an **instance** of the class `Patient` using the keyword **new**:
#instance #new-keyword 

```java
Patient patient = new Patient(); 
```

When you create a new object, each field is initialized with the default value of the corresponding type.
``` java
System.out.println(patient.name); // it prints null
System.out.println(patient.age); // it prints 0
```
##### Creating multiple objects of the same class
The following program creates two objects of the class `Patient` and prints the information about them.
``` java
public class PatientDemo {
    
    public static void main(String[] args) {
        
        Patient john = new Patient();
        
        john.name = "John";
        john.age = 30;
        john.height = 180;
        
        System.out.println(john.name + " " + john.age + " " + john.height);
            
        Patient alice = new Patient();

        alice.name = "Alice";
        alice.age = 22;
        alice.height = 165;
        
        System.out.println(alice.name + " " + alice.age + " " + alice.height);
    }
}

class Patient {

    String name;
    int age;
    float height;
}
```

Note that both classes are placed in the same file named `PatientDemo.java`. If we place two or more classes in the same `.java` file, only one of them can be declared as public, and the name of the `.java` file must match the public class in the `.java` file.

In the code above, we've created two patients, John and Alice, defined the values of their fields and then printed out the information about them. So, the output of the code above is:
``` java
John 30 180.0
Alice 22 165.0
```
##### Summary
In this topic, we've learned how to create classes in Java. Custom classes can be very useful because they allow you to define fields and methods that work best for your purposes.

Fields keep the current state (data) of the instances of the class and their values can be different for different instances. You can create objects of the class, assign values to their fields and use those objects in your programs. All in all, classes are a very powerful tool and we hope that you'll use them in your projects!

[[45. Instance Methods]]

As you know, a class is one of the fundamental concepts in Java. You develop the logic of a program by creating fields and methods inside classes. Fields describe an object's properties and methods describe what an object does. In this topic, we will go on to discuss the nature of methods in Java. All methods can be divided into two groups: **instance** and **static**. We were mostly focused on the static ones previously, so now let's learn more about instance methods to better understand the differences between the two.

##### What's the difference?

Let's look at the code below. Here we have a class named `Human` with two fields and two methods.

```java

class Human {

String name;

int age;

public static void printStatic() {

System.out.println("It's a static method");

}

public void printInstance() {

System.out.println("It's an instance method");

}

}

```

The modifier `public` isn't important for us now. It just means that other classes can also get access to our methods.

As you see, the methods `printStatic` and `printInstance` have differences in declaration. When you see a method, you can easily understand: if there is a word `static`, then the method is **static**; if there is no word `static`, then the method is an **instance** one.

Now let's see what this really means!

##### Understanding: static and instance

To invoke a static method we don't need to create an object. We just call the method with the class name.

```java

public static void main(String[] args) {

Human.printStatic(); // will print "It's a static method"

}

```

In other words, you can say that a static method belongs to a class (because we don't need an object).

An instance method requires a different invocation. As you already guessed, to invoke an instance method we have to create an object first. Otherwise, there is no way to use an instance method.

It's called an instance method because an instance is a concrete representation of an object.

Here we call the method `printInstance` for two different objects:

```java

public static void main(String[] args) {

Human peter =  new Human();

peter.printInstance(); // will print "It's an instance method"

Human alice =  new Human();

alice.printInstance(); // will print "It's an instance method"

}

```

So, we can say that an instance method is a method that belongs to each object that we created of the particular class.

##### Instance methods: features

Instance methods have a great advantage: they can access fields of the particular object of the class.

To illustrate the feature, let's modify our class `Human`. We have one static method `averageWorking` and two instance methods: `work` and `workTogetherWith`.

```java

class Human {

String name;

int age;

public static void averageWorking() {

System.out.println("An average human works 40 hours per week.");

}

public void work() {

System.out.println(this.name + " loves working!");

}

public void workTogetherWith(Human other) {

System.out.println(this.name + " loves working with " + other.name + '!');

}

}

```

The keyword `this` represents a particular instance of the class.

It's easier to understand by an example:

```java

public static void main(String[] args) {

Human.averageWorking(); // "An average human works 40 hours per week."

Human peter =  new Human();

peter.name = "Peter";

peter.work(); // "Peter loves working!"

Human alice =  new Human();

alice.name = "Alice";

alice.work(); // "Alice loves working!"

peter.workTogetherWith(alice); // "Peter loves working with Alice!"

}

```

Look, now we have different outputs for the method `work` because two different objects have different values for `name`. First, we created `peter` and gave him a name, then by invoking `peter.work()` we actually saw his name in the output. We did the same with `alice` and also saw her name in the output.

Look at the `workTogetherWith` method. The keyword `this` allows us to access a field of the particular object and distinguish it from the same field of another object.

In this case, keyword `this` is optional, so the code will work the same without it. But it's a good practice to add it to avoid confusion.

Of course, instance methods can take arguments and return values just as you saw in the previous topics. Return values can be of any type including the same type as the defined class.

##### Summary

In Java, every method should be declared within a class. The difference between instance and the static methods lies in whether they interact with an object or not. Let's recap:

* static method is associated with the class as a whole;
* an instance method can only be invoked through an instance of a class, so that you have to create an object first;
* instance methods can access the fields of the class with `this` keyword.

Instance methods allow programmers to manipulate particular objects of a class. And because of it, they give us more functionality and are used more often than static methods!

##### Fundamentals

**Object-oriented programming (OOP)** is a programming paradigm based on the concept of **objects** that interact with each other to perform program functions. Each object can be characterized by a state and behavior. An object’s current state is represented by its **fields**, and an object’s behavior is represented by its #methods.

##### Basic principles of #OPP

There are four basic principles of OOP. They are **encapsulation, abstraction, inheritance,** and **polymorphism.**

* **Encapsulation** ensures bundling (=encapsulating) of data and the methods operating on that data into a single unit. It also refers to the ability of an object to hide the internal structure of its properties and methods.
* **Data abstraction** means that objects should provide a simplified, abstract version of their implementations. The details of their internal work usually aren't necessary for the user, so there's no need to represent them. Abstraction also means that only the most relevant features of the object will be presented.
* **Inheritance** is a mechanism for defining parent-child relationships between classes. Often objects are very similar, so inheritance allows programmers to reuse common logic and at the same time introduce unique concepts into the classes.
* **Polymorphism** literally means "having many forms" and is a concept related to inheritance. It allows programmers to define different implementations for the same method. Thus, the name (or interface) remains the same, but the actions performed may differ. For example, imagine a website that posts three main types of text: news, announcements, and articles. They are somewhat similar in that they all have a headline, some text, and a date. In other ways, they are different: articles have authors, news bulletins have sources, and announcements have a date after which they become irrelevant. It is convenient to write an abstract class with general information for all publications to avoid copying it every time and store what is different in the appropriate derived classes.

These are the key concepts of OOP. Each object-oriented language implements these principles in its own way, but the essence stays the same from language to language.

##### Objects

The key notion of OOP is, naturally, an **object.** There are a lot of real-world objects around you: pets, buildings, cars, computers, planes, you name it. Even a computer program may be considered as an object.

It's possible to identify some important characteristics of real-world objects. For instance, for a building, we can consider the number of floors, the year of construction, and the total area. Another example is a plane, which can accommodate a certain number of passengers and transfer you from one city to another. These characteristics constitute the object's **attributes** and **methods**. Attributes characterize the states or data of an object, and methods characterize its behavior.

##### #Classes

Often, many individual objects have similar characteristics. We can say these objects belong to the same **type** or **class**.

A class is another important notion of OOP. A class describes a common structure of similar objects: their fields and methods. It may be considered a template or a blueprint for similar objects. An object is an individual **instance** of a class.

In accordance with the principle of encapsulation mentioned above, any class should be considered as a blackbox, that is, the user of the class should see and use only the interface part of the class, namely, the list of declared properties and methods, and should not delve into the internal implementation.

Let's look at some examples below.

**Example 1. The building class**

**![real-life building](https://ucarecdn.com/b0bcc13c-0f35-40f9-97bc-e78b56f5a556/)**

**An abstract building for describing buildings as a type of object (class)**

Each building has the same attributes:

* Number of floors (an integer number);
* Area (a floating-point number, square meters);
* Year of construction (an integer number).

Each object of the building type has the same attributes but different values.

For instance:

* Building 1: number of floors = 4, area = 2400.16, year of construction = 1966;
* Building 2: number of floors = 6, area = 3200.54, year of construction = 2001.

It's quite difficult to determine the behavior of a building, but this example demonstrates attributes pretty well.

**Example 2. The plane class**

Unlike with a building, it is easy to define the behavior of a plane: it can fly and transfer you between two points on the planet.

**![real-life airplane](https://ucarecdn.com/e2dd006a-b80c-4761-98c9-5c76f563fec8/)**

**An abstract plane for describing all planes as a type of object (class)**

Each plane has the following attributes:

* Name (a string, for example, "Airbus A320" or "Boeing 777");
* Passenger capacity (an integer number);
* Standard speed (an integer number);
* Current coordinates (they are needed to navigate).

Also, it has a behavior (a method): transferring passengers from one geographical point to another. This behavior changes the state of a plane, namely, its current coordinates.

##### Objects and classes

In OOP, everything can be viewed as an object; a class, for example, is also an object. Programs are made up of different objects that interact with each other. Object state and behavior are usually combined, but this is not always the case. Sometimes we see objects without a state or methods. This, of course, depends on the purpose of the program and the nature of the object.

For example, there is such a thing as an interface. Not a user interface, but a class that only serves to be inherited from in order to guarantee an interface to its descendant classes. It is a stateless class. Structures exist in C++ for historical reasons. Now a structure in C++ is also a class, but once upon a time, a structure had only properties and did not have any methods – a type for storing data and nothing else. These are special cases, and they are sometimes useful.

#### Main Concepts

**Class:** Type of an Object

**Field:** State of an Object

**Method:** Behavior of an Object

**Object:** An individual instance of a class

#### Resume Principles

#Encapsulation : is about hiding the internal data of objects from the world

#Polymorphism : is about defining different logic of the same method

#Abstraction : is about giving only the most relevant features of the object to the user

#Inheritance : establishes parent-child relationships between classes, allowing reuse of common logic and introduction of unique concepts.

##### Conclusion

To put it concisely, you should remember the following:

* An object-oriented program consists of a set of interacting objects.
* According to the principle of encapsulation, the internal implementation of the object is not accessible to the user.
* An object may have characteristics: fields and methods.
* An object is an instance of a class (type);
* A class is a more abstract concept than an individual object; it may be considered a template or blueprint that describes the common structure of a set of similar objects.

[[44. Defining Classes]]

While working on the computer, you need to communicate with the **Operating system** (OS) to get things done for you. For example, if you want to open a file, you have to tell the Operating system (Windows, Linux, or macOS) about it. There are two ways of interacting with the OS: one is text-based, the other is visual based. Both are important. These two methods are the Command-line interface and the Graphical user interface.

##### What is the command line?

The **command-line interface** or **CLI** is a way to interact with an OS via text commands. On the other hand, the **graphical user interface** or **GUI** provides an interface with many icons and menus. Here, you give commands to the operating system by clicking on these icons or menu items.

In the past, command-line interfaces were the only means of interacting with a computer. But why use it now, when you have a simple, familiar graphical interface? Well, generally command-line interfaces are much more flexible and have more options. For example, you can combine commands to create a new one, while you cannot do that via a graphical interface. Some software can even have only a command-line interface, thus requiring its user to know command line basics.

Besides, programs executable by the command-line interface can be written in a command language. They are called **shell scripts** on UNIX and UNIX-like systems such as GNU/Linux and macOS, and **batch files** on Windows.

All operating systems have command-line interfaces. Applications may have it as well. Also, modern programming languages provide an interactive command-line mode, in which you execute code line by line.

##### Accessing command-line interpreter

Usually, you don't have to go to the location of the **command-line interpreter** or **terminal** to open it. You can open it by simply searching \_cmd\_ in Windows and \_terminal\_ in Linux distributions.

If you feel more like an explorer and want to find the location on your own, then try the following paths:

* For Windows 10 or 8 at \_Start->Windows System->Command Prompt\_.
* For Windows 7, Vista or XP at \_Start->All Programs->Accessories->Command Prompt\_.
* For Mac OS at \_Applications->Utilities->Other->Terminal\_. Some Mac users prefer iTerm2, a replacement for Terminal, because it is slightly more user-friendly. You can find the details on the [iTerm official website](https://www.iterm2.com/downloads.html) and install it on your computer.
* For Linux: it depends on your system, but usually, the CLI is located at \_Applications->Accessories->Terminal\_ or at \_Applications->System->Terminal\_. If you don't find it here, just google how to access the command line on your system.

When you open it, you'll see a black (or white) window. If everything is okay, you'll see the **command prompt** where you'll be typing your command – an indicator that your computer is ready to accept commands. For Windows, the command prompt ends with `>`, while for Linux it's `$`, and for Mac OS it's `%`. To execute a command, type it and then press Enter.

##### Learning commands

It's time to learn some important commands. Let's open the command-line interpreter and type some commands. When you open it, you will see something similar to the below text.

```bash

C:\Users\name>

```

It means that you are in this directory and you can work in the CLI. Now let's try to use it.

Imagine you just woke up on the floor in a room unfamiliar to you. In fact, everything is unfamiliar to you, you don't remember anything, not even your name. There's only a computer with the open terminal and this guide, so you decide that it might be helpful to figure something out. So, now you will type your command next to this path.

First, type `whoami` and press \_Enter\_. Unfortunately, it won't provide you with a deep and satisfying answer about who you really are, but you will see something like this:

```bash

desktop-qd7c3ju\shanika

```

Good, now you know your name, an imaginary one, at least. As you could already guess, the `whoami` command just returns the username you used on your machine. That's why you see the above output.

Next, type `dir` if you use Windows or `ls` if you use Linux/macOS and press \_Enter\_. Both of these commands return the list of files and folders in your current directory. This is one of the most widely used commands by developers especially when they work on servers.

If you have Windows, you will see something similar to the image below.

![the output of the dir command](https://ucarecdn.com/7d86c81a-7896-42ed-8c88-1fe7e6e5aa01/)

There's no file that is helpful for your situation. Alas!

Isn't there a command to escape? Yes, there's one. Just type `exit` and you'll be out... of the command-line interpreter because this command lets you exit it. Good news, you've just learned some useful commands and completed the quest, Shanika! Now you can be free.

On the [SS64 website](https://ss64.com/), you can find a complete list of commands for [Windows](https://ss64.com/nt/), as well as for [Linux](https://ss64.com/bash/) and [macOS](https://ss64.com/osx/)

##### Conclusion

The important thing to know is that excellent GUIs haven't made the CLI obsolete. It is still one of the quickest ways to get your job done. Especially if you are going to be a developer, it is very important to have good knowledge of what commands are available to you.

In this topic, we introduced the command-line interface: what it is, where it can be found, and how it can be used. We tried several commands as well: `whoami`, `dir` or `ls`, and `exit`. Later, we will learn CLI commands in detail, but now let's practice for a while!

Suppose, you're writing a Java program. Different errors may occur during its compilation or execution. We will divide all possible errors into two groups: **compile-time errors** and **run-time errors**.

Let's look at cases where errors occur and how to avoid them.

##### Compile-time errors

Compile-time errors are errors that prevent a Java program from being compiled:

* a syntax error: an incorrect keyword, a forgotten `;` symbol at the end of a statement;
* a bad source code file name;
* invoking a non-existing method;
* and many others.

Consider an example of compile-time errors. The following program should output the string **"Hello!"** but it does not compile.

```java

public class MyClass {

public ztatic void main(String[] args) {

System.out.printn("Hello!");

}

}

```

There are two errors in this program:

* a typo in the keyword `static`;
* incorrect name of the method `println`.

If you fix these mistakes, it will be possible to compile this program.

To avoid such errors, programmers use a modern IDE (Integrated Development Environment) with a static code analyzer. This tool allows programmers to identify compile-time errors before the compilation. In addition, it is able to highlight warnings about more complex errors and weak places in your code, as well as tips on how to improve the code.

Over time, you will write code that contains fewer or even no compile-time errors.

##### Run-time errors

Run-time errors (also known as "bugs") are errors that occur when the program is running. Run-time errors will cause your program to behave unexpectedly or may even stop the execution.

There are two subtypes of run-time errors:

* **logic errors** – when a program produces a wrong result because the code is not correct (for example, instead of **"Hello!"**, your program outputs **"Hi!"**);
* **unhandled exceptional events** like division by zero, not found files, and other unexpected cases.

We will learn how to handle exceptional events (exceptions) in further lessons.

Avoiding such run-time errors is a more difficult task than avoiding compile-time errors. If your program compiles successfully, there are no guarantees that it does not have bugs. There are different strategies to find such errors:

* to **debug** your program;
* to write **automatic tests** for your program;
* to use the practice of **code review** as part of the development process. In general, this practice stands for a case, where one or more developers visually inspect the source code of a program.

##### Conclusion

* Compile-time errors happen when a program fails to compile. They include typos and incorrect method invocations.
* Static code analyzers in IDEs help to spot compile-time errors before program compilation.
* Run-time errors, or bugs, occur after compilation when a program is running. They may result in unexpected program behavior and crashes.
* Debugging is a useful instrument to identify run-time errors in your program.

[[37. What Is An Exception]]

Writing just one program involves a whole variety of tasks: you write the code, find and fix errors that inevitably arise, then the code has to be compiled, run, and documented. And guess what, all of this has to be done over and over again (well, that's just great). With small programs like **Hello World**, you can perform these tasks using a simple text editor to write your source code and a set of tools to translate and start the programs. Some text editors can even highlight the syntax, which simplifies the writing process, but this may not suffice for working on something larger and more complex.

As a professional developer, you need a specialized tool to navigate through your multiple-file programs, modify, compile, run, and debug them, display syntax errors, and so on. An **Integrated Development Environment (IDE)** is precisely that: it offers a single program in which developers can deal with all these common tasks.

##### Brief historical background

Most modern IDEs are graphical, though the first ones were used back in the era when no one dreamed of graphics. They were built on a text-based interface and could only be operated using function keys and hotkeys to invoke various functions. This was, for example, Turbo Pascal, created by Borland:

![Turbo Pascal IDE text-based interface](https://ucarecdn.com/caef137d-7e91-4b99-ac7a-3604ec73cb28/)

The first IDEs were designed to be operated via a console or terminal, which were new in themselves. Indeed, before that, programs were generally created on paper and entered into the machine using pre-prepared paper media such as punched cards or punched tapes.

Here are some specific historical examples. Dartmouth BASIC was the first language designed to run in a console or terminal. This ancient IDE was controlled by commands, not even using menus and hotkeys. However, it did allow you to edit source code, manage files, compile, debug, and run programs in a manner fundamentally similar to modern IDEs.

Then it was time for Maestro I. It was a product from Softlab Munich that was the world's first integrated development environment for software. Can you believe it held a leading position in its niche for almost twenty years? Today, though, Maestro I belongs to history.

As you see, humanity did not immediately come to multifunctional IDEs.

##### What is a modern IDE?

IDEs were created to maximize programmer productivity through tightly coupled components with simple user interfaces. This allows the developer to do fewer steps to switch between different modes, as opposed to discrete development programs. However, modern graphical IDEs are complex software packages. That means one can achieve the necessary acceleration of the work process only after training. Anyway, there are no big difficulties here either: many IDEs are quite interactive, and the interfaces of different manufacturers are often very similar, so it is not too hard to switch from one IDE to another.

There are a lot of IDEs for different programming languages. Some support only a single language, while others support multiple or can be extended with plugins. For instance, IDEs that support multiple languages are [IntelliJ IDEA](https://www.jetbrains.com/help/idea/installation-guide.html), [Eclipse](https://www.eclipse.org/downloads/packages/installer), [NetBeans](https://netbeans.apache.org/download/index.html), [Android Studio](https://developer.android.com/studio), and [Visual Studio Code](https://code.visualstudio.com/). IDEs for one specific programming language are [Delphi](https://www.embarcadero.com/products/delphi/starter/free-download/thank-you), [Dev-C++](https://sourceforge.net/projects/orwelldevcpp/), [IDLE for Python](https://en.wikipedia.org/wiki/IDLE), and [PyCharm](https://www.jetbrains.com/pycharm/download/#section=windows).

As an example, this is what the IntelliJ IDEA IDE looks like:

![Working on a project in the IntelliJ IDEA IDE](https://ucarecdn.com/d89df081-4394-4d6d-8393-e51ac8ac7c39/)

All of these environments can be run on Windows, macOS, or GNU/Linux.

##### IDE components

In general, the development environment includes:

* A **text editor**, which is designed to work with text files interactively. It allows you to view the contents of text files and perform various actions like inserting, deleting, and copying text, contextual search, replacement, sorting strings, viewing character codes and converting encodings, printing. They often contain additional functionality, such as syntax highlighting.
* A **translator (compiler and/or interpreter)**, which translates a text written in a programming language into machine code and does this either immediately before starting the program (compilation) or line by line (interpretation).
* **Build automation tools**, which get the code ready and put everything together.
* A **Debugger**, which looks for errors in the code and immediately reports them.

![Features provided by IDE](https://ucarecdn.com/2d6c0b56-cc75-4ec0-b4f2-90ab3e72f46a/)

By and large, using an IDE makes you a more productive developer because an IDE provides tight-knit components with a similar user interface. It also automates some routine tasks and even gives you advice and feedback. That's all because the purpose of the integrated environment is to combine various utilities into one product. This approach allows developers to focus on solving their core problems, while common and standard operations are taken care of by an IDE.

##### Conclusion

To sum up,

an IDE is a specialized tool that navigates through your multiple-file programs, modifies, compiles, runs, debugs them, and also displays syntax errors;

modern IDEs are graphical and interactive;

some IDEs support only a single language, while others support multiple languages.

[[41. JVM, JRE And JDK]]

How is it possible that there are thousands of computers which differ from one another, and yet they are able to run the same programs? Have you ever thought about how programs interact with the hardware? The answer is: we have **operating systems**.

##### Operating system

An operating system (OS) is a set of software that manages the communication between all other applications and hardware. It turns a computer into something more than just several metal parts, namely, a complex system that can perform different tasks effectively.

There are many operating systems. For personal computers, the most popular ones are Microsoft Windows, macOS, and Linux distributions. The two top mobile operating systems are Android and iOS. Even smart kettles and fridges have their own OS!

Of course, operating systems for such a range of devices are extremely diverse. What they have in common are the means they provide to the programs and to those who use them.

On the one hand, it's only an illusion that your favorite browser is the same on Windows as it is on macOS. On the other hand, you can run the same application on different computers with the same OS.

##### OS functions

An operating system controls the communication between the computer software and hardware. An OS can give programs restricted access to processor units, memory, hard drives, network, peripherals, and other resources.

You can run a browser, a media player, and ten other applications, and your OS is the one that allocates all the resources the applications need to run properly. At the same time, an OS acts as a fair referee and doesn't allow any application to use more resources than it actually needs.

As a mediator between the applications and hardware, an OS allows us to communicate with the device without going into details about its specifics or mechanics.

![operating system as a mediator between the applications and hardware](https://ucarecdn.com/192e16f1-427b-4b2d-815b-7f9c9d10e6f8/)

Any operating system has several essential functions. Here is a list of some of them:

* Data protection and secure access;
* Resource management;
* Interaction between hardware and peripherals;
* File management;
* Running other programs.

It is possible to distinguish more functions of modern operating systems, but those listed above are enough for starters.

##### OS components

The **kernel** is the mandatory and core part of all operating systems. Usually, it's one of the first programs that loads when you turn on your computer. It provides all the necessary means to run the programs you want.

When you start an OS, you often see the Graphical User Interface (GUI)**.** It is the interface that allows users to interact with the device using graphical icons and audio indicators. Another way to interact with the OS is to use commands in a text-based terminal known as the Command-Line Interface (CLI).

![operating system command-line interface](https://ucarecdn.com/701288a7-1d33-4712-84e6-87e171591e02/)

There are two types of kernels: **monolithic** and **microkernels**. A monolithic kernel is a large program that performs most of the OS functions. At the same time, a microkernel performs only a small subset of the operating system functions, but we can extend it with additional modules known as **drivers**.

There are other important parts of the operating system besides the kernel and the graphical user interface. For now, use the following image to brush up on everything we've covered so far:

![main functions and essential elements of operating systems](https://ucarecdn.com/28005216-bd94-4fe9-b422-b4f49e59f67d/)

##### Conclusion

An operating system efficiently distributes the resources of the computer in the way we've described above. It is critical to understand that without an operating system, it would not be possible to use the computer.

Now you know about the main functions of operating systems and their essential elements. Let's test what you've learned so far!

[[34. Comand Line Overview]]

JVM languages, such as Java, Kotlin, or Scala, may be confusing for beginners since there are a number of basic terms that might be hard to differentiate between at first. This topic will get you more familiar with development for Java Platform by introducing those basics and giving an overview of how the code is being treated by different components of the platform.

##### Java Virtual Machine (JVM)

The **Java Virtual Machine**, or **JVM**, is a virtual simulation of a physical computer. It executes the Java (or Java-compatible) bytecode, which comes after the source code compilation. In some sense, JVM acts as a mediator between the code and the real machine. It operates with a set of unified bytecode instructions that are interpreted and translated into machine instructions.

JVMs are available for many hardware and software platforms, so you can run the bytecode almost everywhere. A program compiled to bytecode is almost always platform-independent. Basically, when you have a JVM language code, you need to compile it only once, get the bytecode, and you'll be able to run it on any platform that has JVM.

Today there is a variety of JVM implementations, Java HotSpot Virtual Machine being the primary reference.

##### Java Runtime Environment (JRE)

**Java Runtime Environment**, or **JRE**, is an execution environment. It includes the necessary components for running compiled JVM programs: the JVM itself and the Java Class Library (JCL).

JCL is essentially a set of standard libraries providing the most common functionality: fundamental classes, input/output, math package, collections, security, user interface toolkits, and many others. You can utilize these libraries in your programs.

When you run a compiled program, JRE combines the program bytecode with necessary libraries and runs the JVM, which executes the resulting bytecode.

##### Java Development Kit (JDK)

**Java Development Kit**, or **JDK**, is a package to develop programs for the Java Platform. It includes JRE to run the programs and tools for developers: Java compiler, debugger, archiver, documentation generator, etc.

At the compilation stage, compilers translate source code into `.class` files that contain bytecode and can be executed by JVM. Note that if you're using JVM languages other than Java, you will need to download compilers separately, as they are not bundled with JDK.

In practice, programs often consist of multiple `.class` files packed together with an archiver tool into a single Java Archive (JAR file). JRE can run the program packed into a JAR directly without extracting the archived files. The resulting file is more convenient to store and share over the network since the data is compressed.

Before Java 11, if you wanted only to run a Java program, JRE was enough for you. However, since Java 11 was released, for most JVM implementations JRE is no longer downloadable as a separate component. If you want to run programs in JVM 11 or newer, you have to install JDK.

##### The relationship between JVM, JRE, and JDK

The following image illustrates the relationship between JVM, JRE, and JDK:

![JDK JRE components](https://ucarecdn.com/33aad287-2450-4386-8639-42c7a7eac874/)

##### Summary

* Java Virtual Machine executes compiled bytecode.
* Java Runtime Environment includes JVM and standard libraries and runs compiled programs.
* Java Development Kit, which includes JRE and development tools, is used by developers to write programs.

[[42. Running Programs on Computers]]
##### What is NPE
Java provides a special type of value called `null` to indicate that no actual value is assigned to a reference variable. This value may cause one of the most frequent exceptions called `NullPointerException` (often referred to as **NPE** for short). It occurs when a program attempts to use a variable with the `null` value. To avoid an **NPE**, the programmer must ensure that the objects are initialized before their use.

Here is one interesting fact about the concept of a `null` reference and errors associated with it. Not only is it not unique for Java, but in 2009, Tony Hoare, a British Computer Scientist who invented the concept of `null` reference, described it as a **"billion-dollar mistake"**:

I call it my billion-dollar mistake. It was the invention of the null reference in 1965. At that time, I was designing the first comprehensive type system for references in an object-oriented language ([ALGOL W](https://en.wikipedia.org/wiki/ALGOL_W)). My goal was to ensure that all use of references should be absolutely safe, with checking performed automatically by the compiler. But I couldn't resist the temptation to put in a null reference, simply because it was so easy to implement. This has led to innumerable errors, vulnerabilities, and system crashes, which have probably caused a billion dollars of pain and damage in the last forty years.

Let's look at some situations where an **NPE** might occur and find out how to avoid it.
##### NPE when invoking a method
Since `String` is a regular reference type, its variables can be `null`. If we invoke a method or apply an operation to such a variable, the code throws an **NPE**.

In the following code, an uninitialized variable of `String` is created and then the method `length()` is invoked. The code throws an **NPE** because the object `someString` is actually `null`.
``` java
String someString = null; // a reference type can be null

int size = someString.length(); // NullPointerException (NPE)
```

The same exception will occur if we use uninitialized variables of any other reference type, not only `String`.

To avoid the exception we should explicitly check whether a string is `null` or not and depending on the result perform different code. It's similar to the default value.
``` java
int size = someString != null ? someString.length() : 0; // if the string is null, the size is 0
```

In the code above, when the given string is `null`, the size is set as 0. This way we won't get any exceptions.
##### Comparing strings
A very common situation occurs when we try to compare a `String` variable and a string literal.
``` java
String str = null;

if (str.equals("abc")) { // it throws an NPE
    System.out.println("The same");
}
```

To avoid an **NPE** here we can use Yoda notation and call the equals method on the literal rather than the object:
``` java
String str = null;

if ("abc".equals(str)) { // no NPE here
    System.out.println("The same");
}
```

But what if we have two variables of the type `String`? Any of them may happen to be `null`. In this case, we can use the special auxiliary class `java.util.Objects`.
``` java
String s1 = null;
String s2 = null;
        
if (Objects.equals(s1, s2)) { // no NPE here
    System.out.println("Strings are the same");
}
```

This approach is recommended in modern Java programming since it is easy to read and does not throw an **NPE**.
##### Rules for avoiding NPE
We've considered a few cases in which an **NPE** may occur. Actually, there are more such situations, and we will consider them in the next topics.

Here are several general rules on how to avoid an **NPE** in your programs:

- for reference types, use a conditional statement to check whether the given variable is `null` before using it;
- try to avoid assigning `null` to variables whenever possible;
- use NPE-safe features from the standard library.

These simple rules will help to reduce the number of places in your code that could throw this exception.
##### Conclusion
You may face an NPE if you are trying to invoke a method or apply an operation to a variable with a null value. For example, if you use uninitialized variables of String type or other reference types.

Besides, this exception may occur when we compare a String variable and a string literal. In this case, we should call the `equals` method on the literal. There is also a special auxiliary class `java.util.Objects` that we use to compare two variables of the String type.

Follow simple rules: don't assign null to a variable or make sure that the given one is not null, use NPE-safe features.

[[39. Parameters And Options]]

We hope that you already know how to open the command-line interpreter and run some basic commands. Now, let's take a step further and learn how to expand the functionality of the commands and how to get more information about them.

##### Commands with parameters

Sometimes, using just one command is not enough. Let's take a look at the command `mkdir`, which is used to create a new folder in the current directory. If you try to use it as it is, you will get an error. The terminal needs to know how to name a new folder! That's where parameters come in handy. A **parameter** is some additional information that you give to the command. Simply put, parameters are variables that commands can take.

Now, type the command `mkdir` with a parameter `papers`. We use this command to create a folder named \_papers\_:

```bash

C:\users\student> mkdir papers

```

Although the current directory stays the same, if you follow this path, you will see that the new folder \_papers\_ was created in the \_student\_ directory.

All examples in this topic are for Windows OS, but the listed commands are relevant for Linux and macOS too. Note that the path separator on Windows is a backslash, but in Linux/macOS it's a forward slash.

Now let's change our location and go to the folder you've just created! Use the `cd` command with the path to the \_papers\_ folder as a parameter.

```bash

C:\users\student> cd C:\users\student\papers

C:\users\student\papers>

```

Another useful parameter of the `cd` command is `..`. It allows you to go to the **parent directory**, the directory one level above the current one.

```bash

C:\users\student\papers> cd ..

C:\users\student>

```

You can also go back to the **root folder**, a top-level directory in the file system. To go back to the root directory, you can use the`/`parameter:

```bash

C:\users\student> cd /

C:\

```

Thanks to commands and parameters, it seems like we are back to the roots! Actually, without parameters, most commands would be useless.

##### Options

If you google anything about commands and a terminal, you'll encounter the term **options**. Don't be afraid of it! Let's briefly explore what it means.

**Options**, as the name suggests, are usually optional and are used to somehow change the common behavior of the command. If you use Windows and are already sick and tired of exploring the current drive, you can change it by adding the `/d` option to `cd`. Don't forget to set the path you want to follow as the parameter, for example, `F:\Codepen snippets`:

```bash

C:\users\student\Desktop> cd /d F:\Codepen snippets

F:\Codepen snippets>

```

Now you see that with options and parameters, you can transform a simple command into something complicated.

To sum up: what are options and parameters? Both of them are just two particular types of arguments. While an **option** changes the behavior of a command, a **parameter** is used to assign information to either a command or one of its options. One of the key differences between them is that the number of possible values in options is limited and locked in the code, while with parameters users have more freedom as they don't have such limitations.

##### Help Manual

No one can remember all the existing commands, options, and parameters. Don't worry about that. The `help` command is there for you. Type it in Windows, and you will get a list of commands available to you.

For Linux and macOS, the way to get information about the commands depends on the shell you use. The simplest way for Linux is the `--help` flag. There is also the `man` command, short for \_manual\_. You can use the `man` command in Linux similar to the help command in Windows: `help mkdir`.

That's not all. The `help` command can take any command as a parameter and return all the available options. Let's try. We will use the simplest command we've learned so far, the `cd` command.

```bash

C:\users\student> help cd

Displays the name of or changes the current directory.

CD [/D] [drive:][path]

CD [..]

..  Specifies that you want to change to the parent directory.

Type CD drive: to display the current directory in the specified drive.

Type CD without parameters to display the current drive and directory.

Use the /D switch to change the current drive in addition to changing the current directory for a drive.

<...>

```

As you can see, these are all the details you need to know about the `cd` command. We call this description the **help manual**.

Let's discuss what the help manual includes. First, it states what the command is supposed to do. For the `cd` command, it reads, \_"Displays the name of or changes the current directory".\_ Then it returns all the combinations of that command along with all possible parameters that you can use. You can also notice that on Windows, commands are case-insensitive, unlike on Linux and macOS. Let's look at the example from the manual:

```bash

CD [/D] [drive:][path]

```

So, the above command has three parts. `CD` is the command name. `[/D]` is an option, and `[drive:][path]` a parameter. You might wonder what these `[]` brackets mean. Well, they are just \_notations,\_ which means that the parameters are optional to the commands. You shouldn't add these brackets when you use commands.

You can read [this article](https://www.lifewire.com/how-to-read-command-syntax-2618082) for Windows or the manual for the [cat command](https://www.hscripts.com/tutorials/linux-commands/cat.html) on Linux/macOS to learn more about the command-line syntax and look through the examples.

##### Conclusion

Let's summarize what you've learned so far:

* You can use options and parameters to extend the functionality of commands.
* You can pass different values with the parameters.
* You can get a full list of commands using the `help` and `man` commands.
* You can open a help manual for a command by typing `help [command_name]` or `man [command_name]`. This manual explains how to use a command properly and what options and parameters it has, if any.

Although you may feel that using these commands would slow down developers' work and that they are less efficient, we would still urge you to try them out. You have to get used to these commands as early as possible. Once you get accustomed to working with them, you will find that using them is much easier than resorting to the GUI on many occasions.

[[40. IDE]]

In this topic, we will discuss one of the most famous operations in programming: **increment**. It is used in many programming languages, including Java, to increase a variable by one. Fun fact: the name of C++ programming language is a reference to this operation, signifying the evolutionary nature of the changes from C.
##### Using ++ and -- in Java
Java has two opposite operations called **increment** (`++`) and **decrement** (`--`), which increase or decrease the value of a variable by one.
``` java
int n = 10;
n++; // 11
n--; // 10
```

The code above is equivalent to the code below.
``` java
int n = 10;
n += 1; // 11
n -= 1; // 10
```
##### Prefix and postfix forms
Both increment and decrement operators have two forms, which are very important when using the result in the current statement:

- the **prefix** form (`++n` or `--n`) increases or decreases the value of a variable before it is used;
- the **postfix** form (`n++` or `n--`) increases or decreases the value of a variable after it is used.

The following examples demonstrate both forms of increment.

**Prefix increment:**
``` java
int a = 4;
int b = ++a;

System.out.println(a); // 5
System.out.println(b); // 5
```

In this case, the value of `a` has been incremented and then assigned to `b`. So, `b` is 5.

**Postfix increment:**
``` java
int a = 4;
int b = a++;

System.out.println(a); // 5
System.out.println(b); // 4
```

In Java, the postfix operator has higher precedence than the assignment operator. However, it returns the original value of `a`, not the incremented one. That's why when we assign `a++` to `b`, we actually assign 4, and then variable `a` is incremented. So, `b` is 4 and `a` is 5.

If that's still not clear enough for you, take a look at the code:
``` java
int a = 4;
System.out.println(a++ + a); // this is 9
```

We hope that now you fully understand the increment and decrement operations and their prefix and postfix forms.
##### Conclusion
Congratulations, you've just learned the fundamental operations in Java: increment (++) and decrement (--). These operations can be used in two forms: prefix (++n or --n), which modifies the value before its use in a statement, and postfix (n++ or n--), which modifies it after. Grasping these operations is vital due to their widespread use in many aspects of programming.

Java provides several types which represent integer numbers including positive, negative, and zero. In practice, the most used types are `int` and `long`. The first type can store numbers from a smaller range than the second one, but it is often enough (especially, in this topic). You can perform all arithmetic operations (`+`, `-`, `*`, `/`, `%`) with variables of integer types.
##### Integer types: the basics
Let's look at some examples below.
``` java
int two = 2;
int ten = 10;

int twelve = two + ten; // 12
int eight = ten - two;  // 8
int twenty = two * ten; // 20
int five = ten / two;   // 5
int zero = ten % two;   // 0, no remainder

int minusTwo = -two; // -2
```

This code demonstrates how to assign values to int variables as well as how to perform arithmetic operations with them.

To improve the readability of your code, the special underscore character `_` can be used to separate groups of digits within a number.
``` java
int million = 1_000_000;
```

You may also print a value of an `int` variable:
``` java
int number = 100;
System.out.println(number); // 100
```

All arithmetic operations work with the `long` type as well.
``` java
long one = 1L;
long twentyTwo = 22L; // L or l is a literal for longs
long bigNumber = 100_000_000_000L;

long result = bigNumber + twentyTwo - one; 
System.out.println(result); // 100000000021
```

If a number ends with the letter `L` or `l`, it is considered as `long`, otherwise, it is `int`. We recommend that you use the uppercase letter `L` because the lower case letter `l` is very similar to the digit `1`.

Use `long` numbers only if it is really necessary (when you deal with numbers larger than two billion). In other situations, prefer `int` numbers.
##### The forms of the assignment operator
Suppose you want to add some value to a variable. You may write something like this:
``` java
int n = 10;
n = n + 4; // 14
```

The assignment operator `=` has several forms which combine it with an operation to avoid repeating the variable:
``` java
int n = 10;
n += 4; // 14
```

As you can see, this form looks more concise. There are a few other possible forms such as `*=`, `/=`, `%=`.
##### Reading numbers from the standard input
As a rule, to solve a problem you need to read some data from the outside world, process it, and output the result. The following program reads two numbers from the standard input, adds them, and prints the sum.
``` java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        int sum = a + b;

        System.out.println(sum);
    }
}
```

This simple code uses `Scanner` to read data.

If we know that the input numbers can be quite large, we can read `long`s instead of `int`s:
``` java
long a = scanner.nextLong();
long b = scanner.nextLong();

long sum = a + b;
```

See? No more lines need to be changed in this code.
##### Conclusion
In this topic, you learned about using integer types `int` and `long` to perform various arithmetic operations. Now you have enough knowledge to write useful programs that process data. You may use the template above for solving this topic's code challenges. Try to give meaningful names to variables when solving problems.
#int

[[12. The While and Do-While Loops]]
##### List of #relational-operators
Java provides six relational operators to compare numbers:

- `==` (equal to)
- `!=` (not equal to)
- `>` (greater than)
- `>=` (greater than or equal to)
- `<` (less than)
- `<=` (less than or equal to)

The result of applying a relational operator to its operands will be boolean (`true` or `false`) regardless of the types of operands.
##### Comparing integer numbers
Relational operators allow you to easily compare, among other things, two integer numbers. Here are some examples:
``` java
int one = 1;
int two = 2;
int three = 3;
int four = 4;

boolean oneIsOne = one == one; // true

boolean res1 = two <= three; // true
boolean res2 = two != four;  // true
boolean res3 = two > four;   // false
boolean res4 = one == three; // false
```

Relational operators can be used in mixed expressions together with arithmetic operators. In such expressions, relational operators have lower priorities than arithmetic operators.

In the following example, first of all, two sums are calculated, and then they are compared using the operator `>`.
``` java
int number = 1000;
boolean result = number + 10 > number + 9; // 1010 > 1009 is true
```

The `result` is `true`.
##### Joining relational operations using logical operators
In Java, you cannot write an expression like **a <= b <= c**. Instead, you should join two boolean expressions using logical operators like `||` and `&&`.

Here is an example:
``` java
number > 100 && number < 200; // it means 100 < number < 200 
```

Also, we can write parts of the expression in parentheses to improve readability:
``` java
(number > 100) && (number < 200);
```

But parentheses are not necessary here because relational operators have a higher priority than logical operators.

Here is a more general example of variables.
``` java
int number = ...             // it has a value
int low = 100, high = 200;   // borders

boolean inRange = number > low && number < high;  // joining two expressions using AND.
```

The code checks if the value of `number` belongs to a range.

So, logical operators allow you to join a sequence of relational operations into one expression.
##### An example of a program
Suppose there are three children in the sports class. You want to check if their heights are arranged in descending order. The following program reads three integer numbers `h1`, `h2`, and `h3` and then checks if `h1 >= h2` and `h2 >= h3`. Note that **h** means **the height of a child**.
``` java
import java.util.Scanner;

public class CheckDescOrder {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int h1 = scanner.nextInt();
        int h2 = scanner.nextInt();
        int h3 = scanner.nextInt();

        boolean descOrdered = (h1 >= h2) && (h2 >= h3);

        System.out.println(descOrdered);
    }
}
```

Here are several input-output pairs:

**Input 1**
``` java
185 178 172
```

**Output 1**
``` java
true
```

**Input 2**
``` java
181 184 177
```

**Output 2**
``` java
false
```

It is possible not to use an additional variable to store the [[boolean]] result before output:
``` java
System.out.println((h1 >= h2) && (h2 >= h3));
```

But when your condition is quite long, it is hard to understand what the code does without some explanations. A variable with a good name provides such an explanation.

[[9. Conditional Statement]]

Quite often you may need to assign different values to a variable depending on a certain condition. You may do it conveniently with the help of the **ternary operator**.

##### What is the ternary operator?

The ternary operator is an operator which evaluates a condition and chooses one of two cases to execute. It is also called the **conditional operator**. The operator can be considered as a form of the `if`-then-`else` statement. The ternary operator should not be confused with the conditional statement, despite their similarity. This operator can be used in places where an expression is expected.

Sometimes **the ternary operator** is more readable and concise than the corresponding **if statement**.

Let's start learning this operator with an example. Suppose we have to find the maximum of two int variables, `a` and `b`. It is easy to write using a conditional statement:

```java

int a = ...;

int b = ...;

int max = ...;

if (a > b) {

max = a;

} else {

max = b;

}

```

Here is what an equivalent ternary operator looks like:

```java

int max = a > b ? a : b;

```

This code is more concise than the code above, isn't it?

The general syntax of the ternary operator is the following:

```java

result = condition ? trueCase : elseCase;

```

It includes two special symbols `?` and `:`.

Here, the `condition` is a Boolean expression that evaluates to either `true` or `false`. If this expression is `true`, the ternary operator evaluates `trueCase`, otherwise `elseCase` is evaluated. It is important that `trueCase` and `elseCase` are expressions which can be reduced to a common type. This type determines the type of the `result`.

##### Usage example

Let's consider another example that prints whether a number is even or odd.

```java

int num = ...;  // it's initialized by a value

System.out.println(num % 2 == 0 ? "even" : "odd");

```

This ternary operator consists of three operands: the value of the expression `num % 2 == 0`, and two string literals `"even"` and `"odd"`. Its result type is `String`.

Note: Java allows us to nest one ternary operator into another one, but it can be less readable than the corresponding conditional statement. If you do this, be careful.

Imagine you need to compare two integer numbers and print `equal` in case they are equal, `more` if the first one has a bigger value than the second and `less` otherwise. The task can be solved using a combination of 2 ternary operators:

```java

int a = ...; // it's initialized by a value

int b = ...; // it's initialized by a value

String result = a == b ? "equal" :

a > b ? "more" : "less";

```

At first, the outer ternary operator checks equality of `a` and `b` numbers. If it is true, `equal` is printed, otherwise, the nested ternary operator `a > b ? "more" : "less"` is calculated. To improve readability, the whole expression is divided into two lines.

#ternary-operations

[[11. Increment and Decrement]]
##### The Hello World program
Here is the Java code of this program:
``` java
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
} 
```

You can type this code in the **Your Code** section [here](https://www.jdoodle.com/online-java-compiler) and then press the **execute** button. In the **result** section, you will see:
``` java
Hello, World!
```

If you have already installed Java, you can run the program on your computer. If not, there is no need to install it right now. We will do that later.
##### The basic terminology
Now that you have seen the result, let's learn some basic terminology and then try to understand this program.

- **Program** – a sequence of instructions (called statements), which are executed one after another in a predictable manner. Sequential flow is the most common and straightforward sequence of statements, in which statements are executed in the order that they are written – from top to bottom in a sequential manner;
- **Statement** – a single action (like print a text) terminated by semi-colon (`;`);
- **Block** – a group of zero, one or more statements enclosed by a pair of braces `{...}`; There are two such blocks in the program above.
- **Method** – a sequence of statements that represents a high-level operation (also known as subprogram or procedure).
- **Syntax** – a set of rules that define how a program needs to be written in order to be valid; Java has its own specific syntax that we will learn;
- **Keyword** – a word that has a special meaning in the programming language (`public`, `class`, and many others). These words cannot be used as variable names for your own program;
- **Identifier or name** – a word that refers to something in a program (such as a variable or a function name);
- **Comment** – a textual explanation of what the code does. Java comments start with `//`.
- **Whitespace** – all characters that are not visible (space, tab, newline, etc.).
##### The Hello World program under a microscope
The **Hello World** program illustrates the basic elements of Java programs. For now, we will discuss only the most important elements.

**The public class.** It is the basic unit of a program. Every Java program must have at least one class. The definition of a class consists of the `class` keyword followed by the class name. A class can have any name, such as `App`, `Main`, or `Program`, but it must not start with a digit. A set of braces `{...}` encloses the body of a class.
``` java
public class Main {
    // ...
}
```

The text after `//` is just a comment, not a part of the program. We will learn about comments in detail in later topics.

**2. The main method.** To make the program runnable, we put a method named `main` inside a class. It is the entry point for a Java program. Again, the braces `{...}` enclose the body of the method, which contains programming statements.
``` java
public static void main(String[] args) {
    // statements go here
}
```

The keywords `public`, `static`, and `void` will be discussed later, so just remember them for now. The name of this method (`main`) is predefined and should always be the same. Capitalization matters: if you name your first method like **Main**, **MAIN** or something else, the program cannot start.

The element `String[] args` represents a sequence of arguments passed to the program from the outside world. Don't worry about them right now.

**3. Printing "Hello, world!"**. The body of the method consists of programming statements that determine what the program should do after starting. Our program prints the string **"Hello, World!"** using the following statement:
``` java
System.out.println("Hello, World!"); //  each statement has to end with ;
```

This is one of the most important things to understand from the **Hello World** program. We invoke a special method `println` to display a string followed by a new line on the screen. We will often use this approach to print something of interest to the screen. The text is printed without double quotes.

It is important that **"Hello, World!"** is not a keyword or an identifier; it is just a text to be printed.

[[1. Scanning Input]]

Sometimes we need to repeat a block of code a certain number of times. To do this, Java provides the `for`-loop. This loop is often used to iterate over a range of values or through an array. If the number of iterations or the range borders are known, it is recommended to use the `for`-loop. If they are unknown, the `while`-loop may be the preferable solution.
##### The basic #for-loop syntax
The `for`-loop has the following basic syntax:
``` java
for (initialization; condition; modification) {
    // do something
} 
```

Parts of the loop:

- the **initialization statement** is executed once before the loop begins; usually, loop variables are initialized here;
- the **condition** is a Boolean expression that determines the need for the next iteration; if it's `false`, the loop terminates;
- the **modification** is a statement that changes the value of the loop variables; it is invoked after each iteration of the loop; usually, it uses **increment or** **decrement** to modify the loop's variable.

Inside the loop's body, the program can perform any correct Java statements. It can even contain other loops.

The order of execution for any for-loop is always the same:

- the initialization statement;
- if the condition is `false` then terminate the loop;
- if the condition is `true`, then the loop's body is executed;
- the modification is performed;
- go to stage 2 (condition).

Let's write a loop for printing integer numbers from 0 to 9 on the same line.
``` java
int n = 9;
for (int i = 0; i <= n; i++) {
    System.out.print(i + " "); // here, a space is used to separate numbers
}
```

The code displays:
``` java
0 1 2 3 4 5 6 7 8 9 
```

The variables declared in the initialization statement are visible only inside the scope that includes all parts of the loop: the condition, the body, and the modification. The integer loop variables are often named `i`, `j`, `k`, or `index`.

Here’s another example. Let's calculate the sum of the integer numbers from 1 to 10 (inclusive) using the for-loop.
``` java
int startIncl = 1, endExcl = 11;

int sum = 0;
for (int i = startIncl; i < endExcl; i++) {
    sum += i;
}

System.out.println(sum); // it prints "55"
```
##### Skipping parts
The initialization statement, the condition, and the modification parts are optional, the for loop might not have all of them.

It is possible to declare a variable outside the loop:
``` java
int i = 10;
for (; i > 0; i--) {
    System.out.print(i + " ");
}
```

Moreover, it is also possible to write an infinite loop without these parts at all:
``` java
for (;;) {
    // do something
}
```
##### #Nested-loops
It's possible to nest one for-loop in another for-loop. This approach is used to process multidimensional structures like tables (matrices), data cubes, and so on.

As an example, the following code prints the multiplication table of numbers from 1 to 9 (inclusive).
``` java
for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
        System.out.print(i * j + "\t");
    }
    System.out.println();
}
```

It outputs:
``` java
1   2   3   4   5   6   7   8   9  
2   4   6   8   10  12  14  16  18  
3   6   9   12  15  18  21  24  27  
4   8   12  16  20  24  28  32  36  
5   10  15  20  25  30  35  40  45  
6   12  18  24  30  36  42  48  54  
7   14  21  28  35  42  49  56  63  
8   16  24  32  40  48  56  64  72  
9   18  27  36  45  54  63  72  81 
```

[[19. Calling a Method]]

There are a number of approaches to repeating a fragment of the code while a certain condition is `true`. In this lesson, we will learn how to do it by using two kinds of loops. They differ in the order of the repeated fragment execution and condition evaluation.

##### The #while loop

The **while** loop consists of a block of code and a condition (a Boolean expression). If the condition is `true`, the code within the block is executed. This code repeats until the condition becomes `false`. Since this loop checks the condition before the block is executed, the control structure is also known as a **pre-test loop**. You can think of the **while** loop as a repetitive conditional statement.

The basic syntax of the **while** loop is the following:

```java

while (condition) {

// body: do something repetitive

}

```

A loop's body can contain any correct Java statements, including conditional statements and even other loops, the latter being called nested loops.

It is also possible to write an **infinite loop** if the condition is invariably `true`:

```java

while (true) {

// body: do something indefinitely

}

```

The application of infinite loops will be considered in the following topics.

**Example 1.** The following loop prints integer numbers while a variable is less than 5.

```java

int i = 0;

while (i < 5) {

System.out.println(i);

i++;

}

// next statement

```

Let's explain how this loop works. First, the value 0 is assigned to the variable `i`. Before the first execution of the loop's body, the program checks if the condition `i < 5` is true. In our case, `i` is 0, so the condition is true and the body of the loop starts executing. The body has two statements: displaying the current value of `i` and incrementing it by 1. After this is done, the expression `i < 5` is evaluated again. Now `i` equals 1, so the condition is still `true`, and the loop's body is repeated again. This is repeated until `i` has taken the value 5, after which the expression `i < 5` ceases to be `true`, and the execution of this loop terminates. The program proceeds to the next statement after the loop.

**The output:**

```java

0

1

2

3

4

```

Note that the last value of `i`, that is 5, is not printed.

**Example 2.** The following program displays English letters in a single line.

```java

public class WhileDemo {

public static void main(String[] args) {

char letter = 'A';

while (letter <= 'Z') {

System.out.print(letter);

letter++;

}

}

}

```

The program takes the first letter `'A'` and then goes on like this:

- if the `letter` is less than or equal to `'Z'` the program goes to the loop's body;
- inside the body, it prints the current character and `letter` takes the next alphabet letter.

The program prints:

```java

ABCDEFGHIJKLMNOPQRSTUVWXYZ

```

Remember that it is possible to get the next character according to the Unicode table by using the increment operator. After the code execution, the `letter` will equal `[`.

##### The #do-while loop

In the **do-while** loop, the body is executed first, while the condition is tested afterwards. If the condition is `true`, statements within the block are executed again. This repeats until the condition becomes `false`. Because **do-while** loops check the condition after the block is executed, the control structure is often also known as a **post-test loop**. In contrast to the **while** loop, which tests the condition before the code within the block is executed, the **do-while** loop is an exit-condition loop. So, the code within the block is always executed at least once.

This loop contains three parts: the `do` keyword, a body, and `while(condition)`:

```java

do {

// body: do something

} while (condition);

```

A good example of using it is a program that reads data from the standard input until a user enters a certain number or string. The following program reads integer numbers from the standard input and displays them. If the number 0 is entered, the program prints it and then stops. The following example demonstrates the **do-while** loop:

```java

public class DoWhileDemo {

public static void main(String[] args) {

Scanner scanner = new Scanner(System.in);

int value;

do {

value = scanner.nextInt();

System.out.println(value);

} while (value != 0);

}

}

```

Input numbers:

```java

1. 2 4 0 3

```

The program prints:

```java

1

2

4

0

```

Note that like the **while** loop, the **do-while** loop can be infinite.

In practice, the **do-while** loop is used less than the **while** loop. It is used when code inside the loop must be executed at least once.

##### Reading a sequence with an unknown length

The `while` loop can also be used to read a sequence of characters of an arbitrary length. For that, we can invoke the `hasNextInt()` method of `Scanner` inside the condition. The method returns `true` if the next element is an integer number and `false` otherwise.

Here is a code that calculates the sum of all elements from the provided sequence:

```java

Scanner scanner = new Scanner(System.in);

int sum = 0;

while (scanner.hasNextInt()) {

int elem = scanner.nextInt();

sum += elem;

}

System.out.println(sum);

```

If the input sequence is `1 2 3`, the code prints `6`, if it is `5 18 9 23 4`, the code prints `59`.

As you see, the **while** loop can be used to solve different interesting tasks in your programs.

##### Conclusion

There are different ways to perform some fragments of your code several times. In this topic, we've discussed two alternative ways to use loops that are based on conditional statement evaluation. If you want to check the condition first and, based on the result, perform the operations or ignore them at all, the **while** loop is your choice. If you want to do one iteration of the loop in any case and then evaluate the condition for repetition, then choose **do-while**. Both types of loops can be used to read a sequence from the standard input: for **do-while**, you may use some stop value to terminate the loop, for **while**, use the `hasNext()` method to check that the input is over.

[[13. The For-Loop]]

In programming, a **variable** is a placeholder for storing a value of a particular **type:** a string, a number, or something else. In this topic, you will learn how to declare and use variables in Java programs.
##### Declaring and initializing
Every variable has a **name** (also known as **an identifier)** to distinguish it from others. Before you start using a variable, you must declare it. The general form of declaration is the following:
``` java
DataType variableName = initialization;
```

The left part of this statement describes the variable, and the right part describes something that is assigned to it.

- The **type (**or **data type)** of a variable determines what possible operations can be performed on the variable and which values can be stored in it. Here we use a non-existing data type (**DataType**) to demonstrate the general form of declaration.
- The **name (**or **identifier)** distinguishes the variable from others. The name of a variable cannot start with a digit; it usually starts with a letter. Always try to choose meaningful and readable names for variables to make your code easy to understand.
- The **assignment** **operator** denoted as `=` is used to assign a single value or a result of an expression to a variable.
- The **initialization** is a value or a result of an expression that is assigned to the variable.

According to this declaration, we can declare a variable of the type **String** and assign the word **"java"** to it:
``` java
String language = "java";
```

We can also declare a variable of the type `int` to store an integer number:
``` java
int numberOfApples = 5;
```

The case in the name of a variable makes a difference: `language` is not the same as `Language`.

Variables can store not only strings and numbers, but also characters and other data types which we will learn about later in the next topics.
##### Accessing the value of a variable
Once a variable has been declared, its value can be accessed and modified using the name. In the example below, we declare a variable and then print it:
``` java
String dayOfWeek = "Monday";
System.out.println(dayOfWeek); // Monday
```

It is also possible to assign a value of one variable to another one:
``` java
int one = 1;
int num = one;
System.out.println(num); // 1
```

One important feature of variables is that they can be changed. You don't need to declare a variable again to change its value; just assign a new value to it using the `=` operator.

Let's declare a variable named `dayOfWeek` and print its value before and after changing:
``` java
String dayOfWeek = "Monday";
System.out.println(dayOfWeek); // Monday

dayOfWeek = "Tuesday";
System.out.println(dayOfWeek); // Tuesday
```

There is one restriction for variables: you can only assign a value of the same type as the type of the initial variable. So, the following code is not correct:
``` java
int number = 10;
number = 11; // ok
number = "twelve"; // it does not work!
```
##### Alternative forms of declaration
There are several alternative forms of declaration which are less commonly used in practice. Here are several of them in particular examples.

- Declaring several variables of the same type as a single statement:
``` java
String language = "java", version = "8 or newer";
```

- Separating declaration and initialization into statements:
``` java
int age; // declaration
age = 35; // initialization 
```

However, as we have already noted, these forms are rarely used.
##### Type inference
Since Java 10, you can write **var** instead of a specific type to force automatic type inference based on the type of assigned value:
``` java
var variableName = initialization;
```

Here are two examples below:
``` java
var language = "Java"; // String
var version = 10; // int
```

This feature can be a bit controversial: on the one hand, it allows your code to be more concise. On the other hand, since it doesn't indicate the type explicitly, it may affect the code readability in a bad way. For now, it's enough to understand the basic idea. We will not use type inference in our theory so that our educational platform is suitable for people who use earlier versions of Java. But if you would like to practice it, you may use type inference in our exercises as they fully support Java 10.

[[4. Comments]]

Programmers write computer programs to get some practical results. In order to get the result, you need to write code and compile and run it. In this topic, you will learn how to compile and run the simplest \\*\\*Hello World\\*\\* program on your computer.

##### Installing Java on your computer

Before compiling and running any Java code, you need to install a \\*\\*JDK\\*\\* to develop Java applications. Please, [download the up-to-date Java version](https://www.oracle.com/java/technologies/downloads/). Our projects now support Java 17. Just follow the installation instructions given for your operating system.

To check that the installation has been completed, let's check the version of Java by typing the following command in a terminal:

```java

java -version

```

It outputs the version of Java that is installed on your computer. If it does not work correctly, open the installation instructions and try to set the `path` variable in your operating system.

If you get stuck with Java not being recognizable, [try to watch this video](https://www.youtube.com/watch?v=7zIvAxaRy\\_U).

##### Writing a program

Let's write a simple program and then start it on your computer. To do that, we will use a terminal.

\\*\\*Step 1.\\*\\* Create a file named `Main.java` using any text editor (such as TextPad or NotePad++ for Windows; jEdit or gedit for Mac OS X; gedit for Ubuntu; or something else) and save it in a folder.

\\*\\*Step 2.\\*\\* Paste the following source code into this file:

```java

public class Main {

public static void main(String[] args) {

System.out.println("Hello, Java");

}

}

```

The public class name must be the same as the file name.

Note we assume you already understand how the \\*\\*Hello World\\*\\* program works. If not, see [here](https://hyperskill.org/learn/lesson/67844/) and then come back.

##### Compiling and running a program

To run the program, we will use a terminal installed in your OS. All the following commands need to be executed from within the same folder that the `.java` file is created in.

\\*\\*Step 3.\\*\\* Compile the program using the following command in the terminal:

```java

javac Main.java

```

The `javac` command asks the compiler to translate the source code into bytecode. The result of this command is a file named `Main.class`.

\\*\\*Step 4.\\*\\* Run the compiled program (make sure that your terminal is open in the same directory as your source file):

```java

java -cp . Main

```

The `java` command starts a Java application. It does this by starting a JRE and invoking the main method inside the `Main` class.

The `-cp` parameter (\\_classpath\\_) specifies the location of user-defined classes and packages. The dot `.` means the current terminal directory. We will consider it in detail in the next topics.

Note: you should not specify the `.class` extension when running a program.

The program should output the following text:

```java

Hello, Java

```

Below is an animation that executes all these steps.

![Compiling and running a program](https://ucarecdn.com/a4678ea3-6d23-464e-bc65-54bab5c64a77/)

\\*\\*Congratulations!\\*\\* You have just started a simple program on your computer. Try to change this program if you would like to get more interesting results.

Since Java 11, it is possible to compile and run Java source code file using a single command `java Main.java`. It will compile the file in-memory, so it does not produce a `.class` file. Many developers don't know this small but interesting feature.

[[43. Introduction to OPP]]

Some errors in your code do not prevent the program from running. In this case, the program will only crash while trying to execute a "broken" line: a line with an error called an \\*\\*exception\\*\\*. Thus, exceptions are the errors detected during the program \\*\\*execution\\*\\* (at runtime), whereas syntax errors are those detected during \\*\\*compiling\\*\\* the program into byte-code. An exception interrupts the normal execution of a program.

Let's consider several kinds of exceptions and how to avoid them.

##### ArithmeticException

Suppose you are writing a program that reads two integers from the standard input and then outputs the result of the integer division of the first number by the second one. Look at the code below.

```java

import java.util.Scanner;

public class ArithmeticExceptionDemo {

public static void main(String[] args) {

Scanner scanner = new Scanner(System.in);

int a = scanner.nextInt();

int b = scanner.nextInt();

System.out.println(a / b); // an exception is possible here!

System.out.println("finished");

}

}

```

If the user passes `9` and `3` as the input values, the program outputs `3` as well as the `"finished"` string. But if the second number is `0`, the program throws an exception because of the division by zero.

```no-highlight

Exception in thread "main" java.lang.ArithmeticException: / by zero

at ArithmeticExceptionDemo.main(ArithmeticExceptionDemo.java:11)

```

As you can see, the program fails with an `ArithmeticException`, and the `"finished"` string is not printed at all. All the code \\*\\*before\\*\\* the exception is executed properly, and everything \\*\\*after\\*\\* is not.

The displayed message shows the cause of the exception (`"/ by zero"`), the file and the line number where it has occurred (`ArithmeticExceptionDemo.java:11`). The provided information is useful for developers, but it is not very meaningful for the end-users of the program.

To avoid the exception, we can check the value before the division, and, if the value is zero, print a message. Here is another version of the program. If the second number is zero, the program will print the "\\*\\*Division by zero!\\*\\*" string.

```java

import java.util.Scanner;

public class ArithmeticExceptionDemo {

public static void main(String[] args) {

Scanner scanner = new Scanner(System.in);

int a = scanner.nextInt();

int b = scanner.nextInt();

if (b == 0) {

System.out.println("Division by zero!");

} else {

System.out.println(a / b);

}

System.out.println("finished");

}

}

```

Look at some input examples. Let's start with non-zero integers:

```java

8 4

```

The program still works in the same way and the result is:

```java

2

finished

```

Now, if we try to input zero as a divider:

```java

3 0

```

The result is:

```java

Division by zero!

finished

```

As you can see, the new version of the program does not throw an exception and always successfully finishes. Additionally, it prints a user-friendly message instead of the standard message.

##### NumberFormatException

Another situation to consider is when you are trying to convert a string into an integer number. If the string has an unsuitable format, the code will throw an exception.

The following program reads a line from the standard input and then outputs the number that follows it.

```java

import java.util.Scanner;

public class NumberFormatExceptionDemo {

public static void main(String[] args) {

Scanner scanner = new Scanner(System.in);

String input = scanner.nextLine();

int number = Integer.parseInt(input); // an exception is possible here!

System.out.println(number + 1);

}

}

```

It works pretty well if the input line is a correct integer number. But if the input is not correct (e.g. `"121a"`), the program will fail:

```no-highlight

Exception in thread "main" java.lang.NumberFormatException: For input string: "121a"

at java.base/java.lang.NumberFormatException.forInputString(NumberFormatException.java:65)

at java.base/java.lang.Integer.parseInt(Integer.java:652)

at java.base/java.lang.Integer.parseInt(Integer.java:770)

at NumberFormatExceptionDemo.main(NumberFormatExceptionDemo.java:9)

```

This message displays the type of exception (`NumberFormatException`) and the passed input string. The place where the exception occurred is shown in the last line of the message:

* the filename is `NumberFormatExceptionDemo.java`;
* the `main` method;
* the line 9.

All the previous lines of the message show the positions inside the `parseInt` method that is part of the standard library.

To avoid this exception, it is possible to check the input string by using a regular expression. In case the input is not correct, we can output a warning message. The following program does this:

```java

import java.util.Scanner;

public class NumberFormatExceptionDemo {

public static void main(String[] args) {

Scanner scanner = new Scanner(System.in);

String input = scanner.nextLine();

if (input.matches("\\d+")) { // it checks if the input line contains only digits

int number = Integer.parseInt(input);

System.out.println(number + 1);

} else {

System.out.println("Incorrect number: " + input);

}

}

}

```

If the input line is "121a", the program will not stop, and it will print the message:

```java

Incorrect number: 121a

```

Don't worry if you don't know regular expressions yet. Just remember this trick.

If you have trouble understanding what an exception is, you can always copy-paste its name and google it. Moreover, you're strongly encouraged to do it, as 99% of troubles that learners encounter have already been solved on professional forums.

##### Conclusion

* Exceptions do not prevent a program from being compiled and run, but the program crashes as soon as the line with an exception is being executed.
* There are many types of exceptions.
* You can use control statements to avoid some kinds of exceptions (like `ArithmeticException` or `NumberFormatException`) in your programs.
* There is a general approach to handle exceptions and even throw them by yourself that you will learn in the next lesson.

[[38. NPE]]

When you need to process multiple objects of the same type, you can save them in an \\*\\*array\\*\\* and then process them together as a single unit. It is a very convenient approach if you know how many objects the program will process during runtime.

You may consider an array as a collection of elements of the same type. All elements are stored in the memory sequentially.

All elements in a collection are stored under the same name. The possible number of elements to be stored is established when the array is created and cannot be changed. But a stored element can be modified at any time.

##### Arrays in Java

The picture below illustrates an array of five floating-point numbers. Each element has an integer index (0-4) to be accessed.

![Arrays in Java](https://ucarecdn.com/9e6fb36e-293b-4fce-99e5-430e520d0783/)

The first element has an index of 0, and the last element has an index equal to \\*\\*array size minus 1\\*\\*.

In Java, an array has the following important features:

* an array is a reference type;

* all array elements are stored in the memory sequentially;

* each element of the array is accessed by its numerical index, the first element has the \\*\\*index 0\\*\\*;

* the last element is accessed by the index equal to \\*\\*array size – 1\\*\\*;

* it is possible to create an array to store elements of any type.


##### Declaration, instantiation, initialization

To create an array filled with elements we should:

* declare a variable of an array type \\*\\*(declaration);\\*\\*

* create an instance of the array object \\*\\*(instantiation)\\*\\*;

* initialize the array by some values \\*\\*(initialization)\\*\\*.


When we declare a variable, we define its type and name. Instantiation happens when memory is allocated for this object. Initializing the array object means that we put certain values of the array object into the memory of our program.

To declare an array, we must use two special characters \\*\\*[ ]\\*\\* after the type of elements in the array:

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

The size of an array cannot be greater than `Integer.MAX\\_VALUE`. Actually, it is even slightly smaller than this value.

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

Indexes of an array have numbers from \\*\\*0\\*\\* to \\*\\*length – 1\\*\\* inclusive.

Let's see an example.

```java

int[] numbers = new int[3]; // numbers: [0, 0, 0]

numbers[0] = 1; // numbers: [1, 0, 0]

numbers[1] = 2; // numbers: [1, 2, 0]

numbers[2] = numbers[0] + numbers[1]; // numbers: [1, 2, 3]

```

This code works as follows:

* In the first line, the array of integers named `numbers` with three elements in it is created. It is initialized with default values, which is 0 for the `int` type.

* In the second line, the value "1" is assigned to the very first element of the array by its index (do not forget, the first element has the index 0).

* In the third line, the value "2" is assigned to the second element of the array by its index (numbers[1] is the second element).

* In the last line, the sum of the first two elements is assigned to the third element by its index.


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

[[26. Arrays as Parameters]]

##### Passing arrays to methods

A method can have parameters of any types including arrays, strings, primitive types, and so on.

In the following example, the method `processArray` has a single parameter of the type `int[]`:

```java

public static void processArray(int[] array) { /\\* do something \\*/ }

```

In the body of the method\\*\\*,\\*\\* we can process the input array in any way.

A parameter of an array type looks like a primitive type parameter. But there is one important difference related to the fact that an array is a reference type.

When you pass a value of a primitive type to a method, a copy of the value is created. When you pass an array to a method, a copy of the reference is created, but the value is the same. It means that if you change the actual value (elements of an array) in the body of a method, you will see these changes outside the method.

The following method swaps the first and the last elements of its parameter (array).

```java

public static void swapFirstAndLastElements(int[] nums) { // nums is an array

if (nums.length < 1) {

return; // it returns nothing, i.e. just exits the method

}

int temp = nums[nums.length - 1]; // save the last element in a temporary local variable

nums[nums.length - 1] = nums[0];  // now, the last element becomes the first

nums[0] = temp;                   // now, the first element becomes the former last

}

```

Calling the method from the main method:

```java

public static void main(String[] args) {

int[] numbers = { 1, 2, 3, 4, 5 }; // numbers

System.out.println(Arrays.toString(numbers)); // before swapping

swapFirstAndLastElements(numbers); // swapping

System.out.println(Arrays.toString(numbers)); // after swapping

}

```

The output is:

```java

[1, 2, 3, 4, 5]

[5, 2, 3, 4, 1]

```

So, in the body of the main method, an array is visible as modified.

##### Varargs

It's possible to pass an arbitrary number of the same type of arguments to a method using a special syntax named \\*\\*varargs (variable-length arguments)\\*\\*. These arguments are specified by three dots after the type. In the body of the method, you can process this parameter as a regular array of the specified type.

The following method takes an integer \\*\\*vararg\\*\\* parameter and outputs the number of arguments in the standard output using the \\*\\*length\\*\\* property of arrays.

```java

public static void printNumberOfArguments(int... numbers) {

System.out.println(numbers.length);

}

```

As you can see, a special syntax `\\*\\*...\\*\\*` is used here to specify a \\*\\*vararg\\*\\* parameter.

Now, you can invoke the method by passing several integer numbers or an array of ints.

```java

printNumberOfArguments(1);

printNumberOfArguments(1, 2);

printNumberOfArguments(1, 2, 3);

printNumberOfArguments(new int[] { }); // no arguments here

printNumberOfArguments(new int[] { 1, 2 });

```

This code outputs:

```java

1

2

3

0

2

```

This example also demonstrates the difference between the arguments and parameters of a method. The method has only a single parameter but it can be called with several arguments.

##### Varargs and other parameters

If a method has more than one parameter, the `vararg` parameter must be the last one in the declaration of the method.

Here is an incorrect example:

```java

public static void method(double... varargs, int a) { /\\* do something \\*/ }

```

The correct version of the method is:

```java

public static void method(int a, double... varargs) { /\\* do something \\*/ }

```

[[32. Iterating Over Arrays]]

#big-o-notation is the mathematical notation that helps analyse the algorithms to get an idea about how they might perform as the input grows. The image below explains Big-O in a simple way without using any fancy terminology.

Tells how well an algorithm performs as the input size grows.

This growth affects ours algorithm in two way:

**Space Complexity**: Algorithm consumes more memory.

**Time Complexity**: Algorithm consumes more time.

Possible Complexities:

Linear Complexity: $O(n)$

Complexity grows linearly over time - higher the number of inputs, higher the complexity. Example: Looping over all the items of an array.

for (int i = 0; i < n; i++){

`	`//Do something

}

![[Linear Complexity.png]]

\-----

Quadratic Complexity: $O(n^2)$

Complexity squares the number of inputs

for (int i = 0; i < n; i++){

`	`for (int j = 0; j < n; j++){

`		`//Do something

`	`}

}

![[Quadratic Complexity.png]]

Constant Complexity: $O(1)$

No matter the input size, complexity remains the same. Example: accessing element at index from an array

int elem = numbers[3];

![[Constant Complexity.png]]

\-----

Exponential Complexity: $O(2^n)$

Complexity doubles with each addition to the input dataset. Example: looping over all possible combinations of an array.

public static int fibonacci(int n) {

`	`if (n == 0) {

`		`Return 0;

`	`} else if (n == 1) {

`		`return 1;

`	`} else {

`		`return fibonacci(n - 1) + fibonacci(n - 2)

`	`}

}

![[Exponential Complexity.png]]

Logarithmic Complexity: $O(log \ n)$

Complexity goes up linearly while the input goes up exponentially.

for (int i = 1; i <= n; i = i \\* 2){

`	`System.out.println("Hi");

}

![[Logarithmic Complexity.png]]

[[Best, average and worst cases]]

\\*\\*The binary numeral system\\*\\* or \\*\\*base-2 numeral system\\*\\* is a way of writing numbers using only two digits, 0 and 1. Each digit is referred to as a \\*\\*bit\\*\\* (\\*\\*bi\\*\\*nary digi\\*\\*t\\*\\*). These two digits are enough to represent any number. How is it possible? Let's find out.

##### Decimal vs Binary

In everyday life we use the \\*\\*decimal\\*\\* number system, or, simply put, we have 10 digits (0, 1, 2, 3, 4, 5, 6, 7, 8, 9). We don't think about it, but every number is represented as 1 ⋅⋅ one of the digits + 10 ⋅⋅ one of the digits + 100 ⋅⋅ one of the digits etc. (that is, every power of 10 multiplied by some digit).

Let's look at a number in the decimal system, for example, 4251. It is:

4⋅103+2⋅102+5⋅101+1⋅1004⋅103+2⋅102+5⋅101+1⋅100

So when we read this number, we just look at each digit starting from the last and multiply each digit by its corresponding power of 10: the rightmost is always 1, then goes 10, 100, 1000, and so on.

In the \\*\\*binary\\*\\* number system, we do exactly the same, except the base is 2, not 10. Let's look at a number in the binary system, for example, 1011.

1⋅23+0⋅22+1⋅21+1⋅201⋅23+0⋅22+1⋅21+1⋅20

##### Binary counting

In the decimal numerical system, we have exactly 10 digits (from 0 to 9) to represent any number. And you know how to count in decimal: 0, 1, 2, ..., 9, 10, 11, ..., 19, 20, and so on.

But how to count in the binary system? The table below shows it.

|   |   |   |

\|---|---|---|

|\\*\\*Decimal\\*\\*|\\*\\*Binary\\*\\*|\\*\\*Powers of two\\*\\*|

|00|00|0⋅200⋅20|

|11|11|1⋅201⋅20|

|22|1010|1⋅21+0⋅201⋅21+0⋅20|

|33|1111|1⋅21+1⋅201⋅21+1⋅20|

|44|100100|1⋅22+0⋅21+0⋅201⋅22+0⋅21+0⋅20|

|55|101101|1⋅22+0⋅21+1⋅201⋅22+0⋅21+1⋅20|

|66|110110|1⋅22+1⋅21+0⋅201⋅22+1⋅21+0⋅20|

|77|111111|1⋅22+1⋅21+1⋅201⋅22+1⋅21+1⋅20|

|88|10001000|1⋅23+0⋅22+0⋅21+0⋅201⋅23+0⋅22+0⋅21+0⋅20|

To understand why 5 equals to 101 in binary format, let's write the number in powers of two: 1⋅22+0⋅21+1⋅201⋅22+0⋅21+1⋅20. Look at the coefficients closely, they exactly match the binary representation: 101.

As you can see, we start from 0 as before, then comes 1, and then 10. So, \\*\\*binary counting\\*\\* goes like this: when a digit reaches 1, the next number resets this digit to 0 and causes the digit to the left to raise. After some practice, it should become more clear.

##### Zero padding

Occasionally you will need to work with binary numbers of a fixed length. To achieve this, you can add insignificant zeros to any binary number on the left side, for example, 11 → 0011, 101 → 0101. This operation does not change the number but allows you to format them.

You might come across the following formats:

* \\*\\*triads:\\*\\* 000, 001, 010, and so on;

* \\*\\*tetrads:\\*\\* 0110, 0111, and so on;

* \\*\\*8-digit numbers:\\*\\* 00000000, 01010101, and so on.


##### Why & where

Almost all modern digital devices use the binary number system. The reason for this lies in the hardware. Computers started using the electronic tubes or relays and then \\*\\*transistors\\*\\*, all of which could be used to represent two states and quickly change from one to the other.

Even the computer memory is binary: we either have something in the memory cell or not. It is conventional to group information in 8-digit binary numbers, where each 8-digit number is referred to as a \\*\\*byte\\*\\*. An 8-digit binary number may represent each of 256 possible values from 0 to 255, and can therefore be used for storing a wide variety of data. Such a way of storing information is called the \\*\\*binary code\\*\\* and is used almost everywhere.

A good example of a binary code, an English text is usually encoded with \\*\\*ASCII\\*\\* (American Standard Code for Information Interchange) \\*\\*code\\*\\*, where each character in the text string was originally represented by a 7-digit binary number (lowercase \\_a\\_ is 1100001, and so on…). Later, ASCII was modified and now it uses 8 bits.

Colors can also be encoded that way. The \\*\\*RGB\\*\\* (stands for \\*\\*Red, Green, Blue\\*\\*) color encoding system stores 3 binary values, 1 binary number for each color, representing the saturation of red, green, and blue color components respectively. The (11111111, 00000000, 00000000) color, for example, is pure red, with no shade of green or blue.

In fact, everything can be (and is) encoded using the binary code.

#Binary-Numbers #ASCII


[[28. Hexadecimal Numbers]]

The char type is used to represent letters (both uppercase and lowercase), digits, and other symbols. Each character is just a symbol enclosed in single quotes.

char lowerCaseLetter = 'a';

char upperCaseLetter = 'Q';

char number = '1';

char space = ' ';

char dollar = '$';

This type can represent all characters in all languages as well as some special and computer symbols. It corresponds to the **Unicode** (UTF-16) format. Unicode is a computer encoding methodology that assigns a unique number for every character. It doesn't matter what language, or computer platform it's on. This is important in a global, networked world, and for computer systems that must accommodate multiple languages and special characters. Unicode truly unifies all of these into a single standard.

Initializing characters with codes

A character can also be created using its hexadecimal code in [the Unicode table](https://unicode-table.com/en/). The code starts with \u.

char ch = '\u0040'; // it represents '@'

System.out.println(ch); // @

Although we use a sequence of characters to represent such a code, the code represents exactly one character.

As an example, capital Latin letters have hexadecimal codes from '\u0041' to '\u005A', and small Latin letters have codes from '\u0061' to '\u007A'.

The char type has a minimum value encoded as '\u0000' and the maximum value encoded as '\uffff'.

It is also possible to initialize a char with a positive integer number.

char ch = 64;

System.out.println(ch); // @

The number 64 just corresponds to the Unicode hexadecimal code '\u0040'.

Any char variable may be considered as an unsigned integer value in the range from 0 to 65535.

Retrieving subsequent characters

There are two operators for adding (+) and subtracting (-) integer numbers in order to get the next and previous character according to the Unicode order.

char ch = 'b';

ch += 1; // 'c'

ch -= 2; // 'a'

It is also possible to add or subtract two characters.

char ch = 'b';

ch += 'a';

ch -= 'b';

System.out.println(ch); // prints 'a' without quotes

Actually, these operations manipulate with codes of characters, 'b' has the next code after 'a'.

It is possible to use increment (++) and decrement (--) operators in prefix and postfix forms.

char ch = 'A';

ch += 10;

System.out.println(ch);   // 'K'

System.out.println(++ch); // 'L'

System.out.println(++ch); // 'M'

System.out.println(--ch); // 'L'

Escape sequences

There are some special characters starting with a backslash \ which are known as the escape or control sequences. They do not have corresponding symbols and cannot be found on a keyboard. To represent such characters we use a pair of regular symbols. In a program, this pair will be considered as exactly one character with the appropriate code.

* '\n' is the newline character;
* '\t' is the tab character;
* '\r' is the carriage return character;
* '\' is the backslash character itself;
* ''' is the single quote mark;
* '"' is the double quote mark.

Here are several examples:

System.out.print('\t'); // makes a tab

System.out.print('a');  // prints 'a'

System.out.print('\n'); // goes to the new line

System.out.print('c');  // prints 'c'

This code prints:

`  `a

c

There is also a character to represent a single space ' '. It is just a regular character, not an escape sequence.

#Characters

[[30. String]]

Built-in methods are a real deal when you manage routine tasks. Still, they are not a cure-all solution since it's impossible to provide a standard method for each specific task. For example, you may need to convert dollars to euros, count your monthly spending, or even calculate a daily portion of seeds for your parrot multiple times. That's when you create your own method to avoid repeating tons of code!

In contrast to built-in methods, \\*\\*user-defined\\*\\* methods are created by the programmer. It is a common practice to create a customized subprogram for a specific purpose.

But how to create it? Let's figure it out.

##### The syntax of a method

Technically, a method is just a structured part of code with a few components. In Java, a method is always located inside a \\*\\*class\\*\\*. Let's take a closer look at a method that calculates a daily portion of seeds for a parrot:

![Declaration of the method countSeeds](https://ucarecdn.com/34fd3304-e6ae-4198-b13d-3a447b836456/)

A method contains a \\*\\*set of modifiers\\*\\*, a \\*\\*type of the return value\\*\\*, a \\*\\*name\\*\\*, a list of \\*\\*parameters\\*\\* in parentheses `()` , and a \\*\\*body\\*\\* in curly brackets `{}`. The combination of the name of the method and the list of its parameters is known as a method \\*\\*signature\\*\\*. In our example, the signature is `countSeeds(int, int)`.

Some methods also have a list of exceptions — they define the method's behavior in case of a mistake in the program. If during the execution of a method, one of its exceptions is thrown, the exception is handled outside the method. For now, we'll consider simple methods without exceptions.

Let's focus on the main components that we need to write simple methods from scratch.

##### Modifiers

The first words are so-called modifiers. There are two types of modifiers in Java: \\*\\*access modifiers\\*\\* and \\*\\*non-access modifiers\\*\\*.

Access modifiers define the visibility of the method. For now, we're using a `public` access modifier, which means there are no restrictions for invoking the method even from other classes.

Non-access modifiers provide information about the behavior of methods to JVM. The modifier `static` means that the method belongs to the class and it can be accessed without creating any object. This type of method is called a \\*\\*static method\\*\\*.

If the method is declared without the `static` modifier, it means that the method can be invoked only through or with an object or instance of this class. Such methods are called \\*\\*instance methods\\*\\*.

Remember that there is a recommended order for the modifiers that you can find in the [Java Language Specification](https://rules.sonarsource.com/java/tag/convention/RSPEC-1124). In our case, it is `public static`.

##### Method parameters

In parentheses after the method name, we define the type, number, and order of the parameters. This reflects how they will be passed to the method when it is invoked. Take a look at these signatures:

```java

convertEurosToDollars(double dlrRate, long eur);

countMonthlySpendings(long food, long rent, long fun);

replace(char a, char b);

```

As you know, there are also methods that don't have values passed to them. These methods are known as \\_non-parameterized\\_.

##### Body and return statement

Before a method completes its execution and exits, it returns a value known as a \\*\\*return value\\*\\*. The result of your method execution can be a value of primitive types like `int`, `float`, `double`, `boolean`, or reference types like `String`. Take a look at our `countSeeds` method with the return type `int`:

```java

public static int countSeeds(int parrotWeight, int parrotAge) {

return parrotWeight / 5 + parrotAge; // it returns an int

}

```

What you see inside the curly brackets is known as the \\*\\*body\\*\\* of the method. The body holds the logic we want to implement by our method: a set of statements to perform with the passed values to obtain the result. Our method `countSeeds` takes two provided values, performs certain calculations, and returns the result within a \\*\\*return statement\\*\\*.

Methods do not necessarily have to return a value. If we want a method not to return a value but to perform operations only, the keyword `void` is used as a return type:

```java

public static void printSeedsCount(int parrotWeight, int parrotAge) {

System.out.println("give your parrot " + (parrotWeight / 5 + parrotAge) +

"g of seeds per day");

}

// this method just prints the line, so it returns no value

```

This method prints the line with recommendations on feeding the parrot and does not allow us to keep a value. Note that there is no return statement.

Though methods with a `void` return type return nothing, you still may use a `return` word to exit the method. Usually, this applies to methods with conditions. Take a look:

```java

public static void isPositive(int num) {

`	`if (num > 0) {

`		`System.out.println("the number is positive");

`	`} else {

`		`return;

`	`}

}

```

Remember, that if you try to return a value from a method with a \\*\\*void\\*\\* return type, a compile error will be thrown.

##### What happens when we invoke a method

When invoking a method, we can write the returned value to some variable, print it out, or pass it on to another method. This is how it looks in a program:

```java

int myParrotWeight = 100;

int myParrotAge = 3;

/\\*\\*

Now myParrotPortion equals 23

because our method countSeeds, as described above,

calculates parrotWeight / 5 + parrotAge

\\*/

int myParrotPortion = countSeeds(myParrotWeight, myParrotAge);

```

There's another important thing to remember. When you pass a variable of a primitive type to a method, a copy of this variable is created with the same value. Inside a method, only this copy is processed. Any changes to this copy will not affect the variable that was passed.

Take a look:

```java

public static void main(String[] args) {

int portion = 100;

addSeeds(portion); // try to change portion

// now let's print a portion

System.out.println(portion);

// 100, because the method didn't change portion, only its copy

}

/\\*\\*

The method increases the portion of seeds by 50

and prints the resulting value

\\*/

public static void addSeeds(int portion) {

portion += 50;

System.out.println("The increased portion is " + portion);

}

```

The output will look like:

```java

The increased portion is 150

100

```

Although the `addSeeds` method changes the passed argument, it happens to a different variable with its own value, leaving the value of the original `portion` variable intact.

##### Conclusion

As you see, a method is a block of code that contains a set of modifiers, a return type, a name, a list of its parameters, and a body. A method may return a value or return nothing, which is indicated with the `void` keyword.

If you know the syntax of methods, you can create your own and adjust them for your needs. This practice will make your code more structured and reusable.

[[21. The Main Method]]

Sometimes, you need to use a variable that should not be modified during the program. Such variables are known as \\*\\*constants\\*\\*. Java provides a special keyword called `final` to declare them. The only difference between a regular variable and a final variable is that we cannot modify the value of a final variable once assigned. Hence final variables must be used only for the values that we want to remain \\*\\*constant\\*\\* throughout the execution of the program.

##### Final variables

The following code demonstrates two final variables: `PI` which represents a well-known math constant and `HELLO\\_MSG` which represents a string text.

```java

final double PI = 3.1415;

final String HELLO\\_MSG = "Hello";

System.out.println(PI); // 3.1415

System.out.println(HELLO\\_MSG); // Hello

```

Both variables cannot be modified since they are marked as final, but they can be accessed as many times as we need them.

A good practice is to represent a final variable in all caps using an underscore to separate words. It allows you to distinguish them from regular variables. But sometimes, you will also see final variables written in lowercase: this is also admissible for \\*\\*local final variables\\*\\*.

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

final var FINAL\\_VAR = 10; // int

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

There is also a counterargument: massive use of the `final` keyword makes your code less readable ([boilerplate code](https://en.wikipedia.org/wiki/Boilerplate\\_code)).

Thus, in our learning examples, we will not always write the `final` keyword, but sometimes you will see such examples. In your solutions, you can write or avoid this keyword. During your real work as a programmer, we hope that the issue of using finals will be standardized for all programmers in the project.

Interestingly, the `final` keyword can also be used in some different contexts, not only for declaring constants. We will learn other ways to use this keyword in the next topics.

#Final-Variables


[[35. Write, Compile and Run]]

[[32. Iterating Over Arrays]]

You already know how to create simple methods in Java. This is a very useful skill that can help you shorten your code, reuse some operations, and make your program more readable.

Step by step, your programming tasks are becoming more complex, so are your methods. Though you can create a complex program that is wrapped in one solid method or even in a `main` method, it is better to divide a program into a number of more specific methods that are easy to read and understand. The approach of dividing a complex program into subroutines is called \\*\\*functional decomposition\\*\\*.

In this topic, we'll see how to decompose the solution of a particular problem into methods.

#divide-and-conquer

##### Solving complex tasks

The very idea of decomposing some problems into several subproblems is quite intuitive. If you want to cook a pizza, you don't just put all the ingredients in the oven: instead, you break the process up into separate tasks – from making the dough to actual cooking. \\_Functional\\_ decomposition is not about cooking pizza, but it is based on the same principle of breaking a problem into small pieces called methods.

Let's consider an example. Think of a program that simulates the Smart home app. This app is used to control home devices that can be remotely accessed: wireless speaker systems, lights, home security, door locks, and even robots. Imagine that we have a simple Smart home app that can perform three actions: turn the music on or off, switch the light on and off, and control the door lock. Let's consider these actions as parts of our computer program.

If we decompose this task, that is how its algorithm can be described in general:

- Parse the input data (entered password);
- Check that the password is correct;
- Ask the user what they want to do;
- If the action is supported, perform it.

Imagine that you wrapped this program in code, but without a single method. That is how its structure would look like:

```java

// ...

int password = 76543210;

String speakersState;

String lampState;

String doorState;

// reading the password

System.out.println("Enter password: ");

int passwordInput = scanner.nextInt();

// checking if the password is correct

if (passwordInput != password) {

System.out.println("Incorrect password!");

} else {

// asking the user what they want to do

System.out.println("Choose the object: 1 – speakers, 2 – lamp, 3 – door");

String action = scanner.next();

switch (action) {

case "1":

// asking the user about speakers

switch (speakersState) {

case "on":

// ...

case "off":

// ...

default:

// ...

}

break;

case "2":

// asking the user about lights...

case "3":

// asking the user about the door...

}

}

```

Though you see just a truncated version of a real program, this code still looks overloaded. At the same time, it works perfectly fine for our problem and we could leave it like that. However, later on we might want to adjust it for our needs or extend its functionality.

What if we want this code to work for many users and not just one, or to expand the number of actions, make them more complex? Some parts of this code would be useful, and some of them would probably be deleted. To make this code less specific and more flexible, we can use \\_functional\\_ decomposition.

##### Decomposing a program into methods

\\*\\*Functional decomposition\\*\\* is simply a process of decomposing a problem into several functions or methods. Each method does a particular task so that we can perform these methods in a row to get the results we need. When we look at a problem, we need to think about which actions we may want to repeat multiple times or, alternatively, perform separately. This is how we get the desired methods. As a result, these methods are easier to read, understand, reuse, test, and debug.

Let's look at our Smart home app again and figure out which steps can be turned into separate methods. First of all, we can separate our main operations into three methods: one method to control the music, another one to turn the lights on and off, and the third to operate the door lock. Take a look at the method `controlMusic()` that controls the music.

Methods `controlLight()` and `controlDoor()` follow the same algorithm.

```java

// method that turns the music on and off

public static void controlMusic() {

Scanner scanner = new Scanner(System.in);

System.out.println("on/off?");

String tumbler = scanner.next();

if (tumbler.equals("on")) {

System.out.println("The music is on");

} else if (tumbler.equals("off")) {

System.out.println("The music is off");

} else {

System.out.println("Invalid operation");

}

}

```

These controlling methods perform the main actions that our app provides. Of course, these actions are greatly simplified, but the main goal here is to show the process of revising the functionality of our program.

To make things work, we need to create a method that checks the password.

```java

// method that verifies the password and gives access to Smart home actions if the password is correct

public static void accessSmartHome() {

Scanner scanner = new Scanner(System.in);

final int password = 76543210;

System.out.println("Enter password: ");

int passwordInput = scanner.nextInt();

if (passwordInput == password) {

chooseAction();

} else {

System.out.println("Incorrect password!");

}

}

```

Also, we need a method with the main menu where you can choose the action, so we created a method `chooseAction()`. This method asks the user what action they want to perform and gives control to the method that performs the picked action.

Finally, we can run our decomposed program in the `main` method, which is called once our program is started:

```java

public static void main(String[] args) {

accessSmartHome();

}

```

This method calls `accessSmartHome`, which asks to enter a password and, if it is correct, allows us to manage the Smart home.

##### Adding new features

Now, if we want to add another action, all we have to do is define the method with this action. For example, we've got a new Smart device, an electric kettle. We create a method that switches it on and off. To get access to the new method, we need to modify the `chooseAction()` method by adding a new case statement:

```java

// method that controls electric kettle

public static void controlKettle() {

// ...

}

// method with the main menu for choosing the action

public static void chooseAction() {

Scanner scanner = new Scanner(System.in);

// adding case 4

System.out.println("Choose the object: 1 – speakers, 2 – lamp, 3 – door, 4 – kettle");

// ...

case 4:

controlKettle();

break;

// ...

}

```

As you see, we now have a real functioning program that won't fall apart if we decide to change it a bit. We can easily test separate components since they are defined in separate methods. This also makes it easier to support the program in the future.

##### Conclusion

In this topic, we have learned the importance of functional decomposition. It is used to divide a program into several methods. This approach has a lot of advantages. It helps us to:

- structure the code;
- follow the general logic of the program;
- make changes easily;
- test separate methods.

Functional decomposition is not key to everything, but using this approach will help you create neat and understandable programs that are easy to work with.

## Kate's math function Problem

Here is a math [[Función]] that Kate wants to use in her program:

![[Captura de pantalla 2023-08-21 a la(s) 23.40.44.png]]

The template for this function is defined below. Let's decompose it!

Your task is to create three additional methods `f1`, `f2`, and `f3` for each case and complete the method `f`. Each method should accept `x` as an argument with `double` type.

#### Code

```java

import java.util.Scanner;

public class KatesMathFunction {

public static void main(String[] args) {

Scanner scanner = new Scanner(System.in);

double x = scanner.nextDouble();

System.out.println(f(x));

}

public static double f(double x) {

// call your implemented methods here.

if (x <= 0) {

return f1(x);

} else if (x > 0 && x < 1) {

return f2(x);

} else {

return f3(x);

}

}

// implement your methods here

public static double f1(double x) {

return ((x \\* x) + 1);

}

public static double f2(double x) {

return (1 / (x \\* x));

}

public static double f3(double x) {

return ((x \\* x) - 1);

}

}

```

#divide-and-conquer

[[23. Overloading]]

Even if you are not an experienced programmer, you have probably heard something about Java. It is not only a programming language but also a widely used software platform. In this topic, you will get some essential ideas about the Java platform and learn how to write and run your programs in Java environment.

##### Writing a program

As a developer, the first thing you do while creating a program is writing the \\*\\*source code\\*\\* in a plain text file and saving it with an extension corresponding to the programming language you've chosen (`.java` for the Java language, `.kt` for Kotlin, and so on). A single program consists of one or more such files, which contain instructions specifying what the program does. The source code must follow the syntax rules of the respective language and be easy to read and understand.

##### Compilation

After the code is written, you need to make the computer run the program. As computers don't understand the source code, it needs to be translated into a computer-comprehensible format. That's where a special program called a \\*\\*compiler\\*\\* comes in handy. The code obtained after compilation is called native code or low-level code. Each computer platform uses different low-level commands, just like people around the world speak different languages. It creates an additional challenge to use a program on different devices.

In the world of Java, a compiler (the `javac` tool for Java or the `kotlinc` tool for Kotlin) translates source code into an intermediate representation known as \\*\\*Java bytecode\\*\\* stored in files with a `.class` extension. Computers can't read bytecode without translation, but a system called the Java Virtual Machine (JVM) can execute it.

##### Running a program

The \\*\\*Java Virtual Machine\\*\\* is an application that represents a virtual computer according to the JVM specification document. It executes the compiled Java bytecode and translates it into low-level commands, which the computer understands. Each platform has its own version of the JVM, but since all JVMs match the same specification, your program will behave identically on different devices.

One of the main concepts of the Java Platform is "write once, run anywhere". It means that a program can run on various devices as long as they have a JVM installed. This concept is also frequently called \\*\\*platform independence\\*\\* or portability.

It's important to remember: the code input into the JVM is platform-independent, while the output code is platform-dependent.

![jvm platform independent programs](https://ucarecdn.com/45ca11fd-89b2-4dae-952f-a5c7e3878a35/)

\\_A platform-independent program in the world of Java\\_

If the JVM is installed on the computer, you can run a compiled JVM program using the `java` tool. It will open a file with the `.class` extension to launch the program from this file. The tool is the same for all JVM languages.

The picture below briefly summarizes the work cycle of a JVM program.

![jvm program work cycle](https://ucarecdn.com/769d5ced-d7a7-45a2-a72c-f4082311eeed/)

##### JVM languages

The Java Platform allows using more than one programming language to create programs. This is achieved by the design of the JVM: it doesn't know anything about any particular programming language. It only understands Java bytecode. If the tools for a programming language can generate bytecode, programs written in this language can be executed on the JVM. Such languages are often called \\*\\*JVM languages\\*\\*. They include Java itself, Kotlin, Scala, Groovy, Clojure, and others. So, to create programs in the world of Java, you can choose the most convenient language of your choice.

Nowadays, you can find tools to generate Java bytecode for almost any programming language, which means that there's hardly any language that is not a JVM language.

![jvm languages bytecode compilation](https://ucarecdn.com/ac15fde7-a597-42d0-bfa4-3994724e0467/)

\\_Different programming languages can be used to write programs in the world of Java\\_

##### Conclusion

* Developers write program source code in text files with appropriate extensions.

* Compilers translate source code into Java bytecode stored in `.class` files.

* The Java Virtual Machine executes bytecode, giving low-level commands to the computer.

* All JVMs are defined by the JVM specification, thus providing platform independence for programs.

#Bytecode #JVMS #JRE #Compiler

[[36. Errors in Programs]]

* Read data from the standard input (System.in)
* Process data to obtain a result;
* Output the result to the standard output (System.out).

```java

import java.util.Scanner;

class Main {

public static void main(String[] args) {

Scanner scanner = new Scanner(System.in);

// start coding here

String name1 = scanner.next();

String line1 = scanner.nextLine();

String name2 = scanner.next();

String line2 = scanner.nextLine();

String name3 = scanner.next();

System.out.println(name1);

System.out.println(name2);

System.out.println(name3);

}

}

```

[[5. Arithmmetic Operations]]

In real life, we often perform arithmetic operations. They help us to determine the change from a purchase, calculate the area of a room, count the number of people in a queue, and so on. The same operations are used in programs.

#Binary arithmetic operators

The Java programming language provides operators to perform arithmetic operations:

* addition +
* subtraction -
* multiplication \\*
* division /
* remainder %

The operators are called binary because they take two values as operands.

The following example prints the results of **addition**, **subtraction**, and **multiplication**.

System.out.println(13 + 25); // prints 38

System.out.println(20 + 70); // prints 90

System.out.println(70 - 30); // prints 40

System.out.println(30 - 70); // prints -40

System.out.println(21 \\* 3);  // prints 63

System.out.println(20 \\* 10); // prints 200

The / operator returns the integer part of the division of two integer numbers, and any fractional part is discarded.

System.out.println(8 / 3); // prints 2

System.out.println(41 / 5); // prints 8

The % in Java is the modulus or remainder operator. It returns the remainder of the division of two numbers. Note, that when the dividend is less than the divisor, the quotient is zero and the remainder equals the dividend. If you still feel uneasy about the modulo operation, check out [this topic](https://hyperskill.org/learn/step/10586).

System.out.println(10 % 3); // prints 1, because 10 divided by 3 leaves a remainder of 1

System.out.println(12 % 4); // prints 0, because 12 divided by 4 leaves no remainder

System.out.println(5 % 9); // prints 5, because 5 divided by 9 leaves a remainder of 5

Writing complex expressions

The operations can be combined to write more complex expressions:

System.out.println(1 + 3 \\* 4 - 2); // prints 11

The calculation order coincides with arithmetic rules. Multiplication has a higher priority level than addition and subtraction, so the operation 3 \\* 4 is calculated first.

To specify the order of execution we can use **parentheses**:

System.out.println((1 + 3) \\* (4 - 2)); // prints 8

As in arithmetic, **parentheses** can be nested. You can also use them for clarity.

Unary operators

A unary operator takes a single value as the operand.

* The **unary plus** operator indicates a positive value. It's an optional operator.

System.out.println(+5); // prints 5

* The **unary minus** operator negates a value or an expression.

System.out.println(-8);  // prints -8

System.out.println(-(100 + 4)); // prints -104

They both have a higher level of precedence than the **multiplication** and **division** operators.

The #precedence-order

There is a [precedence order](https://introcs.cs.princeton.edu/java/11precedence/) of all arithmetic operators, including parentheses. The list below is sorted from the highest to the lowest precedence level.

* parentheses;
* unary plus/minus;
* multiplication, division, the remainder;
* addition, subtraction.

[[2. Printing Data]]

When you write programs, you often need to print calculation results, text, or any other type of data. Also, throughout this educational platform, you will write a lot of programs that print data on the screen. Let's learn how to do that using a standard approach in Java.

##### Displaying text using #println() and print()

\\*\\*Standard output\\*\\* is a receiver to which a program can send information as text. It is supported by all common operating systems. Java provides a special `System.out` object to work with the standard output. We will often use it to print data.

The `println` method displays the passed string followed by a new line on the screen (\\*\\*print-line\\*\\*). For example, the following code snippet prints four lines.

```java

System.out.println("I ");

System.out.println("know ");

System.out.println("Java ");

System.out.println("well.");

```

Here is the output we get:

```no-highlight

I

know

Java

well.

```

All the strings were printed as they are, without double quotes.

This method allows you to print an empty line when no string is given:

```java

System.out.println("Java is a popular programming language.");

System.out.println(); // prints empty line

System.out.println("It is used all over the world!");

```

And here is the output:

```no-highlight

Java is a popular programming language.

It is used all over the world!

```

The `print` method displays the value that was passed in and places the cursor (the position where we display a value) after it. For example, the code below outputs all strings in a single line.

```java

System.out.print("I ");

System.out.print("know ");

System.out.print("Java ");

System.out.print("well.");

```

We receive the following output:

```no-highlight

I know Java well.

```

Pay attention to the spaces between words. We pass them to the method for printing.

##### Printing numbers and characters

Both `println` and `print` methods allow a program to print not only strings and characters, but also numbers.

Let's print two secret codes.

```java

System.out.print(108);   // printing a number

System.out.print('c');   // printing a character that represents a letter

System.out.print("Q");   // printing a string

System.out.println('3'); // printing a character that represents a digit

System.out.print(22);

System.out.print('E');

System.out.print(8);

System.out.println('1');

```

Here is our output:

```no-highlight

108cQ3

22E81

```

As is the case with strings, none of the printed characters contain quotes.

##### Conclusion

In Java, you can print data via the standard output using the `System.out` object. You can use the `println` method to display the passed string in a print-line and the `print` method to output all passed strings in a single line. Both of these methods also allow for printing numbers as well as characters.

[[6. Integer Types and Operations]]

Integer numbers

These numbers are used to count things in the real world as natural numbers. As well as, integer numbers contain zero and negative ones. Also, we will often use them in Java.

Here are several examples of valid integer number literals separated by commas: 0, 1, 2, 10, 11, 100.

If an integer value contains a lot of digits, we can add underscores to divide the digit into blocks for increased readability: 1\\_000\\_000. It's more readable than the same value written as 1000000.

Characters

A single character can represent a digit, a letter or another symbol. To write a character we use single quotes as follows: 'A', 'B', 'C', 'x', 'y', 'z', '0', '1', '2', '9'. Character literals can represent symbols of an alphabet, digits from '0' to '9', whitespaces (' '), or other characters or symbols ('$').

Do not confuse characters that represent numbers (e.g. '9'), with numbers themselves (e.g. 9).

A character can't include two or more digits or letters because it represents only a single symbol. The following two examples are **incorrect**: 'abc', '543'. These literals contain too many characters.

Strings

A string is a sequence of individual characters. Strings represent text information such as a text of advertising, an address of a web page or a login on a site.

To write a string we use double quotes instead of single ones. Here are some valid examples: "text", "I want to know Java", "123456", "e-mail@gmail.com". A string consisting of a single character like "A" is also a valid string, but do not confuse it with the 'A' character.

As you can see, strings can include letters, digits, whitespaces, and other characters.

Conclusion

Do not confuse these literals:

* 123 is an integer number, "123" is a string;
* 'A' is a character, "A" is a string;
* '1' is a character, 1 is an integer number.

[[0. The Basic of a Program]]

[[3. Types and Variables]]

#Boolean type

The boolean is a data type that has only two possible values: false and true. This is also known as the **logical type**.

This type is a common way in programming languages to represent something that has only two opposite states like \*on\* or \*off\*, \*yes\* or \*no\*, etc.

![true or false choose image](https://ucarecdn.com/50cbf6b2-6d44-44d6-b5ef-b1426bdde305/)

If you are writing an application that keeps track of opening and closing a door you'll find it natural to use boolean to store the current door state.

boolean open = true;

boolean closed = false;

System.out.println(open);   // true

System.out.println(closed); // false

Important, you cannot assign an integer value to a boolean variable. In Java, 0 is not the same as false.

#Logical-operators #NOT-AND-OR-XOR

Variables of the boolean type are often used to build logical expressions using logical operators. Java has four logical operators **NOT**, **AND**, **OR** and **XOR:**

* **NOT** is a unary operator that reverses the boolean value. It is denoted as !.

boolean f = false; // f is false

boolean t = !f;    // t is true

* **AND** is a binary operator that returns true if both operands are true, otherwise, it returns false. It is denoted as &&.

boolean b1 = false && false; // false

boolean b2 = false && true;  // false

boolean b3 = true && false;  // false

boolean b4 = true && true;   // true

* **OR** is a binary operator that returns true if at least one operand is true, otherwise, it returns false. It is denoted as ||.

boolean b1 = false || false; // false

boolean b2 = false || true;  // true

boolean b3 = true || false;  // true

boolean b4 = true || true;   // true

* **XOR** (**exclusive OR**) is a binary operator that returns true if boolean operands have different values, otherwise, it returns false. It is denoted as ^.

boolean b1 = false ^ false; // false

boolean b2 = false ^ true;  // true

boolean b3 = true ^ false;  // true

boolean b4 = true ^ true;   // false

The **XOR** operator is used less often than the others. Just remember that Java has it. If you really need it, you can use it.

The precedence of logical operators

Here are the logical operations sorted in order of decreasing priorities in expressions: ! (NOT), ^ (XOR), && (AND), || (OR).

The following variable is true:

boolean b = true && !false; // true, because !false is evaluated before &&

To change the order of execution you can use round brackets (...).

An example: trekking

As an example, let's write a complex boolean expression that determines the possibility of trekking in summer and in other seasons. Let's suppose that the right conditions for trekking are dry warm weather in any season or dry weather in summer.

boolean cold = false;

boolean dry = true;

boolean summer = false; // suppose now is autumn

boolean trekking = dry && (!cold || summer); // true, let's go to trek!

Do not get confused in the expression above, otherwise, you will go trek in bad weather! A programmer should understand not only arithmetic but also logical operations.

Short-circuiting evaluation

An interesting thing is that the && and || operators don't evaluate the second argument if it isn't necessary. When the first argument of the && operator evaluates to false, the overall value must be false; and when the first argument of the || operator evaluates to true, the overall value must be true. So:

* false && ... -> false, since it is not necessary to know what the right-hand side is;
* true || ... -> true, since it is not necessary to know what the right-hand side is.

This behavior is known as **short-circuit evaluation** (do not confuse it with [an electrical short circuit](https://en.wikipedia.org/wiki/Short\_circuit)). It reduces the computation time, but can also be used to avoid some errors in programs. We will discuss this in the following topics.

[[8. Relational Operators]]

In certain cases, you may want to alter the standard behavior of a loop. The Java programming language provides **branching statements** for this purpose that can terminate a loop or skip some of its iterations.

The break statement

The **break** statement has two uses:

* it terminates the current loop of any type (**for**, **while**, **do-while**);
* it terminates a case in the **switch** statement;

In this topic, we will learn how to use it to terminate loops.

The following example demonstrates a loop that includes one break.

int i = 10;

while (true) { // the condition to continue the loop

`    `if (i == 0) { // the condition to perform the break that stops this loop

`        `break;

`    `}

`    `i--;

}

In the code above, the condition to continue the loop is always true, but it will be successfully stopped when the variable i becomes 0 through the use of break inside the conditional statement.

The **break** statement terminates only the loop in which it is currently located. If this loop is performed inside another loop, the outer loop won't be stopped.

The following code prints a ladder of numbers.

for (int i = 0; i < 10; i++) {

`    `for (int j = 0; j < 10; j++) {

`        `System.out.print(j + " ");

`        `if (i == j) {

`            `break;

`        `}

`    `}

`    `System.out.println();

}

The break statement can't stop the outer loop (with variable i) and the code prints:

0

0 1

0 1 2

0 1 2 3

0 1 2 3 4

0 1 2 3 4 5

0 1 2 3 4 5 6

0 1 2 3 4 5 6 7

0 1 2 3 4 5 6 7 8

0 1 2 3 4 5 6 7 8 9

To stop the outer loop we could declare a Boolean variable stopped and use it as a special Boolean flag.

boolean stopped = false;

for (int i = 0; i < 10 && !stopped; i++) {

`    `for (int j = 0; j < 10; j++) {

`        `System.out.print(j + " ");

`        `if (i == j) {

`            `stopped = true;

`            `break;

`        `}

`     `}

`    `System.out.println();

}

Now, the program's output is not the same:

0

There is another way to stop the outer loop: the labeled break operator. However, it's not good practice to use it. Google it if you are really interested.

The continue statement

It causes a loop to skip the current iteration and go to the next one.

This statement can be used inside any kind of loop.

* inside the **for-loop**, the continue statement causes control to immediately move to the increment/decrement statement;
* inside the **while** or **do-while loop**, control immediately moves to the condition.

In the following example, a sequence of numbers is output. Odd numbers are skipped.

int n = 10;

for (int i = 0; i < n; i++) {

`    `if (i % 2 != 0) {

`        `continue;

`    `}

`    `System.out.print(i + " ");

}

The output:

0 2 4 6 8

The **continue** statement and the **break** statement only affect the loop in which they are located. The **continue** statement cannot skip the current iteration of the outer loop.

Often, we can rewrite our loop without using the continue statement. Here is an example:

int n = 10;

for (int i = 0; i < n; i++) {

`    `if (i % 2 == 0) {

`        `System.out.print(i + " ");

`    `}

}

The result is the same as above, but the code became shorter and more readable.

It is important to note that the widespread use of branching statements leads to poorly-structured code because conditions in your loops are not actually what you need to do. So, use them wisely — only when it helps to make code shorter and easier to understand for humans.

You may remember that a method is a sequence of statements that can be invoked or referred to by its name. Nothing special, huh? But what if we tell you that you can use it in a program anytime you need and anywhere you want just by invoking it with one line of code? Hope that we have caught your attention now!

To get started, we will call any method:

```java

getVolume(a, b, h);

```

Here, `getVolume` is the name of the method that, for example, calculates a volume of some geometric shape, and the variables `a`, `b` and `h` are its parameters. Technically, the parameter of a method is some value that is used inside the method. The combination of the name and method parameters in parentheses is the way we call or invoke the method. Let's focus on it in more detail.

##### Name of the method

Each method has a name that is used to call it. Generally, it reflects what the method does – prints, finds, calculates, and provides you with some information.

The Java compiler requires a method name to be a \\*\\*legal identifier\\*\\*. The rules for legal identifiers are the following:

* identifiers are case-sensitive;

* an identifier can include Unicode letters, digits, underscore `\\_` or currency characters, such as `$`;

* an identifier can't start with a digit;

* identifiers must not be a keyword.


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

Methods like this require an object of a certain class to be invoked. Before we called the `toLowerCase()` method, we created an object of the `String` class called `name`, since the method in question deals with strings. Now we can call the method for this particular \\*\\*instance\\*\\* \\_(2),\\_ which results in decapitalizing all the letters from our string.

As you see, this method requires an instance to be created before it can be called, that's why it is known as an \\*\\*instance method\\*\\*. We will talk about this type of method later.

##### Built-in methods

Why do you need to rewrite algorithms that have already been written? Of course, we're not talking about some special cases like educational tasks. Still, it is more efficient to use pre-defined methods that are always available to the user. That is why there are two types of methods in Java: \\*\\*built-in\\*\\* and \\*\\*user-defined\\*\\* methods.

Built-in methods belong to the Standard Java library. Now there are a lot of built-in methods that convert or compare values, round doubles, find the maximum or the minimum value, and do a lot of useful operations. We've already dealt with the `round()`, `isLetter()`, `compareTo()`, and `hasNext()` methods, but the number of built-in methods is huge and constantly growing. You can find the method you need in the Oracle documentation. For example, check out the link to the [Math library](https://docs.oracle.com/javase/8/docs/api/java/lang/Math.html).

In contrast to built-in methods, user-defined methods are created by the programmer. It is a common practice to create a customized subprogram for a specific purpose. You may create your own method and even put it in your own class. Later on, we will learn why it is a good practice to use user-defined methods and how to actually create them.

##### Conclusion

Generally, a method is a necessary tool for a programmer who is aiming for a neat and reusable code style. With the help of methods, you can perform any specific task you need. They make the program look more readable, and you don't need to repeat routine code lines over and over. Some tasks are wrapped in special built-in methods that are part of the standard Java library. Also, there are user-defined methods that are created by the programmer. We will discuss these methods in other topics.

Inside a Java program, you can write a special text that will be ignored by the Java compiler — known as the \\*\\*comment\\*\\*. Comments allow you to exclude code from the compilation process (disable it) or clarify a piece of code to yourself or other developers. In our materials, we use comments in the theory and practice lessons to explain how and why our code works.

The Java programming language supports three kinds of comments.

##### End-of-line comments

The Java compiler ignores any text from `//` to the end of the line.

```java

class Program {

public static void main(String[] args) {

// The line below will be ignored

// System.out.println("Hello, World");

// It prints the string "Hello, Java"

System.out.println("Hello, Java"); // Here can be any comment

}

}

```

In the example above the text after `//` is ignored by the compiler.

##### Multi-line comments

The compiler ignores any text from `/\\*` and the nearest `\\*/`. It can be used as multiple and single-line comments.

```java

class Program {

public static void main(String[] args) {

/\\* This is a single-line comment \\*/

/\\*  This is an example of

a multi-line comment \\*/

}

}

```

You can use comments inside other comments:

```java

class Program {

public static void main(String[] args) {

/\\*

System.out.println("Hello"); // print "Hello"

System.out.println("Java");  // print "Java"

\\*/

}

}

```

The part of the code above is ignored by the compiler because of `/\\* ... \\*/` comments.

##### Java documentation comments

The compiler ignores any text from `/\\*\\*` to `\\*/` just like it ignores multi-line comments.

These kinds of comments can be used to automatically generate documentation about your source code by using the \\*\\*javadoc\\*\\* tool. Usually, these comments are placed above declarations of classes, interfaces, methods and so on. Some special labels such as `@param` or `@return` are often used for controlling the tool. However, they are optional and we will not deal with them for now. Just don't be surprised in case you see them.

See the example below.

```java

class Program {

/\\*\\*

The main method accepts an array of string arguments

\\*

@param args from the command line

\\*/

public static void main(String[] args) {

// do nothing

}

}

```

Do not be afraid if you have not understood \\*\\*the documentation comments\\*\\* completely. This will be considered in other topics.

#Comments


[[7. Boolean and Logical Operations]]

The **conditional statement** is a construction that allows a program to perform different computations depending on the value of a Boolean expression. If it is true, the program performs one computation; otherwise, if it is false, the program performs another computation. Here are some examples of Boolean expressions: a > b, i - j == 1, and so on.

The conditional statement has different forms. We will use all of them.

The single #if-case

The simplest form of the conditional statement consists of the keyword if, a Boolean expression enclosed in parentheses, and a body enclosed in curly braces.

if (expression) {

`    `// body: do something

}

If the expression is true, the statements inside the code block are executed; otherwise, the program skips them.

See the following example.

int age = ...; // it has a value

if (age > 100) {

`    `System.out.println("Very experienced person");

}

In this example, if the age is greater than 100 the code prints **"Very experienced person"**, otherwise, it does nothing.

Sometimes you will see a situation where the expression in a condition is a single boolean type variable. Instead of writing b == true or b == false, use this variable (or its negation with !) as the Boolean expression:

boolean b = ...; // it is true or false

if (b) { // or !b

`    `// do something

}

A conditional statement can be used in any place in a program where the statement is expected. It can even be nested inside another conditional statement to perform multistage checks.

The #if-else-cases

The if-case above can be extended with the keyword else and another body to do alternative actions when the expression is false.

if (expression) {

`    `// do something

} else {

`    `// do something else

}

In this case, if the expression is true, then the first code block is executed; otherwise, the second code block is executed, but not both together.

In the example below, the program outputs different text depending on the value of num (even or odd).

Note: a number is even if it can be divided exactly by 2; otherwise it's odd.

int num = ...; // the num is initialized by some value

if (num % 2 == 0) {

`    `System.out.println("It's an even number");

} else {

`    `System.out.println("It's an odd number");

}

Since a number can only be even or odd, only one message will be displayed. If num is 10, the program outputs "It's an even number". If the value is 11, it outputs "It's an odd number".

The #if-else-if-cases

The most general form of the conditional statement consists of several conditions and else-if-branches.

if (expression0) {

`    `// do something

} else if (expression1) {

`    `// do something else 1

// ...

} else if (expressionN) {

`    `// do something else N

}

The following code outputs recommendations about what computer you need to buy depending on your budget.

long dollars = ...; // your budget

if (dollars < 1000) {

`    `System.out.println("Buy a laptop");

} else if (dollars < 2000) {

`    `System.out.println("Buy a personal computer");

} else if (dollars < 100\\_000) {

`    `System.out.println("Buy a server");

} else {

`    `System.out.println("Buy a data center or a quantum computer");

}

This conditional statement has four branches: dollars < 1000, dollars < 2000, dollars < 100\\_000 and dollars >= 100\\_000. For example, if the value of dollars is 10\\_000, it prints "Buy a server" because 10\\_000 is more than 2000 , which means that the first and the second conditions are false, and less than 100\\_000 , which means that the third condition is true.

A conditional statement with multiple branches creates a **decision tree**, whose nodes consist of boolean expressions, and each branch is marked with \*true\* or \*false\*. The \*true\*-branch leads to a block of statements to be executed and a false-branch leads to the next condition to be checked. The last false-branch means **"**\*in all other cases**\*"**.

When talking about conditions, programmers often use the term "control flow statements". **Control flow** is the order in which various parts of a program are executed. You will probably meet this term in our topics and on other external resources.

The picture below demonstrates such a tree for the example with computers.

![decision tree](https://ucarecdn.com/3825c12e-3146-425b-9c1c-d3b2ecf2495b/)

**Decision tree for buying a computer**

This example completes our examination of conditional statements.

[[10. Ternary Operator]]
