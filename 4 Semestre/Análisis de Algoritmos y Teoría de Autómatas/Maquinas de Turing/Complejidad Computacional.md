# Análisis de Algoritmos y Teoría de Autómatas
## CLASE 13: Complejidad Computacional

- Los problemas de decisión (input pertenece a lenguaje) se clasifican por similitud de uso de recursos: Espacio. Tiempo.
- Queremos clasificar los problemas de decisión según su uso temporal:
  
  $$
  DTIME(f(n)) = \{P: \exists M \in DTM,
  $$ M \text{ resuelve } P \text{ en tiempo } O(f(n))
  
  En otras palabras, son los problemas de decisión que usan aproximadamente \(f(n)\) pasos (en el peor de los casos) de una máquina de Turing determinista para resolverse.

- ¿\(DTIME(n^2)\), \(DTIME(n^7 + \sqrt{n} + 8)\)?

- Queremos trabajar con conjuntos que sean: Independientes del modelo. Cerrados bajo composición.
  
  \[
  P = \bigcup_{k \in \mathbb{N}} DTIME(n^k)
  \]

- P es Independiente del modelo:
  - Una máquina Universal simula otra en tiempo \(F(n) = O(T(n) \cdot \log{T(n)})\).
  - Si \(T(n) \in O(n^k)\), entonces \(F(n) \in O(n^{k+1})\).
  - Además, una máquina multicinta es simulada por una de una cinta en tiempo \((T(n))^2\).

- P es cerrado bajo composición:
  - Sea \(F(n) = O(n^k)\) y \(T(n) = O(n^j)\).
  - Entonces \(F(T(n)) = O(n^{j \cdot k})\).

- Búsqueda:
  - ¿Puede diseñar una máquina de Turing que implemente una búsqueda?
  - ¿Si diseña la solución binaria, aún está en P?
  - Ejemplos: Programación Lineal, Ordenamiento, Camino más corto.

- \(EXPTIME = \bigcup_{k \in \mathbb{N}} DTIME(2^{n^k})\)
  
  EXPTIME es Independiente del modelo:
  - Demuestre este hecho.
  - EXPTIME es Cerrado bajo composición.
  - Demuestre que no lo es.

- 2-SAT: Problema satisfacibilidad
  - ¿Puede diseñar una máquina de Turing que implemente 2-SAT en tiempo exponencial?
  - ¿Si se diseña una versión en tiempo polinomial, aún está en EXPTIME?
  - Ejemplos: 3-SAT, Vendedor Viajero, Clique más grande.
  - ¿EXPTIME existe por sí mismo? Podría ser que se nos ocurra una manera más rápida de resolver todos los problemas en EXPTIME.

- Para DTIME se tiene que \[DTIME(o((f(n))/\log{f(n)})) \subset DTIME(f(n))\]
- \(P \subset EXP\)
- Igualmente, se clasifican los problemas de decisión según su uso espacial:
  
  \[
  DSPACE(f(n)) = \{P: \exists M \in DTM, M \text{ resuelve } P \text{ usando } O(f(n)) \text{ celdas}\}
  \]
  
  En otras palabras, son los problemas de decisión que usan \(f(n)\) celdas (en el mejor de los casos) de una máquina de Turing determinista para resolverse.

- \(PSPACE = \bigcup_{k \in \mathbb{N}} DSPACE(n^k)\)
  
  PSPACE es Independiente del modelo y cerrada bajo composición:
  - Por cada paso, se conoce a lo más una nueva celda.
  - Por tanto, las simulaciones multicinta y universal aplicadas a tiempo son aún más restrictivas al espacio.
  - Básicamente todos los problemas que hemos mencionado están en PSPACE.
  - Existe incluso un conjunto más restrictivo, llamado L, el cual se dice usar espacio logarítmico.
  - Aquí obviamente no se considera al input dentro del espacio usado.
  - Ejemplo: 2-SAT.
  
  \[
  EXPSPACE = \bigcup_{k \in \mathbb{N}} DSPACE(2^{n^k})
  \]
  
  EXPSPACE es Independiente del modelo.
  - EXPSPACE es Cerrado bajo composición.
  - Lo más probable es que no se le pueda ocurrir un problema no contenido en PSPACE.
  
  Uso de espacio exponencial, uso de tiempo super-exponencial:
  - Ejemplo: Verificar una afirmación de lógica de primer orden sobre reales, la cual sólo implique suma y comparación.

- Para DSPACE se tiene que \[DSPACE(o(f(n))) \subset DSPACE(f(n))\]

- \(PSPACE \subset EXPSPACE\)

- Podemos clasificar los problemas usando máquinas de Turing no Deterministas:
  
  \[
  NTIME(f(n)) = \{P: \exists M \in NTM, M \text{ resuelve } P \text{ en tiempo } O(f(n))\}
  \]
  
  \[
  NSPACE(f(n)) = \{P: \exists M \in NTM, M \text{ resuelve } P \text{ usando } O(f(n)) \text{ celdas}\}
  \]

- ¿Qué pasa con NP, NEXPTIME, NPSPACE y NEXPSPACE con respecto a sus recíprocos deterministas?
  
 $$ 
  P \subset EXP \subset PSPACE \subset EXPSPACE
  $$

- Teorema de Savitch:
  - Cualquier máquina no determinista que usa \(f(n)\) espacio puede ser simulada por una determinista en \(O(f(n)^2)\) espacio.

- Finalmente tenemos:
  - \(PSPACE = NPSPACE\)
  - \(EXP = NEXP\)
  - \(PSPACE = NPSPACE = EXP = NEXP\)

- P vs NP:
  - Se sabe que \(P \subset NP\), pero no hay seguridad si es que \(P = NP\) o \(P \subset NP\).
  - Este es uno de los problemas de ‘Millennium Prize Problems’, dados a conocer en 2000.
  - Entre ellos se incluye la conjetura de Poincaré, única actualmente resuelta.
    - Conjetura de Poincaré: Dimensión 3 conexa es homomorfa. [Solved]
  - P vs NP.
  - Conjetura de Hodge.
  - Hipótesis de Reimann.
  - Existencia de Yang-Mills map gas.
  - Suavidad y existencia de Navier-Stokes.
  - Conjetura de Birch.
  - Meme de la clase

## Meme de la clase
  - Si tenemos un problema del cual desconocemos el conjunto al cual pertenece, necesitamos una manera más formal de conocer su pertenencia.
  - Para ello, necesitaremos una técnica llamada reducción (Turing).
  - Se dice que el problema A es Turing reducible a B si:
    - Usando a B como oráculo, podemos calcular A.
    - Se escribe \(A \le_T B\).
    - En términos coloquiales, existe un algoritmo que transforma el problema A en B.
    - La notación representa la relación, ya que implica que no es más difícil resolver A que B.
  - Cuando hablamos en términos de complejidad, se usan 2 tipos de reducciones:
    - Reducción Cook: Transformar A en B se realiza en tiempo polinomial.
    - Reducción Logarítmica: Transformar A en B se realiza en espacio logarítmico.
  - Construir \(f\).
  - Demostrar que \(f\) es:
    - [Turing] computable.
    - [Cook] computable en tiempo polinomial.
    - [Log] computable en espacio logarítmico.
  - Demostrar:
    - Si \(w \in A\) entonces \(f(w) \in B\).
    - Si \(f(w) \in B\) entonces \(w \in A\).
  - Consideraremos los lenguajes:
    - \(EP = \{M : M \text{ para con input vacío}\}\)
    - \(HP = \{M, w : M \text{ para con input } w\}\)
  - Se tiene que \(HP \le_T EP\):
    - Sea \(M, w\).
    - Creamos una máquina \(M'\) que primero escribe \(w\) en la cinta y luego simula \(M\) sobre lo que está en la cinta.
    - Así, \(M' \in EP \leftrightarrow M, w \in HP\).
  - Consideraremos los lenguajes:
    - \(GP = \{G, n_1, n_2 : \text{Hay un camino en } G \text{ que une una } n_1 \text{ y una } n_2\}\)
    - \(2SAT = \{F(x) : F(x) \text{ es satisfacible}\}\)
  - Se tiene que \(2SAT \le_L GP^C\):
    - Sea \(F(x)\).
    - Asociamos grafo que conecte variables según implicancias y buscamos camino desde \(x_i\) a \(\neg x_i\).
    - Así, \(F(x) \in 2SAT \leftrightarrow \exists i : G, x_i, \neg x_i \in GP^C\).
  - Consideraremos los lenguajes:
    - \(HGP = \{G, n_1, n_2 : \text{Hay un camino hamiltoniano en } G \text{ que une una } n_1 \text{ y una } n_2\}\)
    - \(HGC = \{G : G \text{ tiene un ciclo hamiltoniano}\}\)
  - Se tiene que \(HGP \le_P HGC\):
    - Sea \(G, n_1, n_2\).
    - Añadimos a \(G\) un nodo \(u\) que se conecte con \(n_1\) y \(n_2\).
    - Así, \(G, n_1, n_2 \in HGP \leftrightarrow G' \in HGC\).
  - Consideraremos los lenguajes:
    - \(HPGP = \{G, n_1, n_2 : \text{Hay un camino hamiltoniano en } G \text{ que une una } n_1 \text{ y una } n_2\}\)
    - \(HGC = \{G : G \text{ tiene un ciclo hamiltoniano}\}\)
  - Se tiene que \(HPGP \le_P HGC\):
    - Sea \(G, n_1, n_2\).
    - Añadimos a \(G\) un nodo \(u\) que se conecte con \(n_1\) y \(n_2\).
    - Así, $(G, n_1, n_2 \in HPGP \leftrightarrow G' \in HGC)$.
  - Si todo problema \(A\) en un conjunto de complejidad \(C\) se puede reducir sin salirse de la complejidad a otro \(B\), se dice que \(B\) es \(C\)-Hard.
  - Es el más difícil del conjunto.
  - Para la mayoría de los conjuntos, basta con la reducción Cook.
  - Para NL, se usa reducción Logarítmica.
  - En la clase de complejidad \(C\), se le denomina a un problema en particular \(C\)-Completo si:
    - Es \(C\)-Hard.
    - Pertenece al conjunto \(C\).
  - El primer problema completo fue \(SAT \in NP\)-Completo.
  - Sin embargo, ¿Cómo demostrar que todo problema en \(NP\) se puede reducir a \(SAT\)?
  - \(SAT\) es \(NP\)-Completo.
    - Primero, \(SAT\) es \(NP\). Esto es claro, ya que el problema es verificable en tiempo polinomial.
    - Segundo, \(SAT\) es \(NP\)-Hard. Para ello, tomemos una máquina \(M\) no determinista que resuelve un problema \(A\) en tiempo polinomial \(P(n)\).
    - Expresamos el historial de \(M, w\) de manera booleana.
    - Cada estado está presente en un solo tiempo a la vez.
    - Cada símbolo en una sola celda a la vez.
    - Cabeza apuntando a una sola celda a la vez.
    - Cambios solo en el cabezal.
    - Estado final en tiempo \(P(n)\).
    - Escribimos configuración inicial con \(w\).
    - Todas estas afirmaciones se juntan con ANDs.
    - Cada afirmación es de orden cuadrático en \(P(n)\).
    - Finalmente, si la fórmula es satisfasible, entonces \(M\) acepta \(w\).
  - \(P\)-Completo:
    - CVP (problema circuito booleano).
    - Programación Lineal.
  - \(NP\)-Completo:
    - \(SAT\).
    - Problema de la mochila.
  - \(PSPACE\)-Completo :
    - Completitud de RE.
    - Word Problem para CFG.
  - Bajo nuestro nuevo conocimiento, el problema se traduce:
    -
