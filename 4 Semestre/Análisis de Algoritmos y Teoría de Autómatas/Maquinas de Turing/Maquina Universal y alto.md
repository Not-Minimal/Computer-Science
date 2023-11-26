# Análisis de Algoritmos y Teoría de Autómatas
## CLASE 12: Máquina Universal

### Objetivos para Hoy
- Introducción.
- Máquina de Turing Universal.
- Tesis de Turing-Church y problema del alto.

## Máquina de Turing Universal
- Una máquina de Turing puede hacer cualquier cosa, pero generalmente está diseñada para un solo propósito.
- Tener una máquina de Turing por cada problema diferente es poco práctico.
- Idealmente, necesitamos un sistema que lea programas y entrada para entregarnos una salida.

### Una Máquina de Turing Universal
- Alan Turing encontró la solución a este problema en 1936-37.
- Creó una máquina llamada 'Universal', capaz de recibir la descripción de cualquier otra máquina y simular su funcionamiento.
- Este concepto es el verdadero comienzo de las computadoras programables, diferentes de los circuitos electrónicos de un solo propósito.

### ¿Cómo funciona la máquina universal?
- **Problema #1:** Alfabetos de tamaños diferentes.
  - **Solución:** Codificar todo en binario.
- **Problema #2:** Cantidad variable de estados e instrucciones.
  - **Solución:** Codificar ambos en binario.
- La construcción asume que todo puede ser codificado y leído en binario.

## Construcción de la Máquina Universal
- Asumimos que todo puede ser codificado y leído en binario.
- Presentaremos una versión de la máquina de Turing universal, pero existen muchas.
- La representación más pequeña conocida tiene 4 estados y 6 símbolos.

### Cintas
- Funcionamiento de la Máquina de Turing.
- Busca que el estado en la cinta 2 coincida con el estado 1 de la cinta 3.
- Si no encuentra, la máquina termina. Si el estado en la cinta 2 es final, va al estado final de esta máquina.
- Al encontrar el estado, busca a la derecha si el símbolo de la cinta 3 coincide con el símbolo de la cinta 1.
- Cambia el estado en la cinta 2 por el estado 2 a la derecha del símbolo en la cinta 3.
- Cambia el símbolo en la cinta 1 por el símbolo 2 a la derecha del estado 2 de la cinta 3.
- Mueve el cabezal de la cinta 1 según el símbolo de movimiento de la cinta 3, a la derecha del símbolo 2.
- Regresa la cinta 3 a la posición inicial y vuelve a 1.

### Ejemplo
Ejemplos detallados del funcionamiento de la máquina.

## Tesis de Church-Turing
- **Tesis de Church-Turing:** Todo lo computable es lo que puede resolverse con una máquina de Turing.
- No es demostrable, pero no es difícil ver que ASSEMBLER y MT son equivalentes.

## ¿Cuál es el límite de una Máquina de Turing?
- **Problema del alto:** ¿Es posible, computacionalmente hablando, saber si una máquina se detendrá dada una entrada?
- **Respuesta:** Es imposible.

### Demostración
- Asumimos que es posible.
- Sea 𝑆𝑈 una máquina universal que, dado la descripción de una máquina de Turing 𝑀 y una entrada 𝑥, termina en un estado de aceptación si 𝑀(𝑥) se detiene, y termina en un estado de rechazo si no.

### Nota
- <𝑀> es la máquina 𝑀 codificada.

### Supongamos que es posible
- En resumen: 𝑆𝑈(<𝑀>,𝑥) responde V si 𝑀(𝑥) se detiene, y responde F si 𝑀(𝑥) no se detiene nunca.
- 𝑆𝑈(<𝑀>,𝑥) responde V si 𝑀(𝑥) se detiene, y responde F si 𝑀(𝑥) no se detiene nunca.

### Demostración
- Supongamos que 𝑆𝑈 existe.
- Construimos una máquina 𝐷 que termina si y solo si 𝑆𝑈 no termina.

### Demostración
- Sea 𝐷(𝑥):𝑖𝑓(𝑆𝑈(𝑥,𝑥))  𝑤ℎ𝑖𝑙𝑒(1);
- En resumen: 𝐷(𝑥) termina si y solo si 𝑥(𝑥) no termina (recordemos que toda máquina puede ser codificada).

### ¿Qué pasa si 𝑥=<𝐷>?
- 𝐷(𝐷) termina si y solo si 𝐷(𝐷) nunca termina.
- **CONTRADICCIÓN!** Por lo tanto, no puede existir 𝑆𝑈.
