As you already know, pseudocode is the way to show the structure of an algorithm without any pictures or explanations. Now, it is important to find out what our custom pseudocode looks like.
In this topic, we will agree upon several rules: how to assign a variable, how to print the output, how to create a simple "if-else" branch. We hope that you already know some programming languages, so it should be easy for you to learn how to read our custom pseudocode. And remember: the more you look at the pseudocode, the easier it is to understand it!

##### Variables and assigning

Note that every line in our algorithm is one action. Actions are performed sequentially.

Let's start learning our language with basic constructions such as **variables** and **assigning**. Look at the example below:

```kotlin
a = 93
```

Here, we create a variable named `a` and assign an integer number `93` to it. The syntax is pretty simple: the name of the variable is on the left, the value is on the right, the assignment operator is in between. Let's look at some other examples:

```kotlin
b = 3.14
s = "Hello"
```

Here, we assign a floating-point number `3.14` to the variable `b` and the string `Hello` to the variable `s`. For simplicity, we don't use types: we don't declare that the variable `s` is a string or the variable `b` is a floating-point number.

Sometimes, there is a need to initialize several variables in sequence. To do that, we will use the following syntax:

```kotlin
a = 3
b = "text"
c = 5.5
```

or a shorter version:

```kotlin
a, b, c = 3, "text", 5.5
```

Here, the variable `a` is equal to `3`, the variable `b` is the string `text`, and the variable `c` is `5.5`.

If you need to change the value of a variable, you can assign a different value to it:

```kotlin
a = 3
a = 5
```

First, you declare the variable `a` and assign it the value `3`. The next action assigns `5` to `a`. Hence, after this snippet `a` is equal to `5`.

Also, you can assign the value of one variable to another variable:

```kotlin
a = 1.5
b = a
```

First, you assign `1.5` to the variable `a`. The next action assigns the value of `a` to the variable `b`. After this snippet, `a` is equal to `1.5`, and `b` is also `1.5`.

##### Input and output data

In our algorithms, we will typically avoid input and output. When you describe how an algorithm works, it is irrelevant how you get the data and what happens next. However, if we need some external data, we will use this:

```kotlin
a = input() // a is a number
b = input() // b is a string
```

Note that we don't care about the input format. Besides, `a` and `b` can be not only numbers or strings. You can also read a table or a sequence of values. However, make sure to add a comment for the reader.

In some tasks, we need to send data to the screen. We will use the following syntax for this task:

```kotlin
s = "Hello"
print(s)
```

Here, we assign a string `Hello` to the variable `s`. Then, in order to print it, we use the `print` keyword with the variable `s` in parentheses. Quite simple and natural.

##### Comments

Another important thing is how to write **comments**. A comment is not part of a program, and it's just a text you leave for yourself or other readers. We indicate comments with the `//`. For example:

```kotlin
// this is a comment
a = 10  // assigning 10 to the variable a
b = 42  // another assignment
```

You can write comments either on a separate line or right after statements.

##### Arithmetic operations

Almost any program requires processing **numerical data**. For that, we use arithmetic operations. In our pseudocode, they look like this:

```kotlin
a = 7
b = 2

sum = a + b        // addition, sum is equal to 9
dif = a - b        // subtraction, dif is equal to 5
 
prod = a * b       // multiplication, prod is equal to 14
quot = a / b       // division, quot is equal to 3.5
rem = a mod b      // modulo division, rem is equal to 1
quot_int = a div b // integer division, quot_int is equal to 3
```

To perform an arithmetic operation with two numbers, we write the first one on the left, the second one on the right, and the operator in between. If we want to assign the result to one of the variables, we use the following syntax:

```kotlin
a = 3
b = 5

a = a + b
a = a - b  
```

The same goes for multiplication and division.

##### Relational and logical operators

You can also use these relational operators in your pseudocode:

```kotlin
a == b // a equal to b
a != b // a is not equal to b
a < b  // a is less than b
a <= b // a is less than or equal to b
a > b  // a is greater than b
a >= b // a is greater than or equal to b
```

All these operations return `true` or `false`.

In case of a complex condition, you can use logical operators. `and` returns `true` only if both conditions are true. `or` returns `false` only if both conditions are false. `not` just inverts a value. It works this way:

```kotlin
true and true == true
true and false == false
false and true == false
false and false == false

true or true == true
true or false == true
false or true == true
false or false == false

not true == false
not false == true
```

##### Conditional statements

Another commonly used type of construction is conditional statements. Conditional statements are a crucial part of pseudocode and help guide the flow of your algorithm. Let's have a look at an example:

```kotlin
a = 3

if a < 5 then:
    print(a)
```

Here, we create a variable `a` and initialize it with a number `3`. Then, we check if `a` is less than `5` and if it is true, we print it to the screen. The syntax is clear: the `if` keyword is followed by a condition, and all following lines (that are indented deeper than the 'if' line) get executed only if the condition is true.

Proper indentation is essential to clearly define the scope of conditions and branches. Here, notice how the `print` statements are indented to clearly show which lines of code are associated with the `if` and `else` branches. Indentation helps maintain readability and ensures that the program's logic is accurately represented.

If you need to combine several conditions, you can use `and`, `or`, and `not` operators:

```kotlin
a = 10 
b = 20

if (a == 10 and b == 20) or not (a == 20 and b == 10) then:
    print(a)
    print(b)
```

To avoid ambiguity, we may need to wrap the conditions into parentheses, like in the example above.

Now, you can put an `else` branch after the `if` condition. This branch gets executed if the condition is `false`. Below you can see an example with the `if-else` construction:

```kotlin
a = -3

if a > 0 then:
    print("positive")
else:
    print("negative or zero") // prints this
```

Additionally, you can use an `elif` branch. The statement `elif` is just an abbreviation for `else if`. The program checks this condition if the first one is false:

```kotlin
a = -5

if a > 0 then:            // false
    print("positive")
elif a == 0 then:         // checks this 
    print("zero")
else:
    print("negative")     // output
```

Here, we check whether `a` is greater than 0, then we check whether it equals 0 using the `elif` branch, and finally we execute the last `else` branch.

When dealing with complex conditions or nesting multiple conditions, indentation becomes even more crucial to maintain clarity. Indented blocks help distinguish between different branches and their respective code blocks, making it easier to understand the logic of your pseudocode.

Below you can see the same code without the `elif` branch:

```kotlin
a = -5

if a > 0  then:               
    print("positive")
else:
    if a == 0  then:          
        print("zero")
    else:
        print("negative") 
```

##### Summary

In this topic, we started introducing one possible version of pseudocode. We considered such constructions as variables, assigning, arithmetic operations, and others. These basics are already enough to express some algorithmic ideas. However, they don't cover all the necessary concepts that some sophisticated algorithms might require. We will have a closer look at the rest of such constructions in the following topic.

#Pseudocode #Variables #Logical-operators #Conditions #Comments 

And now, let's have some practice!
[[Complex constructions in pseudocode]]
