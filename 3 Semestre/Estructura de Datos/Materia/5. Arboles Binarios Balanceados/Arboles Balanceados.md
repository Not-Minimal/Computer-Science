## Resumen
El texto habla sobre árboles binarios balanceados y cómo se pueden mantener balanceados a través de rotaciones. También se menciona que la inserción y eliminación de nodos puede afectar el balance del árbol, y se describe un algoritmo para mantener el balance después de la inserción. Además, se discuten los diferentes tipos de árboles balanceados y sus propiedades.

## Esquema:
1. Introducción
Definición de árboles binarios balanceados
Se define un árbol binario balanceado como aquel en el que las alturas de los subárboles izquierdo y derecho de cualquier nodo difieren en un máximo de uno. Importancia de mantener los árboles balanceados
La importancia de mantener los árboles binarios balanceados radica en que permite que las operaciones de búsqueda, inserción y eliminación tengan un tiempo de ejecución óptimo y predecible, lo que hace que la estructura de datos sea eficiente y escalable en la práctica. Si un árbol binario no está balanceado, puede tener una altura mayor de lo necesario y, por lo tanto, aumentar el tiempo de ejecución de las operaciones.
2. Mantenimiento de árboles balanceados
Cómo se afecta el balance del árbol durante la inserción y eliminación de nodos
La importancia de mantener los árboles binarios balanceados radica en que permite que las operaciones de búsqueda, inserción y eliminación tengan un tiempo de ejecución óptimo y predecible, lo que hace que la estructura de datos sea eficiente y escalable en la práctica. Si un árbol binario no está balanceado, puede tener una altura mayor de lo necesario y, por lo tanto, aumentar el tiempo de ejecución de las operaciones.
Algoritmo para mantener el balance después de la inserción
![[Arbol Balanceado.png]]
Rotación a la derecha
![[Rotación Derecha.png]]
``` c
void rightRotation(struct node **p) {
    struct node *q = (*p)->right;
    (*p)->right = q->left;
    q->left = *p;
    *p = q;
}
```

Rotación a la izquierda
![[Rotación Izquierda.png]]
``` c
void leftRotation(struct node **p) {
    struct node *q = (*p)->left;
    (*p)->left = q->right;
    q->right = *p;
    *p = q;
}

```
En ambas funciones, `p` es un puntero a un puntero a un nodo. La rotación a la derecha se realiza cuando el subárbol izquierdo tiene mayor altura que el subárbol derecho, y la rotación a la izquierda se realiza cuando el subárbol derecho tiene mayor altura que el subárbol izquierdo.
1. Tipos de árboles balanceados
	- Árboles de altura balanceada
	- Árboles de pesos balanceados
	- Árboles balanceados de Tarjan
2. Inserción y eliminación en árboles balanceados
	- Complejidad de la eliminación en árboles balanceados
		- La complejidad de la eliminación en árboles balanceados depende del tipo de árbol utilizado y de la implementación específica. En general, la eliminación en árboles balanceados puede ser más compleja que la inserción, ya que la eliminación puede desequilibrar el árbol y requerir la realización de rotaciones para volver a balancearlo. La complejidad también puede depender de la posición del nodo que se eliminará y de la cantidad de hijos que tenga. Sin embargo, en la mayoría de los casos, la eliminación en árboles balanceados tiene una complejidad de tiempo de O(log n), donde n es el número de nodos en el árbol.
3. Conclusiones
	- Importancia de los árboles binarios balanceados en la práctica
		- Los árboles binarios balanceados son importantes en la práctica porque permiten una búsqueda, inserción y eliminación eficientes de elementos en una estructura de datos. Al mantener el balance del árbol, se garantiza que todas las operaciones tengan una complejidad logarítmica en el peor de los casos, lo que los hace ideales para aplicaciones que requieren un alto rendimiento, como bases de datos, compiladores y sistemas operativos, entre otros. Además, existen diferentes tipos de árboles balanceados que se adaptan a diferentes necesidades y restricciones de espacio y tiempo.
	- Ventajas de los diferentes tipos de árboles balanceados
		- Búsqueda eficiente: Los árboles balanceados permiten realizar búsquedas en tiempo logarítmico (O(log n)), lo cual es mucho más eficiente que la búsqueda lineal en árboles binarios no balanceados.
		- Inserción y eliminación eficientes: Los árboles balanceados permiten realizar inserciones y eliminaciones en tiempo logarítmico (O(log n)), lo cual es mucho más eficiente que la inserción y eliminación en árboles binarios no balanceados.
		- Distribución equilibrada de los nodos: Los árboles balanceados tienen una distribución equilibrada de los nodos, lo cual significa que la altura del árbol es lo más pequeña posible. Esto permite que las operaciones de búsqueda, inserción y eliminación sean más eficientes.
		- Adaptable: Los árboles balanceados son adaptables a cambios en la estructura de los datos. Esto significa que si se agregan o eliminan elementos del árbol, éste se adapta automáticamente para mantener su balance y eficiencia.

### Código en C
``` c
// Definición de estructura de nodo
struct node { int key; struct node *left, *right; int balance; };

// Función para crear un nuevo nodo
struct node* newNode(int key) { struct node* node = (struct node*)malloc(sizeof(struct node)); node->key = key; node->left = NULL; node->right = NULL; node->balance = 0; return(node); }

// Función para realizar una rotación a la derecha
void rightRotation(struct node **p) { struct node *q = (*p)->right; (*p)->right = q->left; q->left = *p; *p = q; }

// Función para realizar una rotación a la izquierda
void leftRotation(struct node **p) { struct node *q = (*p)->left; (*p)->left = q->right; q->right = *p; *p = q; }

// Función para insertar un nodo en un árbol binario balanceado
struct node* insert(struct node* node, int key) { if (node == NULL) { return(newNode(key)); }

if (key < node->key) {
    node->left = insert(node->left, key);
} else if (key > node->key) {
    node->right = insert(node->right, key);
} else {
    return node;
}
// Función para calcular la altura de un nodo
int height(struct node *node) { if (node == NULL) { return -1; } else { return 1 + max(height(node->left), height(node->right)); } }}

int balance = height(node->left) - height(node->right);

if (balance > 1 && key < node->left->key) {
    rightRotation(&node);
} else if (balance < -1 && key > node->right->key) {
    leftRotation(&node);
} else if (balance > 1 && key > node->left->key) {
    leftRotation(&node->left);
    rightRotation(&node);
} else if (balance < -1 && key < node->right->key) {
    rightRotation(&node->right);
    leftRotation(&node);
}

node->balance = height(node->left) - height(node->right);

return node;

```
## Seudocódigo mejorado:

### Algoritmo insertar (nodo, clave)
1. Si el nodo es nulo 
	* Crear un nuevo nodo con la clave y retornarlo
2. Si la clave es menor que la clave del nodo 
	* Insertar la clave en el subárbol izquierdo
3. Si la clave es mayor que la clave del nodo
	* Insertar la clave en el subárbol derecho
4. Calcular el balance del nodo
5. Si el balance es mayor que 1 y la clave es menor que la clave del subárbol izquierdo
	* Realizar una rotación a la derecha
6. Si el balance es menor que -1 y la clave es mayor que la clave del subárbol derecho
	* Realizar una rotación a la izquierda
7. Si el balance es mayor que 1 y la clave es mayor que la clave del subárbol izquierdo 
	* Realizar una rotación a la izquierda b. Realizar una rotación a la derecha
8. Si el balance es menor que -1 y la clave es menor que la clave del subárbol derecho
	* Realizar una rotación a la derecha
	* Realizar una rotación a la izquierda
1. Actualizar el balance del nodo
2. Retornar el nodo
Este seudocódigo describe el algoritmo para insertar un nuevo nodo en un árbol binario balanceado y mantener su balance a través de rotaciones. El algoritmo incluye la creación de un nuevo nodo, la inserción de la clave en el subárbol izquierdo o derecho, el cálculo del balance del nodo y la realización de rotaciones según sea necesario para mantener el balance. El algoritmo también actualiza el balance del nodo y retorna el nodo actualizado.