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

[[Increment and Decrement]]
