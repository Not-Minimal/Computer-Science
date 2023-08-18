# $1^{er}$ Ejercicio 
$$\lim _{\substack{x \rightarrow 1 \\ y \rightarrow 2}} \frac{x y}{x^{2}+y^{2}}$$
## Desarrollo: Método Directo
Aquí como $\lim _{\substack{x \rightarrow 1 \\ y \rightarrow 2}} x y=2$ y $\lim _{\substack{x \rightarrow 1 \\ y \rightarrow 2}}\left(x^{2}+y^{2}\right)=5$, se tiene que:
$$\lim _{\substack{x \rightarrow 1 \\ y \rightarrow 2}} \frac{x y}{x^{2}+y^{2}}=\frac{\lim x y}{\lim \left(x^{2}+y^{2}\right)}=\frac{2}{5}$$
# $2^{do}$ Ejercicio
$$\lim _{(x, y) \rightarrow(0,0)} \frac{2 x y}{x^{2}+y^{2}}$$
## Desarrollo
Considerar el camino $C_{1}: y=x$
![[2 Ejercicio, Camino 1.png]]
Luego, si $(x, y) \in C_{1}$. Entonces 
$$\quad \lim _{(x, y) \rightarrow(0,0)} \frac{2 x y}{x^{2}+y^{2}}=\lim _{x \rightarrow 0} \frac{2 x^{2}}{x^{2}+x^{2}}=1$$
Ahora considerar el camino $C_{2}: y=-x$![[2 Ejercicio, Camino 2.png]]
Luego, si $(x, y) \in C_{2}$. Entonces
$$\lim _{(x, y) \rightarrow(0,0)} \frac{2 x y}{x^{2}+y^{2}}=\lim _{x \rightarrow 0} \frac{-2 x^{2}}{x^{2}+x^{2}}=-1$$
Como el límite por el camino $C_{1}$ es 1 y por el camino $C_{2}$ es -1 , el $\operatorname{lím}_{(x, y) \rightarrow(0,0)} \frac{2 x y}{x^{2}+y^{2}}$ no existe.
Otra forma Usando familia de rectas que pasan por el $(0,0)$.
Sea $C: y=m x$ la familia de rectas que pasan por el $(0,0)$.
Entonces,
$$\lim _{(x, y) \rightarrow(0,0)} \frac{2 x y}{x^{2}+y^{2}}=\lim _{x \rightarrow 0} \frac{2 m x^{2}}{x^{2}+m^{2} x^{2}}=\frac{2 m}{1+m^{2}}$$
Luego, como este límite depende de la pendiente $m$, se concluye que $\operatorname{lím}_{(x, y) \rightarrow(0,0)} \frac{2 x y}{x^{2}+y^{2}}$ no existe.
# $3^{er}$ Ejercicio 
$$\lim _{\substack{x \rightarrow 0 \\ y \rightarrow 0}} \frac{\sin x y}{y}$$
## Desarrollo: Cambio de Variable
Es claro que: 
$$\lim _{\substack{x \rightarrow 0 \\ y \rightarrow 0}} \frac{\sin x y}{y}=\lim _{\substack{x \rightarrow 0 \\ y \rightarrow 0}} x \cdot \frac{\sin x y}{x y}$$
Para estudiar $\lim _{\substack{x \rightarrow 0 \\ y \rightarrow 0}} \frac{\sin x y}{x y}$ hacer el cambio de variable: $\alpha=x y$
(donde $\alpha \rightarrow 0$ cuando $\underset{\substack{x \rightarrow 0 \\ y \rightarrow 0}}{2}$ ) Entonces $\lim _{\substack{x \rightarrow 0 \\ y \rightarrow 0}} \frac{\sin x y}{x y}=\lim _{\alpha \rightarrow 0} \frac{\sin \alpha}{\alpha}=1$.
Por lo tanto $\lim _{\substack{x \rightarrow 0 \\ y \rightarrow 0}} \frac{\sin x y}{y}=\lim _{\substack{x \rightarrow 0 \\ y \rightarrow 0}} x \cdot \lim _{\substack{x \rightarrow 0 \\ y \rightarrow 0}} \frac{\sin x y}{x y}=0 \cdot 1=0$.

# $4^{to}$ Ejercicio
$$\lim _{\substack{x \rightarrow 0 \\ y \rightarrow 0}} \frac{x^{2} y^{2}}{x^{2}+y^{2}}$$
## Desarrollo: Usando el Teorema del Sandwich
Es claro que:
$$

0 \leq \frac{x^{2} y^{2}}{x^{2}+y^{2}} \leq \frac{\left(x^{2}+y^{2}\right)\left(x^{2}+y^{2}\right)}{x^{2}+y^{2}}=x^{2}+y^{2}

$$
Como $\lim _{\substack{x \rightarrow 0 \\ y \rightarrow 0}}\left(x^{2}+y^{2}\right)=0$, Aplicando el Teorema del Sandwich, se tiene que:
$$\lim _{\substack{x \rightarrow 0 \\ y \rightarrow 0}} \frac{x^{2} y^{2}}{x^{2}+y^{2}}=0$$
# $5^{to}$ Ejercicio
## Dada la función de dos variables
$$z=f(x, y)=\frac{x^{2} y}{x^{4}+y^{2}}$$
1. Considerar la familia de todas las rectas que pasan por el origen, $L_{m}: y=m x$. Calcular:
$$\lim _{(x, y) \rightarrow(0,0)} f(x, y), \quad \text { con } \quad(x, y) \in L_{m}$$
2. Con el resultado precedente, ¿qué se puede concluir con respecto al $\lim _{(x, y) \rightarrow(0,0)} f(x, y)$?
3. Considerar el camino $C: y=x^{2}$. Calcular
$$\lim _{(x, y) \rightarrow(0,0)} f(x, y), \quad \text { con } \quad(x, y) \in C$$
4. Con los resultados anteriores, ¿qué se puede concluir con respecto al $\lim _{(x, y) \rightarrow(0,0)} f(x, y)$ ?
## Desarrollo
1. $\mathrm{Si}(x, y) \in L_{m}$, entonces
$$\lim _{(x, y) \rightarrow(0,0)} \frac{x^{2} y}{x^{4}+y^{2}}=\lim _{x \rightarrow 0} \frac{x^{2} \cdot m x}{x^{4}+(m x)^{2}}=\lim _{x \rightarrow 0} \frac{m x}{x^{2}+m^{2}}=0$$
2. Con el resultado precedente, se concluye que, en caso que el $\lim _{(x, y) \rightarrow(0,0)} f(x, y)$ exista, su valor debería ser 0
3. $\mathrm{Si}(x, y) \in C: y=x^{2}$, entonces
$$\lim _{(x, y) \rightarrow(0,0)} \frac{x^{2} y}{x^{4}+y^{2}}=\lim _{x \rightarrow 0} \frac{x^{2} \cdot x^{2}}{x^{4}+x^{4}}=\lim _{x \rightarrow 0} \frac{1}{2}=\frac{1}{2}$$
4. Con el resultados anteriores, dado que hay caminos distintos por los cuales el limite es distinto, se concluye que $\lim _{(x, y) \rightarrow(0,0)} f(x, y)$, no existe.

# $6^{to}$ Ejercicio
## Determinar la continuidad de la función
$$f(x, y)=\left\{\begin{array}{cl}\frac{x^{2}-y^{2}}{x^{2}+y^{2}} & \text { si }(x, y) \neq(0,0) \\ 0 & \text { si }(x, y)=(0,0)\end{array}\right.$$
1. Por los caminos $C_{1}: x=0$ y $C_{2}: y=0$ (que pasan por el punto $(0,0)$ ), los límites de $f(x, y)$, son respectivamente, -1 y 1 . Por lo tanto, no existe $\lim _{(x, y) \rightarrow(0,0)} f(x, y)$. Luego, como no se cumple la segunda condición de continiudad, la función estudiada no es continua en $(0,0)$.
2. En un punto cualquiera $(a, b) \neq(0,0)$, se cumple que $\lim _{(x, y) \rightarrow(a, b)} f(x, y)=f(a, b)$. Por lo tanto, $f$ es continua en cada punto $(a, b) \neq(0,0)$.