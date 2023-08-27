##### What is NPE

Java provides a special type of value called `null` to indicate that no actual value is assigned to a reference variable. This value may cause one of the most frequent exceptions called `NullPointerException` (often referred to as **NPE** for short). It occurs when a program attempts to use a variable with the `null` value. To avoid an **NPE**, the programmer must ensure that the objects are initialized before their use.

Here is one interesting fact about the concept of a `null` reference and errors associated with it. Not only is it not unique for Java, but in 2009, Tony Hoare, a British Computer Scientist who invented the concept of `null` reference, described it as a **"billion-dollar mistake"**:

I call it my billion-dollar mistake. It was the invention of the null reference in 1965. At that time, I was designing the first comprehensive type system for references in an object-oriented language ([ALGOL W](https://en.wikipedia.org/wiki/ALGOL_W)). My goal was to ensure that all use of references should be absolutely safe, with checking performed automatically by the compiler. But I couldn't resist the temptation to put in a null reference, simply because it was so easy to implement. This has led to innumerable errors, vulnerabilities, and system crashes, which have probably caused a billion dollars of pain and damage in the last forty years.

Let's look at some situations where an **NPE** might occur and find out how to avoid it.

##### NPE when invoking a method

Since `String` is a regular reference type, its variables can be `null`. If we invoke a method or apply an operation to such a variable, the code throws an **NPE**.

In the following code, an uninitialized variable of `String` is created and then the method `length()` is invoked. The code throws an **NPE** because the object `someString` is actually `null`.

```java
String someString = null; // a reference type can be null

int size = someString.length(); // NullPointerException (NPE)
```

The same exception will occur if we use uninitialized variables of any other reference type, not only `String`.

To avoid the exception we should explicitly check whether a string is `null` or not and depending on the result perform different code. It's similar to the default value.

```java
int size = someString != null ? someString.length() : 0; // if the string is null, the size is 0
```

In the code above, when the given string is `null`, the size is set as 0. This way we won't get any exceptions.

##### Comparing strings

A very common situation occurs when we try to compare a `String` variable and a string literal.

```java
String str = null;

if (str.equals("abc")) { // it throws an NPE
    System.out.println("The same");
}
```

To avoid an **NPE** here we can use Yoda notation and call the equals method on the literal rather than the object:

```java
String str = null;

if ("abc".equals(str)) { // no NPE here
    System.out.println("The same");
}
```

But what if we have two variables of the type `String`? Any of them may happen to be `null`. In this case, we can use the special auxiliary class `java.util.Objects`.

```java
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

[[Parameters And Options]]
