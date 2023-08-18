In certain cases, you may want to alter the standard behavior of a loop. The Java programming language provides **branching statements** for this purpose that can terminate a loop or skip some of its iterations.

##### The break statement

The **break** statement has two uses:

- it terminates the current loop of any type (**for**, **while**, **do-while**);
- it terminates a case in the **switch** statement;

In this topic, we will learn how to use it to terminate loops.

The following example demonstrates a loop that includes one `break`.

```java
int i = 10;
while (true) { // the condition to continue the loop
    if (i == 0) { // the condition to perform the break that stops this loop 
        break;
    }
    i--;
}
```

In the code above, the condition to continue the loop is always `true`, but it will be successfully stopped when the variable `i` becomes `0` through the use of `break` inside the conditional statement.

The **break** statement terminates only the loop in which it is currently located. If this loop is performed inside another loop, the outer loop won't be stopped.

The following code prints a ladder of numbers.

```java
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        System.out.print(j + " ");
        if (i == j) {
            break;
        }
    }
    System.out.println();
}
```

The break statement can't stop the outer loop (with variable `i`) and the code prints:

```java
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
```

To stop the outer loop we could declare a Boolean variable `stopped` and use it as a special Boolean flag.

```java
boolean stopped = false;
for (int i = 0; i < 10 && !stopped; i++) {
    for (int j = 0; j < 10; j++) {
        System.out.print(j + " ");
        if (i == j) {
            stopped = true;
            break;
        }
     }
    System.out.println();
}
```

Now, the program's output is not the same:

```java
0
```

There is another way to stop the outer loop: the labeled break operator. However, it's not good practice to use it. Google it if you are really interested.

##### The continue statement

It causes a loop to skip the current iteration and go to the next one.

This statement can be used inside any kind of loop.

- inside the **for-loop**, the continue statement causes control to immediately move to the increment/decrement statement;
- inside the **while** or **do-while loop**, control immediately moves to the condition.

In the following example, a sequence of numbers is output. Odd numbers are skipped.

```java
int n = 10;
for (int i = 0; i < n; i++) {
    if (i % 2 != 0) {
        continue;
    }
    System.out.print(i + " ");
}
```

The output:

```java
0 2 4 6 8
```

The **continue** statement and the **break** statement only affect the loop in which they are located. The **continue** statement cannot skip the current iteration of the outer loop.

Often, we can rewrite our loop without using the continue statement. Here is an example:

```java
int n = 10;
for (int i = 0; i < n; i++) { 
    if (i % 2 == 0) {
        System.out.print(i + " ");
    } 
}
```

The result is the same as above, but the code became shorter and more readable.

It is important to note that the widespread use of branching statements leads to poorly-structured code because conditions in your loops are not actually what you need to do. So, use them wisely — only when it helps to make code shorter and easier to understand for humans.