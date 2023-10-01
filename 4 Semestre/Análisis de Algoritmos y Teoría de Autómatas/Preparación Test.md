## Algoritmos y Estructuras de datos avanzadas

### Algoritmo
- Procedimiento bien definido, discreto y finito que toma una entrada y produce una salida para resolver un problema.
- Problema: Especificación de la relación entre la entrada y la salida.
- Entrada: Lista $<a_1, a_2, a_3...a_n>$.
- Salida: Permutación $<b_1, b_2, b_3...b_n>$ donde $b_1 ≤ b_2 ≤ b_3 ≤ … ≤ b_n$.
- Caso Ejemplo: Input: $<2,5,1,8,9,4>$ - Output: $<1,2,4,5,8,9>$
### Propiedades de Algoritmo
- Correctitud: Resuelve el problema, es robusto y termina en tiempo finito.
- Eficiencia: Medida en términos de tiempo y espacio.
- Complejidad: Peor, promedio y mejor caso.
### Complejidad Algorítmica
- Medición de la eficiencia de un algoritmo a través del tiempo y el espacio utilizado.
- Enfoque principal en el tiempo debido al crecimiento rápido del espacio.
- Formalización mediante las funciones 𝑇(𝑛) y 𝑆(𝑛), donde 𝑛 es el tamaño de la entrada.
### Comparación de funciones asintóticas
- Definición de conjuntos como $Θ(𝑔), 𝑂(𝑔), Ω(𝑔)$ para comparar funciones.
- $Θ(𝑔)$ es un conjunto de funciones acotadas por $𝑔$.
- 𝑓 𝜖 Θ(𝑔) significa que 𝑔 es un límite asintótico ajustado de $𝑓$.
### Funciones Asintóticas
- $Θ(𝑔)$: Funciones acotadas por 𝑔.
- $𝑂(𝑔)$: Funciones que no crecen más rápido que 𝑔.
- $Ω(𝑔)$: Funciones que no crecen más lento que 𝑔.
- $𝑓 = Θ(𝑔) ↔ 𝑓 = 𝑂(𝑔) ˄ 𝑓 = Ω(𝑔)$.

### Propiedades de las Funciones Asintóticas
- Transitividad: 𝑓 = Θ 𝑔 ∧ 𝑔 = Θ(ℎ) → 𝑓 = Θ ℎ
- Reflexividad: 𝑓 = 𝑂 𝑓, 𝑓 = Ω 𝑓
- Simetría: 𝑓 = Θ 𝑔 si y solo si 𝑔 = Θ(𝑓)

### Resumen por Límite
- 𝑓 ∈ Θ 𝑔 ↔ Existen 𝑐1, 𝑐2 > 0: lim 𝑛→∞ (𝑐1𝑔(𝑛)) / 𝑓(𝑛) > 1
- 𝑓 ∈ O 𝑔 ↔ Existe 𝑐 > 0: lim 𝑛→∞ (𝑐𝑔(𝑛)) / 𝑓(𝑛) > 1
- 𝑓 ∈ Ω 𝑔 ↔ Existe 𝑐 > 0: lim 𝑛→∞ (𝑐𝑔(𝑛)) / 𝑓(𝑛) < 1
- 𝑓 ∈ o 𝑔 ↔ lim 𝑛→∞ (𝑔(𝑛)) / 𝑓(𝑛) = ∞
- 𝑓 ∈ 𝜔 𝑔 ↔ lim 𝑛→∞ (𝑔(𝑛)) / 𝑓(𝑛)

### Recursividad
- Métodos para medir los recursos utilizados por algoritmos recursivos.
- Métodos de resolución de ecuaciones recursivas, incluyendo:
- Sustitución Forward
- Sustitución Backward
- Telescópica
- Sustitución
- Cambio de variable
- Polinomio característico
- Teorema maestro.
### Función Recursiva
- Conteo de las operaciones de multiplicación.
- Fórmula para calcular el tiempo de ejecución.
