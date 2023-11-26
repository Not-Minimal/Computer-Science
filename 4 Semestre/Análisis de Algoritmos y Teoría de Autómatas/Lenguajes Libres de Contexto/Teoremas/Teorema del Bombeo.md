•Análisis de Algoritmos y Teoría de Autómatas

•CLASE 10:

•Bombeo y GDC

•Objetivos para Hoy

•Teorema del Bombeo

•

•Clausura de LR y LLC

•

•Gramáticas Dependientes del Contexto

•Teorema del bombeo

•Si un lenguaje es Libre de Contexto, entonces existe un p, tal que si w∈L es tal que |w|>p, se puede separar w=xuyvz tal que:

–uv≠ε

–|uyv|≤p

–∀n≥0, xu^n yv^n z∈L

•Demostración: T. del bombeo

•Sea gramática G={Σ,V,S,R} LC.

•Si una palabra es de largo N>|V|, entonces de debe repetir un no terminal.

•Demostración: T. del bombeo

•Propiedades de Clausura: LR

•Los lenguajes regulares son cerrados por unión, concatenación y clausura de Kleene:

–L_1∪L_2=L(E_1 |E_2)

–L_1∘L_2=L(E_1.E_2)

–〖(L_1)〗^∗=L(〖E_1〗^∗)

•Los lenguajes regulares son cerrados por complemento:

–Si A={Q,Σ,q_0,F,δ} reconoce L, entonces B={Q,Σ,q_0,Q-F,δ} reconoce L^c.

•A pesar de que la intersección no es equivalente a la concatenación, es demostrable que la intersección finita de regulares y la resta si son regulares.

•Propiedades de Clausura: LLC

•Los lenguajes libre de contexto son cerrados por unión, concatenación y clausura de Kleene:

–

•Los lenguajes libre de contexto NO son cerrados por complemento, intersección o resta:

•Actividades

•Demostrar que L={w|w=a^n b^n c^n, n≥0} no es LLC.

•Demostrar que el lenguaje de los paréntesis pareados no es regular.

•Demostrar que el siguiente lenguaje es LC L={w|w=a^m b^n c^p, m=n∨n=p∨m=p}

•Gramáticas Dependientes del Contexto

•En términos formales, se definen igual que las gramáticas de siempre:

•G={Σ,V,P,S}

–Σ: Alfabeto o conjunto de terminales.

–V: Conjunto de no terminales.

–P: Conjunto de producciones.

–S∈V: no terminal inicial.

•Opciones de Producciones

•Gramática Regular (izquierda):

–A→aB

–A→a

–A→ε

–Nota 1: Izquierda o derecha son equivalentes.

•Gramática Libre de contexto:

–A→γ, con γ cadena de terminales y no terminales.

•Opciones de Producciones

•Gramática Dependiente del contexto:

–αAβ→αγβ

–S→ε

–Letras griegas son palabras de terminales y no terminales, A un no terminal (|γ|>0).

–

•Demás está decir que cualquier otra gramática vista hasta ahora es entonces sensible al contexto.

•Notación

•Notación:

–A→^∗ aabbcc

–Significa que la primera, después de sucesivas aplicaciones, puede generar la segunda.

–

•El lenguaje generado es, entonces L(G)={w|〖S→〗^∗ w}.

–Estos son, exactamente, los lenguajes dependientes del contexto.

•Ejemplo

•Esta GDC reconoce {〖w|w=a〗^n b^n c^n,  n≥0}:

–S→ε

–S→aSBC

–CB→HC

–HC→HB

–HB→BC

–aB→ab

–bB→bb

–bC→bc

–cC→cc

•Ejemplo

•Esta regla no está en forma GDC

–CB→HC

–

•Se puede transformar así:

–CB→XB

–XB→XC

–XC→HC

•



[[Teorema del Bombeo 2.0 - Como no Bombear]]



