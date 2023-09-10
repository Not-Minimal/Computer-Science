Los métodos de resolución recursiva, como la "Substitución Forward" y la "Substitución Backward", son enfoques utilizados en matemáticas y análisis de algoritmos para resolver recurrencias, que son ecuaciones que describen la relación entre un problema grande y sus subproblemas más pequeños.

### Substitución Forward

La Substitución Forward es un método que se utiliza para resolver recurrencias mediante la conjetura de una solución y luego demostrar la validez de esa conjetura utilizando una técnica inductiva. A menudo se utiliza para recurrencias no homogéneas.

El proceso típico de Substitución Forward implica los siguientes pasos:

1. **Conjetura de la solución:** Supongamos una solución para la recurrencia y especifiquemos una función que creemos que satisface la recurrencia.    
2. **Demostración inductiva:** Usamos la inducción matemática para demostrar que nuestra conjetura es correcta. Esto implica demostrar que la solución propuesta satisface la recurrencia para algún valor base (generalmente el caso base) y luego demostrar que si es válida para un valor dado, también lo es para el siguiente.

3. **Obtener la solución general:** Una vez que hemos demostrado que nuestra conjetura es correcta, obtenemos la solución general de la recurrencia.

### Substitución Backward

La Substitución Backward, a veces llamada "Recurrencia hacia atrás" o "Sustitución hacia atrás", es un método que también se utiliza para resolver recurrencias, pero funciona de manera inversa a la Substitución Forward.

El proceso típico de Substitución Backward implica los siguientes pasos:

1. **Comenzar con la solución general:** Iniciamos con la solución general de la recurrencia.
2. **Sustitución en la recurrencia original:** Sustituimos la solución general en la recurrencia original para obtener una nueva ecuación.
3. **Resolver la nueva ecuación:** Resolvemos la nueva ecuación para determinar los coeficientes desconocidos que aparecen en la solución general.
4. **Obtener la solución final:** Una vez que se han determinado los coeficientes, obtenemos la solución final de la recurrencia.

### Ejemplo

Un ejemplo común de recurrencia que se puede resolver utilizando estos métodos es la recurrencia de Fibonacci:

``` java
F(n) = F(n-1) + F(n-2)
```

Para resolver esta recurrencia, se pueden aplicar tanto la Substitución Forward como la Substitución Backward.

- **Substitución Forward:** Comenzamos con suposiciones sobre F(0) y F(1), y luego demostramos que estas suposiciones son correctas para todos los valores posteriores de n.
- **Substitución Backward:** Partimos de la solución general de la recurrencia de Fibonacci, que involucra una fórmula con coeficientes desconocidos, y utilizamos las condiciones iniciales (F(0) y F(1)) para determinar los valores de esos coeficientes.

Estos métodos son útiles para resolver recurrencias en el análisis de algoritmos y en otros contextos matemáticos donde las relaciones recursivas desempeñan un papel importante.

[[Métodos de Resolución Recursiva - Reemplazo o Substitución]]
