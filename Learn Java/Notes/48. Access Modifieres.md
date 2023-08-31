Probablemente hayas visto el siguiente código:

```java
public static void main(String[] args) { 
    // some code goes here
}
```

¿Por qué aparece la palabra "público"? Como probablemente puedas adivinar, significa que el `main(...)` método está disponible para todos. La palabra `public` aquí es un modificador de acceso.

Un **modificador de acceso** es una palabra clave especial que especifica quién puede usar su código o una parte especial del mismo. Se puede colocar delante de cualquier campo, método o de toda la clase.

¡Ya conoces al menos uno de los modificadores de acceso! Los demás son: `package-private`, `protected`, y `private`. ¿Por qué los necesitamos? Vamos a averiguar.

##### Bien, entonces ¿por qué debería usarlos?

Hay dos razones principales para controlar el acceso: claridad y seguridad del código.

**Claridad del código.** Imagine que su código es el complicado motor de una lavadora. Hay algunas funciones disponibles, por ejemplo, elegir un programa de lavado o iniciar un proceso de lavado.

¿Qué podemos hacer para ayudar al usuario a descubrir rápidamente cómo lavar su ropa? Podemos tapar el motor con la carrocería y añadir unos botones para elegir un modo de lavado e iniciar el proceso. El usuario no necesita saber qué sucede dentro del cuerpo de la máquina; los botones para obtener el resultado son más que suficientes.

Así es como el control de acceso ayuda en el código: puede **"ocultar" el motor al usuario** restringiendo el acceso y simplemente proporcionándole los "botones" públicos.

**Seguridad del código.** Ahora imagine que ha desarrollado una biblioteca bastante útil que utilizan otros desarrolladores. Un día, alguien quiere usar la funcionalidad de tu código en su proyecto, pero el problema es que necesita cambiar una variable en una de tus clases. Si es público, nada puede impedirle hacerlo en su código antes de usar el método A de la biblioteca.

¿Qué puede pasar si la variable se usa en algún lugar del método B? El método B probablemente comenzaría a actuar de manera impredecible. Por lo tanto, proteger partes importantes de su código es una garantía de que se **utilizará como una parte no modificable** y su comportamiento será exactamente el mismo para el cual lo desarrolló.

##### Clases públicas y privadas-paquete

De hecho, cuando gestionas el acceso en tu código, simplemente divides los objetos de tu programa en dos grupos principales: elementos de nivel superior y elementos de nivel bajo. Los campos y métodos que se utilizan explícitamente fuera de la clase se denominan campos y métodos de nivel superior. Si se utilizan campos y métodos dentro de la clase, se los conoce como de bajo nivel. Esta lógica de bajo y alto nivel también es aplicable a las clases.  
Por lo general, el uso de elementos de bajo nivel ayuda a descargar clases, métodos o campos de nivel superior para estructurar y descomponer el código. Si estos elementos no se utilizan explícitamente, será eficaz restringir el acceso a ellos.

Ahora veamos cómo podemos establecer restricciones para diferentes partes del código. Una clase de nivel superior (ni interna ni anidada) puede tener uno de los dos modificadores siguientes:

- **paquete privado (predeterminado, sin modificador explícito):** visible solo para clases del mismo paquete;
    
- **público:** visible para todas las clases en todas partes.
    

Aquí hay una clase dentro del paquete `org.hyperskill.java.packages.theory.p1`. con acceso privado al paquete predeterminado:

```java
package org.hyperskill.java.packages.theory.p1;

class PackagePrivateClass{

}
```

Esta clase sólo puede ser utilizada por otras clases del mismo paquete. Ni siquiera es visible para clases de ningún otro paquete, incluyendo:

```java
org.hyperskill

org.hyperskill.java.packages.theory

default package
```

Tenga en cuenta los dos primeros ejemplos: si la clase es privada del paquete en el paquete `a.b`, todavía no está disponible en el paquete `a.c`ni `a`en el propio paquete.

Aquí hay una clase pública dentro del paquete.`org.hyperskill.java.packages.theory.p2`

```java
package org.hyperskill.java.packages.theory.p2;

public class PublicClass {

}
```

Esta clase no tiene restricciones de acceso, es visible para todas las clases y se puede usar en todas partes, incluyendo:

```java
org.hyperskill

org.hyperskill.java.packages.theory

org.hyperskill.java.packages.theory.p1

default package
```

La forma común de utilizar modificadores de clase de nivel superior es:

1. **hacer públicas** las clases que contienen métodos para los usuarios (los “botones”) ;
    
2. haga que todas las demás clases con métodos lógicos de bajo nivel utilizados por las públicas sean **paquetes privados** (cubra el motor con el cuerpo).
    

Recuerde: todo lo que no esté destinado a ser usado/cambiado por clases de otros paquetes no debe ser público.

##### miembros privados

Un miembro de una clase (un campo o un método, por ejemplo, un constructor de clases) tiene más opciones para elegir: **privado** , **paquete privado** , **protegido** y **público** . Como puede ver, aquí hay dos modificadores adicionales. Consideremos los modificadores de miembros con más detalle.

Los campos a menudo se declaran **privados** para controlar el acceso a ellos desde cualquier otra clase. En algunos casos, estos campos solo se usan internamente en la clase y no hay forma de cambiarlos ni acceder a ellos desde ninguna otra clase. En otros casos, se puede hacer mediante **métodos de acceso** (por ejemplo, captadores y definidores). **Los métodos getter** y **setter** se utilizan para proteger y ocultar sus datos al crear clases. Un método getter devuelve el valor de un campo, mientras que un método setter establece o actualiza el valor. Discutiremos las características principales de los métodos getter y setter más adelante en el tema relacionado con estos términos.

Los métodos privados se utilizan para ocultar la implementación de la lógica interna de bajo nivel del resto del código y hacer que los métodos públicos sean más breves y legibles.

Aquí está la clase `Counter`con el campo privado `current`. Este campo se puede leer con el método `getCurrent()`, un método getter, y cambiar con el `inc()`método. El último no es exactamente un método de establecimiento porque no establece manualmente un valor para una `current`variable, sino que simplemente lo incrementa.

```java
public class Counter {
   private long current = 0;

   public long getCurrent() {
       return this.current;
   }


   public void inc() {
       inc(1L);
   }


   private void inc(long val) {
       this.current += val;
   }
}
```

A veces se requiere un constructor de clase privado. Este tipo de constructor sólo puede usarse dentro de la clase, por ejemplo desde otro constructor, que también puede ser público o privado, o desde los métodos de la clase.

##### Miembros privados del paquete

Un modificador de acceso **privado a un paquete** no requiere ninguna palabra clave. Si un campo, un método o un constructor tiene este modificador, entonces se puede leer o cambiar desde cualquier clase dentro del mismo paquete.

Veamos un ejemplo. Aquí hay dos clases en el mismo paquete: `Salary`y `Promotion`.

La clase `Salary`tiene un campo privado de paquete y un constructor. `Salary`Se puede crear una instancia de la clase dentro de una `Promotion`clase, y sus miembros también pueden acceder al campo `Promotion`porque pertenecen al mismo paquete.

```java
public class Salary {
    long income;

    Salary(long income) {
        this.income = income;
    }
}

public class Promotion {
    Salary salary;

    Promotion(Salary salary) {
        this.salary = salary;
    }

    public void promote() {
        salary.income += 1500;
    }
}
```

##### Miembros protegidos y públicos

Descargo de responsabilidad: ¡aprenderá a utilizar estos dos modificadores más adelante!

Si un miembro de la clase tiene el modificador de acceso **protegido** , se puede acceder a él desde clases dentro del mismo paquete y desde todas las subclases de esta clase (incluidas las de otros paquetes). Por ahora, es importante recordar que la opción protegida es menos restrictiva que el paquete privado, ya que permite que algunas clases de otros paquetes accedan al miembro del código.

Un modificador de acceso **público** significa que no hay restricciones en el uso de un campo, método o clase. A menudo se usa para constructores y métodos que representan la clase API, pero no se usa comúnmente con campos.

A continuación se muestran formas comunes de comprender qué modificador de acceso elegir. No es el algoritmo definitivo, porque los temas de herencia y subclases aún no se han cubierto, pero puede ayudarle a comprender los principales casos de uso de los modificadores.

![esquemas de selección de modificadores de acceso](https://ucarecdn.com/e52d3eca-5e12-42b5-b414-a11d88c3cab5/)

Entonces, revisemos los nombres de los modificadores de acceso (de mayor a menor limitante):

- **privado** : disponible sólo dentro de una clase;
    
- **paquete privado** (también conocido como **predeterminado** , implícito): disponible para todas las clases en el mismo paquete;
    
- **protected** : disponible para clases en el mismo paquete y para subclases (se tratará más adelante);
    
- **público** : disponible para todas las clases en todas partes.
    

![tabla de comparación de modificadores](https://ucarecdn.com/cf2b948a-2ab0-4ae7-9213-fe023838ea0e/)

La tabla anterior ilustra el nivel de acceso proporcionado por los modificadores de acceso: la clase siempre tiene acceso a sus miembros, y así sucesivamente. Tenga en cuenta que aquí por subclase nos referimos sólo a una subclase de esta clase utilizada en otro paquete. Más adelante aprenderemos sobre herencia y subclases.

Recuerde que sólo se pueden utilizar modificadores **públicos o predeterminados (sin palabras clave) al declarar clases no anidadas.** Los cuatro se pueden aplicar a los miembros de la clase: campos, métodos, etc.

##### Conclusión

En este tema, aprendió acerca de los modificadores de acceso que le permiten determinar quién podrá usar el código. Usarlos hace que su código sea más seguro y claro. En conclusión, un consejo: utilice el nivel de acceso más restrictivo que tenga sentido para un miembro en particular. No hagas públicos a todos los miembros.