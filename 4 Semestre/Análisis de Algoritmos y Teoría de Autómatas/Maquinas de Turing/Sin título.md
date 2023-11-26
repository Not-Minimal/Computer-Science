**Resumen:** Se presenta un ejemplo de una Máquina de Turing que reconoce un lenguaje específico. El lenguaje consiste en cadenas de la forma $a^nb^nc^n$, donde $n$ es un número positivo. La Máquina de Turing sigue una estrategia de marcar y avanzar para asegurar que la cantidad de $a$, $b$, y $c$ sea la misma.

**Mapa Conceptual:**

1. **Máquina de Turing:**
    
    - Modelo teórico de cómputo con cintas infinitas y estados.
    - Puede leer, escribir, avanzar y retroceder en la cinta.
2. **Ejemplo de Lenguaje:$a^nb^nc^n$**
    
    - Cadenas que tienen la misma cantidad de a, b, y c.
    - Ejemplo: aabbbc, aaabbbccc, etc.
3. **Estrategia de la Máquina de Turing:**
    
    - Inicia en el estado inicial.
    - Marca y avanza leyendo a.
    - Cambia a por x y avanza.
    - Entra en un bucle marcando y avanzando a.
    - Al llegar a b, cambia b por y y avanza.
    - Otra vez, entra en un bucle marcando y avanzando b.
    - Al llegar a c, cambia c por z y retrocede.
    - Retrocede hasta la primera marca y avanza una posición.
    - Reinicia el proceso para la siguiente letra a.
    - Si encuentra y o z, verifica que las marcas de a y b sean iguales.
    - Si llega al final, cambia al estado final.
4. **Resultado:**
    
    - Si el cómputo termina en el estado final, la palabra es aceptada.
    - Si el cómputo termina en otro estado, la palabra es rechazada.
5. **Complejidades:**
    
    - La estrategia asegura que la cantidad de a, b, y c sea la misma.
    - Se demuestra que el cómputo termina para cadenas válidas y no termina para otras.
6. **Observaciones:**
    
    - La Máquina de Turing tiene el mismo poder de cómputo que una computadora, pero puede ser más lenta en ciertos casos.
7. **Resumen Final:**
    
    - La Máquina de Turing demuestra una estrategia para reconocer el lenguaje anbncn y se destaca la importancia de la estrategia de marcar y avanzar en su funcionamiento.
Resumen:
En la clase, se aborda el problema de reconocer palíndromos separados por un hashtag utilizando una Máquina de Turing. Se presenta una estrategia que implica contar las letras y marcar la mitad de la palabra. Luego, se utilizan estados para verificar la simetría de las letras en ambos lados de la marca central.

Mapa Conceptual:

Problema del Palíndromo:

Reconocer palabras que son palíndromos separados por un hashtag.
Conteo y Marca:

Se utiliza una estrategia de contar letras y marcar la mitad de la palabra con letras mayúsculas.
Estados Iniciales:

Se establecen estados iniciales para contar y marcar.
Verificación de Simetría:

Se utilizan estados para verificar la simetría de las letras a partir de la marca central.
Manejo de Marcas:

Se desmarcan letras y se retrocede para verificar la igualdad de las letras a ambos lados de la marca central.
Avance y Borrado:

Se avanza y se borra para manejar las distintas instancias de la máquina.
Terminación del Cómputo:

Se establecen condiciones de terminación cuando se llega al final de la palabra.
Eficiencia:

Se menciona que se buscará una forma más eficiente de representar la máquina en la próxima clase.
Tarea para Practicar:

Se asigna a los estudiantes la tarea de resolver otros ejercicios relacionados con palíndromos y lenguajes.
Próxima Clase:

Se adelanta que en la próxima clase se verá una representación más compacta y eficiente de la misma máquina.
Observaciones Finales:
Se destaca la complejidad de la máquina presentada y se anima a los estudiantes a practicar la resolución de problemas similares. La eficiencia en la representación de la máquina será abordada en la siguiente clase.




