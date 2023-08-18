Primero se debe tener en cuenta la [[Topología]] matematica para poder entender bien todo el concepto y la concepción de las [[Formulas Generales]] 
Se utiliza para describir el comportamiento de una [[Función]] cuando las variables independientes se acercan a un valor determinado.
En términos generales, se dice que el [[Límite]] de una [[Función]] $f(x,y)$ cuando $(x,y)$ se acerca a $(a,b)$ es $L$ si $f(x,y)$ se acerca a $L$ cuando $(x,y)$ se acerca a $(a,b)$.
Se puede expresar de la siguiente manera:
$$\lim f(x,y) = L$$
$$(x,y) → (a,b)$$
Para que el límite exista, la [[Función]] debe acercarse al mismo valor L sin importar la dirección desde la cual se aproximen las variables independientes (x,y) a (a,b). Es decir, el límite debe ser el mismo a lo largo de cualquier recta que pase por (a,b).
Sin embargo, existen técnicas y métodos para calcular límites en funciones de varias variables, como el uso de curvas de nivel, la definición formal de límite y el uso de [[Regla de L'Hopital]] Estas técnicas pueden ser muy útiles para analizar el comportamiento de funciones complejas en diferentes puntos del espacio.

La [[Regla de L'Hopital]] es una técnica para encontrar el límite de una [[Función]] tomando la [[Derivadas]] tanto del numerador como del denominador de la [[Función]] y evaluando el límite de la razón resultante. Esta técnica puede ser particularmente útil para funciones que involucran formas indeterminadas, como 0/0 o infinito/infinito.

## Técnicas para calcular límites en funciones de varias variables
1. Curvas de nivel
    - Encontrar curvas en el dominio de la [[Función]] que comparten el mismo valor de salida
    - Determinar si la [[Función]] se acerca a un límite a medida que se acerca a un punto particular en el dominio
    Fórmula para el valor de una curva de nivel: $f(x,y) = c$ Donde c es el valor constante de la curva de nivel
2. Definición formal de límite
    - Evaluar la [[Función]] en puntos que están arbitrariamente cerca del punto límite
    - Determinar si la [[Función]] se acerca a un valor particular a medida que los puntos se acercan  


$$\lim f(x) = L \to \lim f(x) = L $$
$$(x,y) → (a,b)$$
$$x \in A ,x \in B$$
![[Subconjunto y Limites.png]]

## #Teorema: 

Si $B_1$ y $B_2$ son subconjunto de $A = Dom (f)$ que contienen a $x_{0}$
como punto de acumulación y:
$$\begin{aligned}\lim f\left( x\right) =L_{1}\\
x\rightarrow x_{0}\\
x\in B_{1}\end{aligned}$$ $$\begin{aligned}\lim f\left( x\right) =L_{2}\\
x\rightarrow x_{0}\\
x\in B_{2}\end{aligned}$$ 
$$L_1 \neq L_2$$Entonces el Limite no existe
El limite Existe si:
![[Limite Existe.png]]

#Observación Cuando 
$$\begin{aligned}\lim f\left( x\right) =L\\
x\rightarrow x_{0}\end{aligned}$$
existe, cualquier subconjunto $B$ de $A$(que contiene a $x_0$ como punto de acumulación) conduce al mismo limite $(L)$ y por lo tanto el teorema no aplica. En este caso, una elección conveniente de B proporciona el único valor de $L$ y podemos aplicar el siguiente teorema. 

## #Teorema 
Si es valida la siguiente desigualdad: 
$$||f(x) - L|| \leq h(x), x \in B(x_0,r)$$
Ademas $$\begin{aligned}\lim h\left( x\right) =0\\
x\rightarrow x_{0}\end{aligned}$$
Entonces: $$\begin{aligned}\lim f\left( x\right) =L\\
x\rightarrow x_{0}\end{aligned}$$
$$0 < ||f(x) - L|| \leq h(x)$$
$$0 < \lim_
{x \to x_0} ||f(x) - L|| \leq 0$$
$$ \lim ||f(x) - L|| = 0 \implies \lim f(x) = L$$
Continuar con [[Limites Iterados]]
