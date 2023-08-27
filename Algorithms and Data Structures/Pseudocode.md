Different people use different programming languages, and that often becomes a problem. If you implement an algorithm you've written in one particular language, developers who don't know that language would hardly be able to understand it. To solve this problem, you can use **pseudocode**, a special artificial language that stands somewhere in between "human" language and code. Let's find out what it is and why we need it at all.

##### What is pseudocode?

Despite the variety of programming languages, they all share some common features. These include variables, loops, if-else blocks, and so on. In fact, if we remove all language-specific features from a program, we are left with its "logical core", which is the essence of any algorithm. By isolating this core, we are inevitably forced to resort to high-level constructs like "Do A until B happens", where both A and B can be quite complex operations. So, this essence of an algorithm may be called pseudocode**.**

If we decide to use pseudocode, we lose the opportunity to "explain" our instructions to a computer, which requires a significantly lower-level input. On the other hand, we gain a lot in the brevity of our solution and its comprehensibility to people, which is exactly what we strive for when we create pseudocode.

##### Why do we need pseudocode?

But why should we use an abstract language, not an existing one? Of course, we can use a popular and simple language like Python, and many programmers can understand this code. The main problem here is that in real code you need to work with memory, include libraries, solve some problems with visibility, variable types, and so on. Why do we need to think about this stuff if we want to understand the algorithm? An abstract language better describes the idea of an algorithm without complications.

Another obvious solution to the problem of universal description of an algorithm is to simply describe it in human language. However, this is also a bad idea. In this case, you have to read a lot of text and take some time to figure out what the code will look like. With pseudocode, you don't need to clarify the description, and it's easy to see the structure of the code.

##### Pseudocode example

Let's solve a standard task and find the maximum value in an array of positive numbers. The array is just an ordered bunch of numbers if you're not already familiar with the term.

First, let's look at a pseudocode function:

```java
function max(array):            // you receive an array somehow
    if len(array) == 0 then:     // compare the size of array with 0
        return -1               // empty array, no maximum

    max = 0                     // assume that the maximum is 0
    
    for i in [1, len(array)]:    // iterate over the array, 
                                 //array indices start at 1
        if array[i] > max then:  // if we find something greater,
            max = array[i]      //  we change the maximum
    
    return max                 // our result
```

We emphasize that in our pseudocode indexing starts with 1.

It looks pretty straightforward and gives a sense of the algorithm's internal logic.

Now let's look at the Python code that does basically the same:

```python
n = int(input())                # the size of array 
array = []                      # empty array
for i in range(n):              # do something n times
    array.append(int(input()))  # add element to the array

if n == 0:                      # empty array
    print(-1)

else:
    max = 0                     # current maximum

    for i in array:             # iterate over the array
        if i > max:         
            max = i             # update the maximum

    print(max)
```

As you can see, with pseudocode we can omit reading and storing values. We can focus on describing only the algorithm's logic.

Pseudocode has a lot of variations and dialects. In this course, we will use a specific version of pseudocode. We will talk more about our dialect in the following topics. For now, it's important that you know how to read and understand pseudocode, not how to write it correctly.

##### Conclusion

Pseudocode is widely used to communicate the essence of an algorithm to others while ignoring the details of its implementation. With pseudocode, you can easily communicate ideas and concepts to other developers, no matter what language they write in. Pseudocode has many dialects, but in this course we will use a specific version, which we'll discuss later.



[[Pseudocode basics]]
