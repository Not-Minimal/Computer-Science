The `char` type is used to represent letters (both uppercase and lowercase), digits, and other symbols. Each character is just a symbol enclosed in single quotes.

```java
char lowerCaseLetter = 'a';
char upperCaseLetter = 'Q';
char number = '1';
char space = ' ';
char dollar = '$';
```

This type can represent all characters in all languages as well as some special and computer symbols. It corresponds to the **Unicode** (UTF-16) format. Unicode is a computer encoding methodology that assigns a unique number for every character. It doesn't matter what language, or computer platform it's on. This is important in a global, networked world, and for computer systems that must accommodate multiple languages and special characters. Unicode truly unifies all of these into a single standard.

##### Initializing characters with codes

A character can also be created using its hexadecimal code in [the Unicode table](https://unicode-table.com/en/). The code starts with `\u`.

```java
char ch = '\u0040'; // it represents '@'
System.out.println(ch); // @
```

Although we use a sequence of characters to represent such a code, the code represents exactly one character.

As an example, capital Latin letters have hexadecimal codes from `'\u0041'` to `'\u005A'`, and small Latin letters have codes from `'\u0061'` to `'\u007A'`.

The `char` type has a minimum value encoded as `'\u0000'` and the maximum value encoded as `'\uffff'`.

It is also possible to initialize a char with a positive integer number.

```java
char ch = 64;
System.out.println(ch); // @
```

The number `64` just corresponds to the Unicode hexadecimal code `'\u0040'`.

Any `char` variable may be considered as an unsigned integer value in the range from 0 to 65535.

##### Retrieving subsequent characters

There are two operators for adding (`+`) and subtracting (`-`) integer numbers in order to get the next and previous character according to the Unicode order.

```java
char ch = 'b';
ch += 1; // 'c'
ch -= 2; // 'a'
```

It is also possible to add or subtract two characters.

```java
char ch = 'b';
ch += 'a';
ch -= 'b';
System.out.println(ch); // prints 'a' without quotes
```

Actually, these operations manipulate with codes of characters, `'b'` has the next code after `'a'`.

It is possible to use increment (`++`) and decrement (`--`) operators in prefix and postfix forms.

```java
char ch = 'A';
ch += 10;
System.out.println(ch);   // 'K'
System.out.println(++ch); // 'L'
System.out.println(++ch); // 'M'
System.out.println(--ch); // 'L'
```

##### Escape sequences

There are some special characters starting with a backslash `\` which are known as the escape or control sequences. They do not have corresponding symbols and cannot be found on a keyboard. To represent such characters we use a pair of regular symbols. In a program, this pair will be considered as exactly one character with the appropriate code.

- `'\n'` is the newline character;
    
- `'\t'` is the tab character;
    
- `'\r'` is the carriage return character;
    
- `'\\'` is the backslash character itself;
    
- `'\''` is the single quote mark;
    
- `'\"'` is the double quote mark.
    

Here are several examples:

```java
System.out.print('\t'); // makes a tab
System.out.print('a');  // prints 'a'
System.out.print('\n'); // goes to the new line
System.out.print('c');  // prints 'c'
```

This code prints:

```java
  a
c
```

There is also a character to represent a single space `' '`. It is just a regular character, not an escape sequence.

#Characters 

[[String]]


