Las recurrencias telescópicas son un tipo especial de ecuaciones de recurrencia que se caracterizan por tener términos que se "cancelan" entre sí cuando se expanden. Este tipo de recurrencias suele simplificarse considerablemente mediante la suma y resta de términos, lo que facilita su resolución.

### Características de las Recurrencias Telescópicas

Las recurrencias telescópicas se caracterizan por las siguientes características:

1. **Cancelación de Términos:** En una recurrencia telescópica, cuando se expande la ecuación, muchos términos se cancelan entre sí, dejando solo algunos términos finales.
    
2. **Simplificación de Sumas y Restas:** Las recurrencias telescópicas a menudo involucran sumas y restas de términos que se simplifican al agruparlos adecuadamente.
    
3. **Términos Iniciales y Finales Conocidos:** Por lo general, las recurrencias telescópicas tienen términos iniciales y finales conocidos, lo que facilita la resolución.
    

### Ejemplo de Resolución de Recurrencias Telescópicas

Un ejemplo clásico de recurrencia telescópica es la suma de fracciones parciales de una serie. Supongamos que tenemos la siguiente recurrencia:

scssCopy code

``` java
S(n) = 1/2 - 1/3 + 1/4 - 1/5 + 1/6 - ... + (-1)^(n+1) * 1/n
```

Esta es una recurrencia telescópica porque al expandirla, los términos se cancelan entre sí:

scssCopy code

``` java
S(n) = (1/2 - 1/3) + (1/4 - 1/5) + (1/6 - 1/7) + ... + ((-1)^(n+1) * 1/n)
```

Podemos ver que la mayoría de los términos se cancelan, y solo quedan dos términos finales:

scssCopy code

```java
S(n) = (1/2 - 1/3) - ((-1)^(n+1) * 1/n)
```

La resolución de esta recurrencia telescópica se simplifica considerablemente, y podemos encontrar la solución general:

scssCopy code

```java
S(n) = 1/6 - ((-1)^(n+1) * 1/n)
```

### Utilidad de las Recurrencias Telescópicas

Las recurrencias telescópicas son útiles en el análisis de algoritmos y en diversas ramas de las matemáticas, ya que permiten simplificar ecuaciones recursivas y encontrar soluciones de manera más eficiente. Son especialmente comunes cuando se trabaja con sumas y productos en series matemáticas o al analizar el rendimiento de algoritmos que involucran dividir y conquistar. La habilidad para reconocer y resolver recurrencias telescópicas es una valiosa herramienta en el arsenal de un analista de algoritmos y matemático.
[[Métodos de Resolución Recursiva - Cambio de Variable (NEW)]]
