#big-o-notation is the mathematical notation that helps analyse the algorithms to get an idea about how they might perform as the input grows. The image below explains Big-O in a simple way without using any fancy terminology.

Tells how well an algorithm performs as the input size grows.
This growth affects ours algorithm in two way:

**Space Complexity**: Algorithm consumes more memory.
**Time Complexity**: Algorithm consumes more time.
### Possible Complexities:
#### Linear Complexity: $O(n)$
Complexity grows linearly over time - higher the number of inputs, higher the complexity. Example: Looping over all the items of an array.

```java
for (int i = 0; i < n; i++){
	//Do something
}
```

![[Linear Complexity.png]]

---
#### Quadratic Complexity: $O(n^2)$
Complexity squares the number of inputs

```java
for (int i = 0; i < n; i++){
	for (int j = 0; j < n; j++){
		//Do something
	}
}
```

![[Quadratic Complexity.png]]
#### Constant Complexity: $O(1)$
No matter the input size, complexity remains the same. Example: accessing element at index from an array

```java
int elem = numbers[3];
```

![[Constant Complexity.png]]

---
#### Exponential Complexity: $O(2^n)$
Complexity doubles with each addition to the input dataset. Example: looping over all possible combinations of an array.

```java
public static int fibonacci(int n) {
	if (n == 0) {
		Return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2) 
	}
}
```

![[Exponential Complexity.png]]
#### Logarithmic Complexity: $O(log \ n)$

Complexity goes up linearly while the input goes up exponentially.
```java
for (int i = 1; i <= n; i = i * 2){
	System.out.println("Hi");
}
```

![[Logarithmic Complexity.png]]