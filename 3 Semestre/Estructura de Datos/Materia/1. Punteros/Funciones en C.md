Las funciones en C son bloques de código que se pueden llamar desde otras partes del programa. Estas funciones pueden tener parámetros de entrada y de salida y se pueden usar para realizar tareas específicas de manera modular. Las funciones se definen con una declaración que indica el tipo de valor que devuelven y los parámetros que reciben. Luego, se implementa el código de la función en un bloque de código. Para llamar a una función desde otra parte del programa, simplemente se utiliza el nombre de la función seguido de los parámetros apropiados.

## Estructura de un Programa 
Comandos para el preprocesador (CPP)
#include 
#define 
Definición de [variables globales].
Prototipos de funciones (define el nombre de la función, el tipo que retorna y los tipos de los parámetros que recibe). 
Funciones (incluyendo la función [main()])

``` c
#include #define PI 3.14159
void main(){ 
	float a, radio;
	printf(“Ingrese radio del círculo > ”);
	scanf(“%f”, &radio);
	printf(“\n”);
	a = PI*radio*radio;
	printf(“Area del círculo %f \n”, a);
}
```



