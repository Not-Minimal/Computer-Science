El método de resolución de recurrencias por reemplazo o substitución es una técnica utilizada en el análisis de algoritmos para resolver ecuaciones de recurrencia. Este método se basa en la suposición de una solución y luego se verifica y demuestra la validez de esta suposición mediante la inducción matemática.

### Pasos para la Resolución por Reemplazo

El proceso típico de resolución de recurrencias por reemplazo implica los siguientes pasos:

1. **Conjetura de la solución:** En este paso, suponemos una solución para la ecuación de recurrencia. La suposición se hace en función de una fórmula o una expresión que creemos que describe la relación entre los términos de la secuencia.
    
2. **Demostración inductiva:** Utilizamos el principio de inducción matemática para demostrar que nuestra conjetura es correcta. Esto implica dos partes:
    
    - **Caso base:** Demostramos que la conjetura es cierta para algún valor inicial (generalmente el caso base de la recurrencia).
    - **Paso inductivo:** Demostramos que si la conjetura es cierta para un valor dado, entonces también lo es para el siguiente valor en la secuencia.
3. **Obtener la solución general:** Una vez que hemos demostrado que nuestra conjetura es correcta, podemos obtener la solución general de la ecuación de recurrencia.
    

### Ejemplo de Resolución por Reemplazo

Un ejemplo común de recurrencia que se puede resolver utilizando el método de reemplazo es la recurrencia de Fibonacci:

``` java
F(n) = F(n-1) + F(n-2)
```

Para resolver esta recurrencia, podemos utilizar el método de reemplazo de la siguiente manera:

1. **Conjetura de la solución:** Suponemos que la solución de la recurrencia tiene la forma de una fórmula exponencial, es decir, que F(n) = a^n para algún valor de "a."
    
2. **Demostración inductiva:** Utilizamos la inducción matemática para demostrar que esta conjetura es correcta. Demostramos que es válida para los casos base F(0) y F(1). Luego, asumimos que es cierta para algún valor k y demostramos que también lo es para k+1 utilizando la recurrencia original.
    
3. **Obtener la solución general:** Después de demostrar que nuestra conjetura es correcta, podemos establecer una relación explícita para F(n), que en este caso es la fórmula de Fibonacci:
    

scssCopy code

``` java
F(n) = [((1 + √5) / 2)^n - ((1 - √5) / 2)^n] / √5
```

Este es un ejemplo de cómo el método de reemplazo se puede utilizar para resolver una recurrencia y obtener su solución general.

El método de reemplazo es una herramienta poderosa en el análisis de algoritmos y en la modelización de fenómenos recurrentes en matemáticas y ciencias de la computación.
[[Métodos de Resolución Recursiva - Recurrencias Telescópicas]]
