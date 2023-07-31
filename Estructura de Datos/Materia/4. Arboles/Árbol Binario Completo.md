https://www.geeksforgeeks.org/complete-binary-tree/

### ¿Qué es un [[Árbol Binario]] completo?

> Un [[árbol binario]] completo es un árbol binario con cero o dos nodos secundarios para cada nodo. 

Un árbol binario completo, por otro lado, no tiene ningún nodo que tenga un solo nodo secundario.

![](https://media.geeksforgeeks.org/wp-content/uploads/20221229135813/full.png)

### Teorema del árbol binario completo:

Sea T un árbol binario completo no vacío. Entonces:

- Si T tiene **I** nodos internos, el número de hojas es **L = I + 1** .

Esto se conoce como el teorema del árbol binario completo.

**Hechos derivados del teorema:**

- Si T tiene I nodos internos, el número total de nodos es **N = 2I + 1** .
- Si T tiene un total de N nodos, el número de nodos internos es **I = (N – 1)/2** .
- Si T tiene un total de N nodos, el número de hojas es **L = (N + 1)/2.**
- Si T tiene L hojas, el número total de nodos es **N = 2L – 1** .
- Si T tiene L hojas, el número de nodos internos es **I = L – 1** . 

#### Algunas otras propiedades:

- Hay un máximo de **2k** nodos en el nivel **k** para cada k >= 0.
- El árbol binario con niveles **λ** tiene un máximo de **2 λ -1** nodos.
- El árbol binario con N nodos tiene el número de niveles al menos **[log (N + 1)]** .
- El árbol binario con L hojas tiene el número de hojas al menos **[log L] + 1.**