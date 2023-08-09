## ¿Qué es la estructura de datos [[Heap]]?
Un [[Heap]] es una Estructura de Datos basado en un [[Árbol Binario Completo]].

## Tipos de [[Heap]]: 
### Min Heap
El número total de comparaciones necesarias en el montón mínimo depende de la altura del árbol. La altura del árbol binario completo siempre es logarítmica; por lo tanto, la complejidad temporal también sería O(logn).

### Max Heap
El número total de comparaciones necesarias en el montón máximo depende de la altura del árbol. La altura del árbol binario completo siempre es logarítmica; por lo tanto, la complejidad temporal también sería O(logn).

![[Comparaciones Heap.png]]

## Propiedades de Heap

#### El Heap tiene las siguientes propiedades:

- **Árbol binario completo:** un árbol de Heap es un árbol binario completo, lo que significa que todos los niveles del árbol están completamente llenos, excepto posiblemente el último nivel, que se llena de izquierda a derecha. Esta propiedad garantiza que el árbol se represente de manera eficiente mediante una matriz.
- **Propiedad del Heap:** esta propiedad garantiza que el elemento mínimo (o máximo) esté siempre en la raíz del árbol según el tipo de montón.
- **Relación padre-hijo:** la relación entre un nodo padre en el índice **'i'** y sus hijos viene dada por las fórmulas: hijo izquierdo en el índice **2i+1** y hijo derecho en el índice **2i+2** para la indexación basada en 0 de los números de nodo.
- **Inserción y eliminación eficientes:** las operaciones de inserción y eliminación en los árboles del montón son eficientes. Los nuevos elementos se insertan en la siguiente posición disponible en el nivel inferior derecho y la propiedad del montón se restaura comparando el elemento con su padre e intercambiándolo si es necesario. La eliminación del elemento raíz implica reemplazarlo con el último elemento y amontonarlo.
- **Acceso eficiente a elementos extremos:** el elemento mínimo o máximo siempre está en la raíz del montón, lo que permite el acceso en tiempo constante.

### Heapifiy

Es el proceso de reorganizar los elementos para mantener la propiedad de la estructura de datos del montón. Se realiza cuando cierto nodo crea un desequilibrio en el montón debido a algunas operaciones en ese nodo. Se necesita **O (log N)** para equilibrar el árbol. 

- Para **max-heap,** se **equilibra** de tal manera que el elemento máximo es la raíz de ese árbol binario y 
- Para **min-heap,** se equilibra de tal manera que el elemento mínimo es la raíz de ese árbol binario.

### Inserción:

- Si insertamos un nuevo elemento en el montón, ya que estamos agregando un nuevo elemento en el montón, distorsionará las propiedades del montón, por lo que debemos realizar la operación **heapify** para que mantenga la propiedad del montón.
- Esta operación también requiere tiempo $O(logN)$

### Eliminar
- Si eliminamos el elemento del montón, siempre elimina el elemento raíz del árbol y lo reemplaza con el último elemento del árbol.
- Dado que eliminamos el elemento raíz del montón, distorsionará las propiedades del montón, por lo que debemos realizar operaciones de heapificación para que mantenga la propiedad del montón.
- Esta operación también requiere tiempo $O(logN)$
### GetMax o GetMin


https://www.geeksforgeeks.org/introduction-to-heap-data-structure-and-algorithm-tutorials/
https://www.geeksforgeeks.org/heap-data-structure/

O(1)
Array Original = [2,1,6,4,5,3,7,8,9,10]
Array = [1,2,3,4,5,6,7,8,9,10]