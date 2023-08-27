When the chief analyst of a huge corporation ponders a complex decision that will affect the entire company, they have to consider all possible consequences of the future solution. It works the same for computer science: before choosing an algorithm, we should contemplate a few of them, not with a help of financial advisors, but with Big O notation. However, in many cases you will have diverse sets of data that don't allow you to identify a particular method as the best for your problem. That's why it is obligatory to overview the best, the average, and the worst cases for a more accurate choice.

##### Definition

An algorithm has the **best case** performance under optimal conditions. It is the fastest time for an algorithm to finish. For example, the best case for searching for an element in a list from left to right happens when the desired element is the first one.

![The best case](https://ucarecdn.com/8086fbe7-2c37-4ffa-a6ea-57998eee34cc/)

When we analyze the best-case scenario, we calculate the **lower bound** of the execution time of an algorithm. The **worst case**, in turn, shows the **upper bound** of the time required for an algorithm to finish. The longest time with the worst possible input. While looking for the element 1 in the example below, we will have to perform 6 operations until finding the right one.

![The worst case](https://ucarecdn.com/67f1acc7-e3b3-46f2-a47c-ce7762bcd0dc/)

The **average case** is a little more complex concept. It is the amount of time used by the algorithm, averaged over all possible inputs. For an explanation of how to define the average case, let's look into an example. Say we have an abstract array with length �n:

![The average case](https://ucarecdn.com/d78ee78c-e64b-4be5-a1da-6c32f6c21ae3/)

The number of operations needed to find each element correlates with the element's position. Thus, for the first element only one check is required, while to find the second one you'll have to check the first and the second element, and so on.

![The number of operations needed to find  elements](https://ucarecdn.com/3128f94a-dcb2-4c01-8f74-87dbdb7e834a/)

Overall, we can see that there are from 1 to �n operations required for all possible cases. Now we can use just a little math to calculate the average:

1+2+...+��=�+12n1+2+...+n​=2n+1​In terms of Big O notation, it equals to �(�)O(n), since we don't consider the constants. Thus, we have calculated that the average time complexity for searching an element in an array is �(�)O(n).

##### Bias of best cases

Imagine that you have an automated mechanism at a factory that works with data of a certain format. In order to achieve the best performance, the mechanism's program should be maximally adjusted to the data. For example, if you only need to work with every third column in the data, then there is no need to check any others. A program built perfectly for certain data will show the best performance. However, if you want to sell your program to another factory, that factory's mechanism will not be able to use it. Such a program is very data-bound, so it becomes hard to transfer to other data.

Hence, development in general and the choice of algorithms in particular is rarely based on the best-case performance. Developers never design an algorithm based on the best-case scenario in order for the algorithm to be diverse and flexible.

##### Worst case is best for analysis

Studying the worst cases is convenient for efficiency analysis, since the efficiency of algorithms is usually compared based on the worst cases. Speaking of runtime, the worst-case time complexity corresponds to the longest running time needed for an algorithm to finish, given any input of size �n. It guarantees that the algorithm execution will not exceed the indicated period of time. The order of growth (e.g. quadratic, logarithmic) of the worst-case complexity is commonly used to compare the efficiency of two algorithms.

For instance, we can notice that the worst case of quick sort is much "worse" than the worst case of merge sort, because it grows more rapidly.

![Quick sort vs merge sort](https://ucarecdn.com/39fcb023-e6c2-4e1b-9518-4c14dac8de1d/)

When it comes to time complexity of an algorithm, it means exactly the worst case. Thus, when you hear: "Bubblesort complexity is �(�2)O(n2)", it is about the worst case of this algorithm.

##### Complexity of studying average cases

At first, it may seem pointless to study average cases if you can consider the worst. Firstly, working with the worst cases, we can take the execution time with a margin. Secondly, an assessment based on the worst case will definitely be stable and error-free. Hence, if computer scientists study average cases, does it mean that everyone needs it?

Yes, it does! There are three primary motivations for studying average-case complexity:

1. The inputs that lead to the worst case rarely appear in practice, so the worst case may not be indicative;
    
2. The analysis of average cases helps to develop new optimal algorithms in many areas;
    
3. Even if the worst cases of two algorithms are equivalent, their average cases may differ, so the comparison of the average cases will be more representative.
    

##### Applications

Different complexity estimates are used in choosing optimal algorithms for different problems and tasks:

- The average cases for **sorting algorithms** have been studied in detail. Thus, basing on the specifics of your data, you can choose the algorithm depending on the prevalence of "bad" or "good" data.
    
- For most problems, it makes sense to undertake average-case complexity analysis for a problem that is considered difficult in the worst case. In **cryptographic applications**, however, the opposite holds true: the worst-case complexity is irrelevant. Instead, we want a guarantee that the average-case complexity of every algorithm that "breaks" the cryptographic scheme is inefficient.
    
- **Hash tables** have very poor worst-case behaviors, but a well-written hash table of sufficient size will never give the worst case, statistically. The average number of operations performed follows an exponential function, and so the runtime of an operation is restricted.
    

Well, we already know who, what, when, where, why, but we are yet to fully understand the "how". In other words, we need a better understanding of how to choose between algorithms knowing their best, average, and worst cases. Let's take a closer look at an example, where you need to choose a sorting algorithm. Let's say we want to sort a few first digits of �=3,1415926535897932384626433832795...π=3,1415926535897932384626433832795...

If we consider �π as an array [3,1,4,1,5,9,2,6,5,3,5,8,9][3,1,4,1,5,9,2,6,5,3,5,8,9], then almost every sorting algorithm will be suitable, because the array of �π digits is not too big. However, what if we consider more digits? Below are listed the algorithms and their calculated complexity cases:

![Algorithms and cases of their calculated complexity](https://ucarecdn.com/0e9bdabe-bdd0-431a-800b-5d07e081d267/)

Considering even a small but unsorted array, we can't define it as the best case of a dataset. Hence, we can't consider the "Best case" column at all. Let's now look at the usual sequence of the first digits of �π. It would make sense to focus on the average cases of the presented sorting algorithms. Their time complexity is �(�⋅����)O(n⋅logn), �(�2)O(n2), and �(�⋅�!)O(n⋅n!). Since the last two are worse than �(�⋅����)O(n⋅logn), we can choose quick sort or merge sort with confidence.

But how to make the final decision? For this, we also need to examine the worst case. What if we need to sort the first 10,000 digits of �π? This is still not the worst case, because there are more than 10,000 digits in �π, but such an array will be very large, and we need to take it into account. Thus, we can conclude that the merge sort algorithm will be the best option for our problem.

##### Conclusion

Defining the best, the average and the worst cases for an algorithm you consider is obligatory because the result will directly influence the efficiency of your program. Usually, there is no need to think about the best case, since the algorithm you decide to implement won't always have as input the same set of data. However, understanding the upper bound of the algorithm is essential, because then you won't have doubts about fitting the algorithm's execution in a known limited time.

Studying average cases is not useless either, even if we know the worst-case time complexity. When knowing the average cases, the comparison between two algorithms becomes more accurate, since there are few situations in practice when the worst cases occur. Considering the average cases, thus, is more suited for real life and statistics.

Reviewing complexity cases is relevant for a lot of tasks, such as cryptography, sorting problems, data structures, and optimization. It is an essential core of studying algorithms, and in future topics related to specific algorithms you will always find their complexity analysis.
[[Data structures]]
