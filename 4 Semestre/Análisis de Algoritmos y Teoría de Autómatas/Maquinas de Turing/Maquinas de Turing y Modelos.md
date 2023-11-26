## CLASE 11: M. de Turing, Modular Y Turing Multi-Cinta

### Objetivos para Hoy
- Introducción.
- Máquinas de Turing.
- Variaciones de Máquinas de Turing.
- Notación Modular.

## Máquinas de Turing: Historia
- Nació en Inglaterra (1912-1954).
- Especialidades: Matemático, lógico, científico de la computación, criptógrafo y filósofo.
- Definió una 'Máquina Automática' en 1936, la base del computador.

## Máquinas de Turing: Esquema
- **Máquinas de Turing: Suma**
  - \(M=\{Q,\Sigma,\Lambda,q_0,F,\delta\}\)
  - \(Q\) conjunto de estados. Es finito.
  - \(\Sigma\) conjunto de símbolos. Es finito.
  - \(\Lambda\notin\Sigma\) símbolo blanco (\(\Gamma= \Sigma\cup\{\Lambda\}\)).
  - \(q_0\in Q\) estado inicial.
  - \(F\subseteq Q\) conjunto de estados finales.
  - \(\delta\subseteq Q\times\Gamma\to Q\times\Gamma\times\{-,0,+\}\) función de transición.

## Actividad
- Máquina de Turing que reconoce una palabra palíndroma.
- Máquina de Turing que toma \(w\) como entrada y entrega \(ww\).

## Variaciones de las Máquinas de Turing
- Las máquinas de Turing tienen muchas variaciones, todas computacionalmente equivalentes.
  - Cinta solo infinita a la derecha.
  - Sin símbolo blanco.
  - Solo se permite escribir o avanzar, no ambos a la vez.
  - Solo un estado final.
  - Más de un cabezal.
  - Multicintas, una cabeza.

### Máquinas de Turing Multi-Cinta
- Diferencias con la máquina tradicional.
  - \(\delta: Q\times\Gamma^k\to Q\times\Gamma^k\times\{-,0,+\}^k\).
  - Básicamente, una máquina de muchas cintas, cada una con cabezal apuntando a posiciones distintas.
  - Convenciones sobre el uso de cintas:
    - Entrada y salida en cinta 1.
    - Entrada en cinta 1, no se modifica; salida en cinta 2.
  - Ejemplo: Máquina de Turing que toma \(w\) como entrada y entrega \(w\) al revés.

### Máquina de Turing No Determinista
- Diferencias con la máquina tradicional.
  - \(\delta\subseteq Q\times\Gamma\times Q\times\Gamma\times\{-,0,+\}\).
  - Puede tomar más de una opción para una configuración dada.
  - Si la máquina se detiene y está en un estado en \(F\), entonces es aceptada.
  - Ejemplo: Cualquier ejemplo no determinista de autómata.
  
## Teorema
- Todas las variaciones de Turing son computacionalmente equivalentes.
- Si una máquina no determinista demora \(t\) pasos, su equivalente determinista le tomará aproximadamente \(2^t\) pasos.

## Notación Modular
- Las máquinas de Turing pueden calcular cualquier cosa, pero programarlas puede ser tedioso.
- Usaremos una notación llamada modular.

### Notación Modular: Básicas
- \((⊲)\): Equivalente a \(\forall a, \delta(q_1, a) = (q_2, a, -)\).
- \((⊳)\): Equivalente a \(\forall a, \delta(q_1, a) = (q_2, a, +)\).
- \((b)\): Equivalente a \(\forall a, \delta(q_1, a) = (q_2, b, 0)\).

### Notación Modular: Útiles
- \((⊲_A)\): Mueve a la izquierda hasta encontrar un elemento \(A\subseteq\Sigma\).
- \((B_⊲)\): Borra todo lo que encuentra hasta encontrar un carácter blanco (izquierda).

### Notación Modular: Reglas
- La notación \(A̅\) se puede usar para conjuntos y símbolos.
- Para variables, se usan letras griegas por convención (\(\alpha, \beta, \ldots\)).

## Actividad
- Elija una máquina de las anteriores y escríbala en notación modular.
