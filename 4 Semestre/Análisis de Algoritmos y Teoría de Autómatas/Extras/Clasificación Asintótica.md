La clasificación asintótica es una técnica fundamental en el análisis de algoritmos y en la evaluación del rendimiento de los mismos. Esta técnica se utiliza para describir el comportamiento de un algoritmo en términos de cómo su tiempo de ejecución o uso de recursos crece en relación con el tamaño de entrada, a medida que el tamaño de entrada se vuelve muy grande.

### 1. Notación O (Grande) - O(n)

La notación "O grande" (Big O) se utiliza para describir el límite superior o cota superior asintótica del tiempo de ejecución de un algoritmo en el peor caso. Si decimos que el tiempo de ejecución de un algoritmo es "O(n)," esto significa que el tiempo de ejecución crece a lo sumo de manera lineal con el tamaño de entrada n, en el peor de los casos. En otras palabras, el tiempo de ejecución está acotado superiormente por una función lineal en n.

**Ejemplo:** Un algoritmo de búsqueda lineal en una lista no ordenada tiene una complejidad O(n), ya que, en el peor caso, puede tener que examinar todos los n elementos de la lista.

### 2. Notación Ω (Omega) - Ω(n)

La notación "Omega" se utiliza para describir el límite inferior o cota inferior asintótica del tiempo de ejecución de un algoritmo en el mejor caso. Si decimos que el tiempo de ejecución de un algoritmo es "Ω(n)," esto significa que el tiempo de ejecución crece al menos de manera lineal con el tamaño de entrada n, en el mejor de los casos.

**Ejemplo:** Un algoritmo de búsqueda lineal en una lista ordenada tiene una complejidad Ω(n), ya que, en el mejor caso, podría encontrar el elemento deseado en la primera comparación.

### 3. Notación Θ (Theta) - Θ(n)

La notación "Theta" se utiliza para describir un límite superior e inferior asintótico. Si decimos que el tiempo de ejecución de un algoritmo es "Θ(n)," esto significa que el tiempo de ejecución crece de manera lineal con el tamaño de entrada n, en el mejor y peor caso. En otras palabras, el tiempo de ejecución está acotado tanto superior como inferiormente por una función lineal en n.

**Ejemplo:** El algoritmo de ordenamiento por inserción tiene una complejidad Θ(n^2) en el peor caso, lo que significa que tanto el mejor como el peor caso están acotados por n^2.

La clasificación asintótica es esencial en el análisis de algoritmos, ya que nos permite comprender cómo se comportan los algoritmos a medida que los tamaños de entrada se vuelven grandes y nos ayuda a comparar la eficiencia relativa de diferentes algoritmos. Esta notación es fundamental para tomar decisiones informadas sobre qué algoritmo utilizar en situaciones particulares.

[[Métodos de Resolución Recursiva - Substitución Forward y Backward]]
