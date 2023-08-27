Anyone who spends enough time with a computer or other digital device will likely come across mysterious records consisting of numbers and Latin letters, such as 10FEF. For people not familiar with it, they may seem like some cipher. What is behind these symbols? It turns out that these are simply numbers in **HEX** (**Hexadecimal Number System**). HEX is an alternative way to represent numbers.

HEX can also be written in lowercase (hex, an example of usage: [Wikipedia article](https://en.wikipedia.org/wiki/Hexadecimal)), but in this topic, we, for consistency, will use only uppercase HEX or, simply, hexadecimal.

##### Why HEX-a-decimal?

For years before the invention of computers, people used the **decimal (base-1010)** system for counting – because it's convenient when you have 1010 fingers and **1010** toes.

In computers, however, there are only two options: on and off, which created the idea of a **binary digit** or **bit**, for short.

For convenience, computer engineers tended to group bits. In the 1960s, they could group 33 bits at a time: a group of 33 bits is the base 2⋅2⋅2=2⋅2⋅2= a base-**88** number.

As computers got more powerful, people learned to cluster bits by 44 instead of 33. A group of 44 bits, written as one symbol, can have 1616 values instead of 88 – in other words, two times more than a group of 33 bits. So, this system is more compact than decimal, **octal** (base-**88**), and binary systems!

The only thing missing – a name for the new excellent number system.

A single number can have 1616 values. 16=10+616=10+6

Hex (from Greek) means 66, and decimal (from Latin, but that's OK) means 1010 (also, we are already used to the decimal number system and the word _decimal_). So… **HEX-a-decimal** looks like the perfect name!

##### Hexadecimal digits

The hexadecimal number system uses numbers 0,1…90,1…9 and the first six Latin letters: �,�,�,�,�,�A,B,C,D,E,F (corresponding to decimals 10,11…1510,11…15), as **hexadecimal digits**.

Yes, in some number systems, letters can be digits, too!

The table below compares how the numbers 0,1…150,1…15 are written in the binary, the decimal, and the HEX number systems:

|   |   |   |
|---|---|---|
|Binary|Decimal|**HEX**|
|0000200002​|010010​|016016​|
|0001200012​|110110​|116116​|
|0010200102​|210210​|216216​|
|0011200112​|310310​|316316​|
|0100201002​|410410​|416416​|
|0101201012​|510510​|516516​|
|0110201102​|610610​|616616​|
|0111201112​|710710​|716716​|
|1000210002​|810810​|816816​|
|1001210012​|910910​|916916​|
|1010210102​|10101010​|�16A16​|
|1011210112​|11101110​|�16B16​|
|1100211002​|12101210​|�16C16​|
|1101211012​|13101310​|�16D16​|
|1110211102​|14101410​|�16E16​|
|1111211112​|15101510​|�16F16​|

So, as you see, we start using letters when we run out of digits in HEX. How is the decimal number 1616 represented in HEX? The answer is 1010!

It's better to write numbers with their base as a lower index so you don't confuse decimal 10:101010:1010​ with hexadecimal 1010: 10161016​

You might have already noticed those subscripts in the table above. Other ways to avoid confusion include writing a HEX number with `h` after it or `0x` before it. For instance, `63h`, `0x63` and 63166316​ are three different ways to indicate that 6363 is a hexadecimal number.

##### Binary to HEX and vice versa

HEX is widely used in computer science because we can easily translate binary numbers into HEX. Moreover, HEX is a simplified way to represent binary numbers.

Remember: 1616 is 2424. That means we can split (starting from the right or, in other words, from the end) any binary number into a sequence of 44-digit binary numbers. These numbers are then mapped to HEX digits using the table above.

Let's try converting the number 1110011001110001211100110011100012​ to HEX:

11100110011100012=1110 0110 0111 00012=�6711611100110011100012​=1110 0110 0111 00012​=E67116​

Of course, everything is not as simple as it seems. If the length of our binary number is not divisible by 44 without remainder, then the leftmost number of our sequence will contain less than 44 digits:

1011002=10 11002= ???161011002​=10 11002​= ???16​

Did you notice that in a decimal system, adding any number of zeroes to the left of a decimal number (leading zeroes) doesn't change the number's value? 42=042=000042=000…0004242=042=000042=000…00042, and so on. Well, not only the decimal number system works like that:

In any base-n (n > 1) number system, adding any number of leading zeroes to the number does not change its value. Those zeroes are even called **non-significant zeroes.**

How can it help us? Remember that 102=00102102​=00102​, and, therefore:

1011002=10 11002=2�161011002​=10 11002​=2C16​

So, if the leftmost number in our split-sequence of 44-digit binary numbers contain less than 44 digits, we add leading zeroes to it until it is a 44-digit binary number and then match it, along with the rest in the sequence, to the corresponding HEX digit using the table. The resulting sequence is ready to be mapped to HEX digits using the table above.

Converting a hexadecimal number into a binary is even easier. Each HEX digit corresponds to a 44-digit binary sequence. All you have to do is to map digits to sequences with the table.

��16=1011 11102=101111102BE16​=1011 11102​=101111102​

If you need to convert a number from decimal to hexadecimal, you must divide it by 1616 multiple times during the calculation. The binary to hexadecimal conversion method is computationally simple and dividing by 22 is easier than dividing by 1616. Therefore, it is reasonable to convert in two steps using the conversion to binary number. Thus, to convert a number from decimal to hexadecimal, convert the decimal number to binary and then the resulting binary number to hexadecimal using the method above. For example, we reverse the number 4444 to binary and get 10110021011002​, and then convert 10110021011002​ to hexadecimal and get 2�162C16​. To convert back from hexadecimal to decimal**,** use the same idea. To achieve that, convert the hexadecimal number to binary and the resulting number to decimal.

##### Applications of HEX

We use the hexadecimal system to store error codes during the work of various software products. For example, in some operating system errors are encoded in this way. If you decode your error code, you'll find out the exact error that occurred. Besides, in URLs, [character codes](https://www.w3schools.com/tags/ref_urlencode.ASP) are written as hexadecimal pairs prefixed with `%`. You can see for yourself by googling a symbol `@`. The link in the address bar of your browser would look like this:

```no-highlight
https://www.google.com/search?q=%40
```

HEX numbers are also used for writing programs in low-level languages and in some encodings. For example, Unicode (a computer standard for symbol encoding) represents every symbol as a hexadecimal number. HEX numbers encode even color schemes. Thus, in **RGB** encoding, every color can be defined as 33 pairs of hexadecimal numbers, each for the **R**ed, **G**reen, or **B**lue color components, respectively.

##### Conclusion

As you can see, there are many ways to use HEX. In this topic, we have covered that:

- A HEX number is basically a 44-bit group with 1616 values that can include numbers from 00 to 99 and �,�,�,�,�,�A,B,C,D,E,F as hex-digits;
    
- Converting a HEX number into a binary requires splitting into a sequence of 44-digit binary numbers;
    
- In the real world, the application of HEX numbers is vast — from error codes to symbol encoding.
    

We hope that this information will be helpful to you in the future. But for now, let's turn to practice!

#Hexadecimal-Numbers 
[[Characters]]


