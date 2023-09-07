Modulo 1
    - Logica Proposicional
    - Conjuntos
        - Descripción
            - Sea P(x), una función proposicional: Se dice que un conjunto es {{reunión}} de {{todos}} los {{elementos}} que {{tengan}} cierta propiedad.
            - Si A = {x: P(x)} y dice A un conjunto, donde x verifican P(x), se llama "elemento del conjunto A" y se dira "x pertenece a A" (x e A)
            - Los conjuntos se denominan con letras {{mayusculas: A, B, C...}} 
            - Los elementos se denominan con letras {{minusculas: a, b, c...}} 
            - Detalles
                - Escrito por {{extension}}: A = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
                - Escrito por {{comprensión}}: B = {x: es digito}
                - Sean A y B conjuntos, dirán que A es {{igual}} a B si poseen los mismos elementos: A {{=}} B
                    - A = B y C = D
                    - Diremos que un conjunto A, es finito si posee un numero finito de elementos
                    - Diremos que un conjunto B, es infinito si posee un numero infinito de elementos
                - Cardinalidad (#): Numero de elementos de un conjunto
                - Subconjunto B c= A
                    - A = {1, 2}
                    - B = {1, 2, 3}
                    - Entonces B c= A
        - Operaciones Basicas
            - Operaciones básicas con conjuntos:
                - Complemento
                    - Sea A un conjunto cualquiera, se llama "{{complemento}} del conjunto A" denotado por: A(ç)
                    - Aç = {x/x ∈ U ∧ x (no e) A}
                    - U = {0, 1, 2, 3, 4, 5} y A = {1, 2, 3, 4}, entonces: Ac = {0, 5}
                    - Observación: 
                        - Uç = ∅
                        - ∅ç = U
                - Diferencia
                    - Si A y B son conjuntos, se llama “{{Diferencia}} entre A y B”y se denota por A/B o A − B, al conjunto definidos por:
                - Unión
                    - Si A y B son conjuntos se llama "{{unión}} de A y B" denotado por : AUB
                - Intersección
                    - Si A y B son conjuntos se llama "{{Intersección}} de A y B" denotado por : AU"revez"B
                - Flashcards Extras
                    - Las operaciones basicas de los conjuntos son: {{Complemento}}, {{Diferencia}}, {{Unión}}, {{Intersección}}.
                    - Como resolver certamen
                        - Ejercicio Tipo proposiciones
                            - 1 Pregunta: Existen numeros que son reales y su cuadrado es negativo
                                - Determinar valor de verdad de proposición y justificar
                                    - Solución: la proposición es V o F, Por que... 
                                - Expresar la proposición en lenguaje logico formal
                                    - Solución: (∃x)(z∈R∧x2 <0)  					 				 			 		 	 
                                - Negar la proposición usando logica formal
                                    - Solución: (∀x)¬(x∈R∧x2 <0)⇐⇒(∀x)(x̸∈R∨x2 ≥0) 	 		 			 				 					 						  					 				 			 		 	 
                            - 2 Pregunta: Sabiendo la proposición compuesta (r ∧ ¬q) - > [t ∨ (p < - > ¬q)] es falsa, determinar valor de verdad de p, q, r y t.
                                - Solución Paso por Paso
                                1. En primer lugar notamos que la proposición puede ser escrita de la forma (P - > Q)
                                2. Donde ^^P = (r ∧ ¬q^^) y ^^Q = [t ∨ (p < - > ¬q)]^^ 
                                3. Luego se tiene que: ^^δ(P - > Q) = F^^ < - > ^^δ(P) = V ∧ δ(Q) = F^^, debido a Condicional
                                4. Ademas, ^^δ(P) = V^^ < - > ^^δ(r) = V ∧ δ(¬q) = V^^ (Para que (r ∧ ¬q) sea verdad, debe haber ambos V)
                                5. Con esto, ^^δ(q) = F^^ < - > ^^δ(t) = F ∧ δ(p < - > ¬q) = F^^ (Para que (^^[t ∨ (p < - > ¬q)]^^) sea falsa, t debe ser falsa y ^^(p < - > ¬q)^^	tambien ya que hay un conector de conjunción que los une.
                                6. Por ende se obtiene que: ^^δ(p) = δ(¬q) = V^^ y asi p y r son verdaderas, por lo tanto q y t son falsas. 			 				 					 						  					 				 			 		 	
                        - Ejercicio Tipo Cardinalidad
                            1. Si la cardinalidad del conjunto potencia P(A) = 64 determine la cardinalidad del conjunto A.  
                                - P(A)=2♯A =64 - > A=6  					 				 			 		 	 
                            2. Sean A = {x ∈ R: x = n1,n ∈ N}, B = {x ∈ R: x2 = 1} y U = R (Conjunto universal). Hallar:  							 						
                                - A∩B
                                - A−B
                                - B(ç)
                                - B−A  					 				 			 		 	 
                                - A∪B  					 				 			 		 	 
                                - ♯A  					 				 			 		 	 
                                - ♯P(A)
                                - ♯B
                                - ♯P(B)  					 				 			 		 	 
    - Relaciones
        - Definición de Relación
            - Sean A y B dos conjuntos, entonces una **relación** de R de un subconjunto A a un conjunto B es un {{subconjunto}} de {{A}} x B, es decir: R c A x B
            - Gráficamente podemos ilustrar de la siguiente forma: A y B pueden representar los {{lados}} de un rectángulo y así A x B sería el {{interior}} de éste, y R un {{subconjunto}} de A x B
            - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/C1v-jPGTKDGmymOJxFLbYoKT5nNS4RHxMkrdZOUZUGANjhvi50QDqbXFHGZOcoasIQHmEspqiyZW6BwJ43kMvFMqMVkkXd5B2v0G-NA30a_KtvHDBxIc-UcO-cemXCpa.png) 
            - Notación: Diremos que los elementos a y b, estan en la {{relación}} R si {{(a, b)}} e R y escribimos: (a, b) e R v {{aRb}} v b = R(a)
            - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/mri5E9uKk2Iq2AFxtBLwbxcZvgqQvKhI-SHlNZ85X-0FsLtKl1uyxtg7Fj-XwSu5PrKHUspuKj3u2ekjBQWKh0guO_cNF4mso2tR1lioeEXnYFU4vYpKTMnF1Dip593d.png) 
            - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/is09jVI78eT23eNTF9y-7oVJW85PSYheo1q87tuTzDVdQHKybrFgu0iZDmm3P8gvi5UvKb41zWr5sD_0378_6hVoVqDPD7kiUX9Rbr_YtW51TsYTzSV7_DZgebTKGqzu.png) 
            - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/OekWY2SullR-8KoeG3KBwUUeNzD4JhAzT-aIpGcO7FLUo2U9yQB52c-YELU_kfM-lsitX5oNn9jgbPMsNh2wmMMUCx4-17NRj1GVZXAXHmQpUjUlYr4CTCqaFEzpczeO.png) 
            - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/M9o_DDpJsnsWZ7fPdGLPk14QMjefoqZz1SSqwhBIXVL6AsILn_R0Qw420j-V-6Zb7O96rrliN4es-q4H5SteMKlhqOUktmsyJfHv3fL8TU89usGcE-i-E8KyW794vCjX.png) 
        - Definición de Relación Inversa
            - Sea R una relación en A x B. Se llama ^^relación inversa^^ de R, y se denota por:
            - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/bB9eeIYselXDP2ExNyDijfymhDS_Tslrcl4cpo8nmkFSXtat0kIJ1j6y8Hnn8M035poAyJDfFXbB01lxvih_bVK4uWBhoDAEfNQAd0DKzbAxjCYmKA7ay8hJV0NAtmnW.png) 
            - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/p9mKaN3-pVuelAWJs-RyKStseoIBbsZ8tNIu0I7u6aRNGnt5RMXd4nwCi9ifvCbDgpZq80NPBiPLxIDYPQKqUSIus52N7LECNelZ_Ncsn7ywhBtyXbRG4W8b2Ng7homj.png) 
            - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/Yhz6HT4cgw3RsuwJDgnnGpTh-uhSQspiustNFL31pGBuqQoDeAp9EilmuZ3eJQsKbja3QT8djAXiqpNbmBUtk-hNcxqeU8qqhQId7bIpSDQW4p-a6wwpKgJ1ttFKZ61A.png) 
            - 
        - Definición de Conjuntos en una Relación
            - Sean A, B conjuntos y R una relación en{{ A x B}}, entonces llamaremos:
            1. ^^{{**Dominio**}}^^^^** de R:**^^ al conjunto de todos los x e {{A}}, tales que exista un {{y}} e B, de modo que xRy.
                - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/1qrSzxcwpZhunpINPcFhCC6iwCKkh1wbXws5uXMdPJZE4oximSZaLcu1hEV1QMdphLigPp-Qdlmao1B_tKFLhv1gNbSdouBY1gXztoYKEA2B-HJJn_14E5eoYBOpWn1j.png) 
            2. ^^{{**Recorrido**}}^^^^** de R:**^^ Al conjunto de todos los y {{e B}}, tales que existe un {{x}} e A, de modo que xRy.
                - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/XUMvwcg8_YnsmJPjYUYyTl4MM236H8chm81X5SRcQWdvkO66O3OcSe03MYxeoIx8_YibvwhnW44ZzD4bw_3tzSWqNtcK2b8GzuD2l1qpbunFnaeIo0VTc7xW0JjoOGzP.png) 
            - ^^{{**Codominio**}}^^^^** de R:**^^** **Corresponde al conjunto B   
                - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/VhJhoC71PBYEjo-HVlba1p7NI4Eb54pIeIYeycunBtZU6eX5ZCy89QwV-aEuxdAAEbLlmv7Aznu5z9j7J_cX2eEuBQjqDcJyu_vznepxSsI4Rov-FeeRmDX2a7YyiR3U.png) 
            - ^^**Ejemplo**^^  
                - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/sspI7fw2AEfZuXW7IZjZ7A5utULlFuNha_h5j3RgxOr9tWWhNBiUvNLqg2kBhbtom7Rjj598i9Y34nCerf4XF-cddS6B88zUUF6ZmhcMu0dUwzjoCMGoJg9Ysj03Oapc.png) 
                - 
            - ^^**Propiedades**^^  
                - Sea R una relación sobre A x A, entonces diremos que R es:
                - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/eD_ulgAPl0gHNOLuOvyz1oNIo6ADF1OCkVYizvm_cQSpr9OdX7gR06znPa7d_4ybSHkVcPIGEJVfgH90LtGUnBQQ_rpC9FpIR4A0E1NFVnSa-K0Cc11v4sbqeKcbliGp.png) 
    - Funciones
        - [[Función]]  
            - Diremos que una relación de R de un conjunto A en un {{conjunto}} B es una {{Función}} (o relación funcional), cuando para cada x e Dom(R), se le entrega {{uno y solo un}} elemento y en el {{Cod(R)}}.
            - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/PKXrln2atomg8hZ3a3Jlq1dF6lXH7bDqnvu9IcA9xqjrntKYa3Gpm31U1y9f9Pf8TJV0IsQW_G7g5ARmGB8b3y3ZVYt02rWl-I6pO-26ZyaItBpHpLl3NbTl_a8oZEny.png) 
        - Funciones Reales
            - Sean A y B dos subconjuntos {{no}} vacíos. Se llama Función de A en B a toda {{ley}} o regla que asigna a {{cada}} elemento de A, un {{único}} {{elemento}} de B.
            - Para designar una función usaremos las letras {{f, g, h, F, H,}} etc. Para indicar un elemento usaremos las letras {{x, y, z, w,}} etc.  
            - Para indicar que f es función de A en B se escribe:
                - f ∶ {{A - > B}} 
            - Para indicar que a un elemento de x de A, la función f le asocia un {{sólo}} elemento {{y}} de B se escribe: {{x - > f(x) = y}}  
            - Es decir:
            - Define una función f que a cada x en A le asigna un {{único elemento}} y = f(x) en B
            - Elementos del conjunto de {{Partida}}: ^^Pre-Imagen^^ = ^^{{Dominio}}^^ 
            - Elementos del conjunto de {{Llegada}}: ^^Imagen^^ = ^^{{Codominio}}^^  
            - Ejemplo:
                - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/HzvMZR7pTv4JNxzt7mOgn5pBqTfptSVxG-YRaWP3nY6FZ8_9AtZjVMqEyv_eIXoHAeBQoFJACNO497IX0Z5QUiKduzpg0HXG345m1HI5CmU-QUphXD4FwvgeRmWGnf_K.png) 
            - $f: R \to R$→Dom(f) y Cod(f) estan difinidos, encontrar Rec(f).
            - $f:A\subset\R \to \R$→Cod(f) definido, encontrar Dom(f) y Rec(f)
            - $f:\R\to B\subset\R$→Dom(f) definido, encontrar Cod(f) igualando a Rec(f). ^^Sobreyectiva^^
            - $f:A\to B$→Dom(f) y Cod(f) definido por extensión, encontrar Rec(f)
            - Una función de A en B,  $f: A \to B$ es:
                - ^^{{Sobreyectiva}}^^, si Rec(f) = Cod(f) o B
                - ^^{{Inyectiva}}^^, si elementos diferentes de A, tiene imágenes diferentes en B.
                - ^^{{No inyectiva}}^^, Elementos distintos de A, tienen igual elemento en B
                - ^^{{Biyectiva}}^^, si es inyectiva y sobreyectiva a la vez.
                - Como determinar: Luego si f(x1) = f(x), no necesariamente x1 = x2, por tanto, no es {{inyectiva}}. 
            - Una función $f:A\subset\R \to \R$ se dice:
                - Estrictamente {{**Creciente**}} en A si: $x1 < x2 \implies f(x1) < f(x2)$ 
                - Estrictamente {{**Decreciente**}} en A si: $x1 < x2 \implies f(x1) > f(x2)$ 
                - Toda función estrictamente {{creciente}} o {{decreciente}} es {{**Inyectiva**}} 
            - Una función $f:A\subset\R \to \R$, se dice:
                - Función {{**Par**}} ssi(si y solo si):  $\forall x \in \to -x \in$ y $f(x) =f(-x)$ 
                - Función {{**Impar**}} ssi(si y solo si): $\forall x \in \to -x \in$ y  $f(-x) =-f(x)$ 
            - Operatoria de Funciones Reales
                - Al trabajar con Funciones Reales, estas se pueden sumar, restar, dividir y multiplicar.  
                    - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/jZrnPEwfJfkPx2ECfDKVRgOHlVmfgzX2My9AoCIsD9uk-rcT1agj2tws1mZUx-Vp2pnwq0rAmRKolKTLrP_NVT72wLTtywi7iSTBVxiDMUQxW7MnA720VSn3lJNh3X_i.png) 
                - Antes de hacer cualquier operatoria para determinar bien, se debe obtener el {{dominio}} de las funciones base y luego realizar la {{intersección}} entre ellos. Si existe {{restricción}} se debe tener en cuenta para la {{intersección}} de los {{dominios}}. 
                - Al sumar, verificar la sumatoria de terminos algebraicos y simplificar lo mas posible.
                - Al restar, verificar la resta de terminos algebraicos y simplificar lo mas posible.
                - Al dividir, verificar el cuociente de terminos algebraicos y simplificar lo mas posible.
                - Al multiplicar, verificar el producto de terminos algebraicos y simplificar lo mas posible.
            - Función Inversa
                - Sea f una función tal que: $f: A \to B,x \implies y = f(x)$ 
                - Cualquiera sea la función, si cumple con ser biyectiva, entonces existe una función inversa de la misma que se denota por: $f^{-1}(x)=y \iff x=f(y)$ 
                - Ejemplo
                    - $g(x): A \subset \R \to \R, x \to g(x)=\frac{1}{x-1}$, defina $g^{-1}(x)$, haciendo restricciones necesarias.
                        - Solución: $Dom(g) = \R-\{1\}$  y $Rec(g) = \R-\{0\}$, por tanto: g = inyectiva.
                    - Luego, definiendo $g: \R-\{1\} \to \R-\{0\}, g(x)=\frac{1}{x-1}$, se tiene una función biyectiva, es decir: Existe la inversa y se tiene: 
                        - $g^{-1}(x)=y \iff x=g(y)$
                        - $\iff x=\frac{1}{y-1}$
                        - $\iff x(y-1)=1$ 
                        - $xy=1+x$
                        - $\iff y=\frac{1+x}{x}$ y como $y =g^{-1}(x)$ 
                        - $g^{-1}(x)=\frac{1+x}{x}$ 
            - Funciones Importantes
                - Función Lineal  
                    - **Definición:**  
                        - $L: A \subseteq \R \to B \subseteq\R$↔$x  \to L(x) = ax+b, \ a,b \ constantes \ reales$ 
                    - **Dominio:**
                        - Dom(L) = $\left\{x \in\R/L(x)\in \R\right\}$ 
                        - $=\left\{x \in\R/ax+b\in \R\right\}$ 
                        - $=\R$ 
                    - **Recorrido:** 
                        1. Rec(L) =  $\left\{y \in\R/\exist x\in Dom(L)\wedge y =L(x)\right\}$  
                        2. $=\left\{y \in\R/\exist x\in \R\wedge y =ax+b\right\}$  
                        3. $=\left\{y \in\R/[x = \frac{y-b}{a} \in \R, \ cuando\ a  \neq 0]\vee[y=b, \ cuando \ a=0]\right\}$  
                    - **Sobreyectividad:**
                        - Entonces Cod(L) = Rec(L) y es sobreyectiva sólo cuando→$a\neq 0$ 
                    - **Inyectividad:**
                        - $\forall x1, x2 \in \R, L(x1) = L(x2) \implies a*x1+b=a*x2+b, \ a \neq 0$ ^^/ -b^^ 
                        - $\implies a*x1=a*x2, \ a\neq 0$ ^^/ : a^^  
                        - $\implies x1=x2$ , Entonces, L(x) es inyectiva cuando $a\neq 0$ 
                - Función Valor Absoluto
                    - **Definición:**  
                        - $|.|: A \subseteq \R \to B \subseteq\R$↔$x \to |.| = \begin{Bmatrix}
\ \ \ \ x, x\geq 0 \\
\ -x, x < 0
\end{Bmatrix}$ 
                    - **Dominio:**
                        - Dom(|.|) = $\R$  
                    - **Recorrido:**
                        - Rec(|.|) = $\R^{+}_0$ 
                    - **Sobreyectividad:**
                        - Cod(|.|) = $\R \neq \R^{+}_0 = Rec(|.|)$ , entonces, **No **es** **^^**sobreyectiva**^^ 
                    - **Inyectividad:**
                        - $\forall x1, x2 \in \R, Dom(|.|), f(1)=f(-1
)= |1| = |-1|$ , pero $1 \neq -1$, entonces, |.| **No **es** **^^**Inyectiva**^^  
                    - **Idea Grafica**
                        - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/HFGGc3ahvCICJb6_RbrI6M7madH4T5iOihZYZiDo1HryU2rE8Li9rD99o5NuzqRc_Acl8LF4m4-IDVMsSrgMhqERgLLxrdJgsF8MagXGEMdTaNkqRSrBmPejhaXG1qvg.png) 
                        - Recordar que se tienen dos igualdades que no se deben confundir:
                        - √x2 = |x|, definido para todo $x \in \R$ 
                        - $(\sqrt x)^2 =x$ , definido solo para x  $x \geq 0$ 
                    - **Ejemplo 1:**
                        - Estudiar caso particular:
                        - $f: A \subset \R \to \R, f(x) = |x-k|, k>0$ 
                        - $Dom(f) = \R$ 
                        - $Rec(f) = R^+_0$ 
                        - Idea Grafica:
                        - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/9JyaqKS90M-ZuXvQNEqdQuYwJTE54x0sFpcr8jsjqtZ5XmTqJ1E_hw6aUgkSDRvBq8CyacanvRTQtqkHu-miNBIa9JZJYdrEpV10CedjS7u0E-UBGpKG0eW-o3DwAEDG.png) 
                    - **Ejemplo 2:**
                        - Estudiar caso particular:
                        - $f: A \subset \R \to \R, f(x) = |x|-k, k>0$ 
                        - $Dom(f) = \R$ 
                        - $Rec(f) = [-k, +\infty[$ 
                        - Idea Grafica
                - Función Cuadrática
                    - **Definición:**
                        - $C: A \subseteq \R \to B \subseteq\R$←$x  \to C(x) = ax^2+bx, \ a,b,c \ constantes \ reales,\ a\neq 0$
                    - **Dominio:**
                        - $Dom(C) =\R$ 
                    - **Recorrrido:**
                        - $Rec(C) =$ $\left\{y \in\R/y\geq c- \frac{b^2}{4a}, a>0 \vee y \leq c - \frac{b^2}{4a}, a<0 \right\}$ 
                        - **Equivalencia:**
                            - Por otro lado, si recordarmos que en x = (-b/2a) la función cuadrática(parábola) tiene su vértice, esto es, su punto mas alto(o mas bajo, según el signo del coeficiente a), el valor que toma la función en ese punto es:
                            - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/F4InOKp0sbpKIAAoRvyu1rk0rs8mhGcwcdyzIMtfzz4t_pHXQf-62qVgW5dZ-RfiEMnzYKBUYH-jEMxdVqGvT3XHE6FcKnF2ZnV_usHsGBNX3WcpP_tHcJ6PUATTMuuW.png) 
                            - **Idea Grafica:**
                                - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/IgheBymB00KY6hBh-Qy7B02ThkDAyw54wMfJd2BAg9zcMnnvRlx8O-q4WqwWBEzHlHUBN_s2AmilWMtxN8uc6l2VxaDgtm42hwPntdo6pW1vsBYvaewYj0KP0mcDLcdl.png) 
                    - **Inyectividad:**
                        - Para todo x1, x2 e Dom(C).
                        - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/FNYBat2mNgnsfZQfLZD4O0Z4f_vnl_b5NOKXBvJaqh0ZOZVWqjyfxPw_-yx1tLGdioyl4IWRhjHoEX9OMIoFDyQNfaflwNgApGmho2MoDb8sWaeMkMvyavMg22OFK621.png) 
                    - **Sobreyectividad:**
                        - $Cod(C) = Rec(C)$, por definición, entonces es sobreyectiva.
                - Función por Tramos
                    - **Definición:**
                        - $T: A \subseteq \R \to B \subseteq\R$ 
                        - $x \to T(x)= \begin{Bmatrix} 
f_1(x) \ ,a \leq x \leq b \\
f_2(x) \ ,b < x \leq c \\
f_3(x) \ ,c < x \leq d
\end{Bmatrix}; a < b < c < d \ constantes.$  
                    - **Dominio:**
                        - $Dom(C) = \{x \in \R/ T(x) \in \R\}$ 
                        - $=[a,b]\cup]b,c]\cup]c,d]$ 
                        - $=[a,d]$ 
                    - **Recorrido:** 
                        - $Rec(T) = Rec(f_1) \cup Rec(f_2) \cup Rec(f_3)$, cada uno con su respectivo dominio restringido 
                    - **Idea Grafica:**
                    - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/pMwXLrRw9iL_VHKkbdrEFWzx6fYD6clj8udVRRVYckav1dcZyAzAaed4KF2OTFEaNwGyvCfrI7FEsxgcVZYu-zbbp_WkpRRoi1srlXtLqbVSU5jXV8OJR55DmmwlroBZ.png) 
                    - **Idea Grafica:**
                        - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/XTyFZN96Bmkb8pehTE96ue9v4pCqDZ0dqszDuaebF-TeBQgBMIQFYZcOXB_VoY1zDf7-xw1xKLpi2yEXCEPr4icoCQQHHn_Q2AT16F7YC8yD-5jS3O-iW_qFYk-KUwsq.png) 
                    - 
                - **Función Exponencial** 
                    - **Definición:**
                        - Dado $b >\  \neq 1$, llamamos función exponencial de base b a la función
                        - $exp_b: \R \to \R^+$
                        - $x \to exp_b(x) b^x$ 
                        - **Observación:**
                            - El comportamiento de la función exponencial es muy distinto según sea $0<b<1, \ b>1, \ b=1$
                    - **Dominio:** 
                        - $Dom(exp_b)= \R$ 
                    - **Ejemplo 1:**
                        - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/unvgxml9tOBiBHjfkHDoVL_Q-cG5qwpQqnrK47Ve-97eMG8HrlJGjsMtN__yrU46AsoT2P5_O-zdRdc_aMkoQvy9W0XPQpDjajkvbgxrVjYD1llsLx4UxRyx0K577Q4C.png) 
                    - **Ejemplo 2:**
                        - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/cukltUQjiB0sKkq-paa0dXd9ZuCKfhCHJHuKnVq3lhQHtyE-NCA3aSP1WPQgNwUqYQZ2bQaKO6FBZlaJ4UvWV-ZuhSF-pgT0XzRiHdpYGUVD1LdQAJQ0h9JrmTifYOpD.png) 
                - Ecuaciones Exponenciales
                    - **Definición:**
                        - A una ecuación en la que la incógnita aparece en un exponente se le llama ecuación exponencial
                    - **Ejemplo:**
                        1. $5^{3-x} = 125$
                        2. $3^{1-x^2} = \frac{1}{27}$ 
                        3. $\frac{4^{x+1}}{2^{x+2}} = 128$ 
                        4. $2^{3x} = 0,5^{3x+2}$ 
                    - **Solución:**
                        - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/3Y_Y1-Dt08XjeFtsKfcrOwUZzGQj2PDJ3kL038lziZ6xwrk6f4tsQUeluU7V0YwHR61yPKeUNldjzmx1jTp65fsxPZxpZtZXVwFloHNGFX-U-shk9a6P0qk9thcM165d.png) 
                    - **Propiedades:**
                        - ![](local:///Users/notminimal/remnote/remnote-6227fcb063290d00356a52be/files/h1MKETI17p4gcsXYr6qTucg4RkPahjbBedlNHYwqAb211V6aba93Tw20joaSsyoFePiT6xn_RS9vsoWmPxuONfSJqcgpgXzUzVrSG8WzHQgoHWUIhbYn2oEkb3iy_z3C.png) 
                - **Función Logaritmica**
                    - **Problema:** 
                        - Resolver $10^{1−x} = 100$ Resp: Si $x = −1 \implies 10^{1−(−1)} = 10^2 = 100$
                        - Claramente la respuesta no es fa ́cil, y podríamos estar muchos minutos u horas tratando (probando) distintos valores para encontrar la solución. La respuesta es usar otra función (la función inversa) para resolver este problema. Recordando la definición de la función exponencial:  $exp_b: \R \to \R^+ \ x \to exp_b(x) = b^x, \ b \neq 1$, Podemos definir la función logaritmo(función inversa de de la función exponencial)  	 		 			 				 	 				 			 		 	 
                    - **Definición:**
                        - Se define la función logaritmo como la función inversa de la exponencial como:
                        - $log_b: \R^+ \to \R, \ x\to y=log_b(x), \ b>0, b \neq 1$, donde se cumple que: $log_b(x)=y\iff b^y=x$
                    - **Ejemplo 1:**
                        - Para cada una de las siguientes igualdades exponenciales escribir la correspondiente igualdad logarítmica
                    - **Propiedades de los Logaritmos:**
                        1. $log_b(x⋅y)=log_b x+log_b y$ 
                        2. $log_b(x^y)=y⋅log_bx$ 
                        - A partir de estas dos propiedades se pueden deducir las siguientes:	 
                        3. $log_b(\frac{x}{y}) =log_bx−log_by$ 
                        4. $log_b \sqrt[y]{x} = \frac{1}{y} *log_bx$ 
                    - **Observaciones:**
                        1. El logaritmo de la base es siempre 1 $log_bb = 1$ ¿por qué?
                        2. El logaritmo de 1 es 0 en cualquier base $log_b 1 = 0$ ¿por qué?
                        3. Cuando la base es 10 se llama logaritmo decimal o vulgar y se escribe: $log_{10} x = logx$ 
                        4. Cuando la base es e se llama logaritmo neperiano o natural y se escribe: $log_e x = ln x$ 
                        5. El logaritmo vulgar y el natural están tabulados (se pueden obtener usando la calculadora científica.
                - Certamen
                - 
Modulo 2
- Progresiones
- Trigonometría
- Números Complejos
- Formulario Certamen 2
    Básico
	    Forma Binomial: $Z= a+bi$, Modulo de Z: $|Z| \implies \sqrt{a^2+b^2}$  
	    Argumento: (θ), existe entre 0 ≤ θ ≤ 2π
	    $\sin\theta =\frac{cat.op}{hip} = \frac{b}{r} \implies b = r \cdot \sin \cdot \theta$ , $\cos\theta =\frac{cat.ad}{hip} = \frac{b}{r} \implies a = r \cdot \cos \cdot \theta$ 
	    Forma Polar: $r \cdot e^{i\theta}$ 
		$|Z| \implies \sqrt{a^2+b^2}$ 
                - $tan(\theta) = \frac{b}{a}$ 
                    - $\arctan(0)=0$, $\arctan( \frac{1}{\sqrt{3}}) = \frac{\pi}{6}$, $\arctan(1)=\frac \pi 4$, $\arctan(\sqrt 3)=\frac \pi 3$ 
                - $a=r⋅cos(θ) , b=r⋅sin(θ)$
                - $r \cdot e^{i\theta}$ 
    - Operaciones con Números Complejos
    - Formula de Moivre
    - Metodo de Cramer
    - $$\theta = 
\begin{cases}
\arctan(\frac{y}{x})        & \text{si } x > 0 \text{ y } y \ge 0\\
\frac{\pi}{2}               & \text{si } x = 0 \text{ y } y > 0\\
\arctan(\frac{y}{x}) + \pi  & \text{si } x < 0\\
\frac{3\pi}{2}              & \text{si } x = 0 \text{ y } y < 0\\
\arctan(\frac{y}{x}) + 2\pi & \text{si } x > 0 \text{ y } y < 0
\end{cases}$$

[[Algebra 2]]
