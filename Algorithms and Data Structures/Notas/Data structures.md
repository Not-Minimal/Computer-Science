Let's face it: you can't ignore algorithms if you're hoping to write an innovative and efficient program. However, algorithms are not the only thing you need: besides the question of processing, there's also the question of data storage, including how much space your program takes. Here data structures come in handy, so let's learn some essential information about them.

##### What data structures are

**Data structures** are a way of organizing data and providing convenient access to it. Rather abstract? Okay, let's look at a more specific example.

![Data structures](https://ucarecdn.com/d7efbf03-1eb6-4371-9ec0-c9894c625946/)

Imagine that we have a variety of soda cans and bottles that we would like to organize. We could put them all in a random bag or build a can tower, but this way, it won't be easy to fish out a specific type of soda or even count the items. After a bit of pondering, we decided to put them in a vending machine. This vending machine will be a _structure_ of beverages: it has a specific order, and you can easily observe the tins and bottles, count them, access one or another, as well as understand the capacity of the machine and perform many other operations.

Now let's return to the formal definition and try again: the term **data structure** refers to a collection of elements containing data, as well as relationships between them and data operations. As a rule, data structures have two types of **operations**: **internal**, supporting data organization, and **external**, available to users for storing, retrieving, or modifying data. There are several common data structures: an array, a linked list, a hash table, and a whole variety of trees (binary search tree, heap, red-black tree, B-tree, etc.). You can read about all of them in detail on our platform, but don't hurry: let's get to know the basics first.

##### The role of data structures

Now, why is it so important to have all these kinds of data structures? We've mentioned that organizing soda cans in a vending machine instead of a can tower is much more efficient, as it is far easier for us to perform any actions on these cans. What does this mean formally? We are already familiar with Big O and the time complexity. In a nutshell, different data structures have different time complexities for performing the same external operations in a set of data. This is why it is essential to consider all the possible structures and choose the most efficient among them. Let's illustrate what we've said above in an example.

Later on, you will learn about an important shortest path algorithm: Dijkstra's algorithm. It has two main implementations: using an array or a heap as a data structure. In the first case, Dijkstra's algorithm time complexity will be �(�2+�)O(n2+m), whereas if we use the second type of data structure, our algorithm will work on �((�+�)log⁡�)O((n+m)logn). Just for now, we suggest ignoring the names and the unfamiliar terms _—_ the idea is to simply illustrate how using different data structures can lead to different time complexities of the same algorithm. There is a famous book entitled _Algorithms + Data Structures = Programs_, written by the Swiss scientist Niklaus Wirth in 1976. This book covers some of the fundamental topics of computer programming; its title shows quite clearly just how important it is for a programmer to understand data structures.

##### Abstract data type

There is another term: **abstract data type (ADT)**, which is sometimes used as a synonym for data structures, though this is not entirely correct. Let's try to figure out what ADT is by considering yet another example.

![Abstract data type](https://ucarecdn.com/3c9a9a24-307d-4be6-9d02-df966fe5abc7/-/crop/270x556/56,29/-/preview/)

We hope you don't doubt that this above is a vending machine. The thing is that you can't see what exactly it contains on the inside. Now, you probably know how to interact with vending machines: you insert a coin and get your drink. If you are just thirsty, this information is more than enough. It doesn't matter to you how the machine works from the inside, how it organizes the payment, the beverages, or how many beverages there are; you only need to know how to get your soda. Hence, this is an **abstract** vending machine for you. For those who would like a formal explanation of this concept, we should say that in programming, such techniques of "covering vending machines" are known as:

- **Abstraction** — a concept in object-oriented programming; it "shows" only essential attributes and "hides" unnecessary information, a.k.a. abstract classes or interfaces;
    
- **Encapsulation** — is a method of making a complex system easier to handle for end users. Formally speaking, encapsulation is the process of combining data and code, operating this data into a single entity. The user needn't worry about the internal details and complexities of the system.
    

In general, an **Abstract Data Type** is a mathematical concept, a simpler and more abstract way to view the data structure as a whole. It is a data type that is defined by a set of values and a set of possible external operations (behavior) from the user's point of view_._ There are some common ADTs that every trained programmer should know: stack, queue_,_ and so on_._ As a rule, modern programming languages like Java, Python, and C++ provide these ADTs in standard libraries so that we can use them in our programs.

##### Comparison

Let's get back to our vending machine parable once again to realize the difference between data structures (sometimes referred to as **CDT**s – concrete data types) and ADTs.

There are different ways to create a simple vending machine that performs a single function of exchanging a coin for a drink. We can keep the soda in a huge bottle; we can put it in different bottles in a heap inside the storage; we can organize the bottles and tins in one big row or ten different rows. All these arrangements can be called the implementations of a simple abstract vending machine. If you want to create a more complicated mechanism with several functions, for example, "choose a type of soda, then insert a coin" or "choose a drink or an ice cream", some of the previous implementations won't work.

![Comparison](https://ucarecdn.com/456c1a91-2b65-404b-9178-f297d74b4634/)

Data structures are exact representations of data, but ADTs are different. They reflect the point of view of an implementer, not a user. A data structure is an implementation of an ADT's functions, a way to look more closely at some specific operations and components of the structure. A good example of an abstract data type is an integer. We know what values integers can have and what operations they support (addition, subtraction, multiplication, and so on). At the machine level, they can be represented by a sequence of zeros and ones, but we usually don't care. It is enough for us to know that what we have is an integer, and not, say, a floating-point number. For those who are familiar with OOP, `java.util.Map`, for example, plays the role of an ADT, whereas `HashMap` or `LinkedHashMap` can be interpreted as data structures.

In some sense, an ADT defines the logical form of the data type, while a data structure implements the physical form of it.

##### Conclusion

All in all, data structures are a way of organizing data and providing convenient access to it. They have two types of operations: internal and external. There are many types of data structures, each with its own time complexities, features, and limitations. Another closely related concept to keep in mind is an abstract data type. In short, an ADT is a way to view the data structure, seeing its functions and general behavior, whereas the data structure itself is the implementation of these functions.

Now it's time to conclude this topic. We realize that abstract stuff like this may often be pretty difficult to process. For now, you need to understand the main idea behind data structures and the important role they play in computer science. It is okay if you don't understand the formal definition of an ADT or a CDT yet in every detail. You will get a chance to get back to it later. So, are you hungry for more? Dozens of topics on specific data structures are waiting for you on our platform.
[[Fixed-size array]]

