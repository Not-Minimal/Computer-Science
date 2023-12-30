**Nombre del Proyecto:** Desarrollo de pagina web y app móvil para crear ordenes de trabajo y cotización para JC Reparación y Mantención de Vehículos y Maquinaria Pesada SpA

**Objetivos:**

1. Crear una página web utilizando Astro.build para promocionar los servicios de JC Reparación y Mantención de Vehículos y Maquinaria Pesada SpA.
2. Desarrollar una aplicación móvil con Flutter y Firebase que permita a los usuarios generar órdenes de trabajo y cotizaciones desde dispositivos móviles.
3. Configurar informes de producción en Google Data Studio y habilitar la visualización de estos informes en la aplicación móvil.
4. Crear macros utilizando JavaScript en Google Sheets para automatizar el control de inventario.
5. Diseñar y documentar un nuevo sistema de trabajo en gestión de órdenes de trabajo, cotizaciones y automatización.
6. Generar material gráfico y documentación de servicios para promocionar y describir los servicios de la empresa.
7. Desplegar la página web utilizando GitHub Deploy Sites y/o Netlify para que esté disponible en línea.

#### Notas Semana 1
##### 09/10
- Instalación de Node Js
- Conocer sobre Astro.build
- Aprender comandos Basicos como $cd, mkdir, dir$ en windows.
- Crear un proyecto en Documents/Practica de Astro.build con: 
```
# npm create astro@latest
```
- Se menciona sobre Tailwind.css
- Se navego en el proyecto y se desplego en localHost.
- Se modifico el ejemplo en un Hola Mundo

##### 11/10
- Se instala la libreria de Tailwind.css 
- Se instala libreria react
- Se crea estrcutura del proyecto con las carpetas necesarias: 
	- -Global, Icons, infopages, landing, layouts, pages, components.
- Se creo input.css que corresponde al css global para uso de fuente Inter.
- Se creo Layout, Navigation y se dejo puesto en marcha Hero o landing.
- Dentro de la carpeta global: se cree Navigation.astro para el navbar que muestra el logo, y acceso a paginas de servicios, Nosotros y Contacto.

##### 12/10
- Crear Landing de Servicios: 
	1. Mantenimiento Preventivo
	2. Reparaciones Mecánicas
	3. Servicios de Frenos y Suspensión
	4. Alineación y Balanceo
	5. Diagnóstico Electrónico y Reparación de Electrónica
	6. Reparación de Maquinaria Pesada
- Crear Landing de Equipo:
	- Equipo 1:
		1. Jefe Mecanico: Jose Obreque
		2. Jefe Mecanico: Cristian Chavez
		3. Mecanico: Cesar Sepulveda
		4. Ingenierio Mecanico: Jose Hernandez
		5. Ayudante Mecanico: Fabian Martinez
		6. Administrador: Saul Muñoz
	Equipo 2:
		1. Desarrollador Web: Matias Arenas
		2. Desarrollador Web: Victor Cabero
		3. Desarrollador Web: Saul Muñoz
- Conocer mas sobre componentes de Tailwind CSS
- Se enseña sobre diseños, uso de diseños preestablecidos como Material Design, Tailwind, etc.
- Estructura basica de una Pagina web: Navigation o NavBar, Landing, Footer.

##### 16/10
- Instalar Git 
- Hacer Git Clone "https://github.com/Not-Minimal/hilarious-horizon"
- Estar todos conectados en el mismo repositorio con Github.
##### 17/10
- Se agrega redes sociales a la pagina web
- Se agregan los logos de las marcas con las que trabaja el taller
- Se agregan descripciones e imagenes a los servicios
- Se agrego informacion de los equipos
##### 18/10
- Retroalimentacion de lo aprendido desde el inicio
- Crear Componente Card y reutilizar para optimizar codigo
- Direccionar a secciones de la pagina: Servicios, Equipo.
- Crear Pagina Nosotros

##### 19/10
- Reparar bug de no cierre cuando el NavBar quedaba abierto ![[Captura de pantalla 2023-10-19 a la(s) 20.18.27.png]]- Lo que se hizo fue modificar la clase de tailwind css para que el punto de quiebre o breakpoint de la web, funcionara como corresponde.
- Crear Componente Equipo y Reutilizar codigo.
- Cambiamos el nav bar a uno con mas estilo:
  ![[Captura de pantalla 2023-10-19 a la(s) 20.47.27.png]]![[Captura de pantalla 2023-10-19 a la(s) 20.47.48.png]]
##### 20/10 
- Modificar width del breakpoint menor en servicios
- Agregamos la page Nosotros dentro del index.astro para generar contraste en la pagina web.
- Se agrego en el componente Nosotros, Una mision y vision de la empresa.
- Se agregaron datos relevantes tales como: Cantidad de Ordenes de Trabajo realizas por la empresa, cantidad de trabajadores, Horario y cantidad de servicios en terreno.
- Se agregan las siguientes dependencias:
	- npm install -D @tailwindcss/forms
	- npm install -D @tailwindcss/typography
- Se crea formulario de contacto
![[Captura de pantalla 2023-10-20 a la(s) 21.58.05.png]]
##### 23/10
- Se visito el taller, para mostrar los avances de la pagina web y se recibieron las siguientes recomendaciones:
	- Imagenes 100% del taller.
	- Agregar Feed de instagram de la empresa.
	- Cambiar servicio de Alineacion y balanceo por Ajustes de Motor.
- En base a la retroalimentacion, seguiremos trabajando.
- Se logra poner el feed de instagram en la pagina web haciendo uso de un widget de la pagina Elfsight.(Por ahora como prototipo, esperamos programarlo)

##### 24/10
- Ver el formulario de contacto, que en su momento solamente lo agregamos como un Form, pero no vimos la parte logica y del servidor para poder hacer funcional el formulario.
- Se intenta crear un formulario mediante node-mailer y bodyParser.
- Se hace uso de plugin para formulario directo con la plataforma de despliegue "Netlify". Esta detecta en el form de html que es un formulario, por ende los datos registrados son enviados directamente al correo de la empresa.
- Se hace deploy de la web, para ver que todo funcione correcto.
- De momento el dominio es: https://friendly-horse-33bfe5.netlify.app/

##### 25/10
- Ver por que las imagenes y SVG's no aparecen en linea.
- Agregar favicon.
- Ver que las lineas de componentes sean en toda la pagina igual. En los dispositivos medianos como tablet.
##### 26/10
- Se cambia la ubicacion de imagenes, iconos y logos de la pagina.
- Agregar favicon.
- Se optimizo la misión y vision.
- Boton de llamar, funciona directamente para llamar al jefe mecanico.
##### 27/10
- Visita a taller en busqueda de retroalimentacion sobre la pagina.
- Nos pidieron agregar mas servicios que son fundamentales y principales en la empresa.
- Se nos solicita agregar en la web Los principales Scanners que usa la empresa para mostrarlos.

##### 30/10
- Se cambia la ubicación de imagenes, iconos y logos de la pagina.
- Se mejoro el apartado de Nosotros, se optimizo la misión y vision.
- Ahora toda la pagina tiene una linea de diseño clara.

#### 31/10
- Se agrega en la web Los principales Scanners que usa la empresa para diagnostico automotriz(Falta Mejorarlos)

#### 01/11
- Se mejora el landing de Scanners que usa la empresa para mostrarlos
- Se crea el landing de productos de la empresa
- Se agregan las imagenes, Nombres, Precios y SKU de los productos
- Se agrega el Link a productos en el navBar
- Agregar servicios extras.

#### 02/11
- Se Compra Dominio junto con el cetificado de seguridad o protocolo HTTPS
- Empezar a cargar imagenes reales.
- Hablar sobre SEO y agregarlo la siguiente semana.
- Se carga nuevo favicon con logo de la empresa.

##### 03/11
- Se visito el taller, para mostrar la pagina web terminada, nos felicitaron y agradecieron.
- Se empiezan a cargar imagenes 100% del taller.

##### 06/11
- Conocer sobre SEO Web
- Agregar SEO a la pagina con: npm install astro-seo

##### 07/11
- Planificar siguientes semanas de practica.
- Detallar pasos a seguir, teniendo en cuenta frameworks, uso de bases de datos, informes mediante Google Data Studio, etc.

##### 08/11
- Conectar Pagina a Google Analitics![[Captura de pantalla 2023-11-08 a la(s) 9.16.46 p. m..png]]
- Conocer Sobre Looker studio o Google Data Studio para creación de informes con datos de la empresa.
##### 09/11
- Diseño detallado del nuevo sistema de gestión de órdenes de trabajo y cotizaciones.![[Diagrama en blanco.png]]
##### 10/11
- Se visito el taller, para comprender mejor la gestion y el proceso de trabajo.
##### 13/11
- Se Mejoro SEO de la pagina web
- Se agregaron productos nuevos
- Se Actualizaron las columnas de servicios mostradas en dispositivos medianos pasando de 1 a 2. (Muestra Mas info)
- Se deja constancia para futura creacion de banner en SEO.
##### 14/11 
#### *Creación de la aplicación móvil con Flutter y Firebase.**
- Creación de  proyecto para aplicacion, se vio el apartado de Ordenes de Trabajo y como automataizar la creacion de un PDF con los Datos.
##### 15/11
- Corroborar datos entregados por la empresa para empezar el proyecto.
- Revisando los datos en excel para ordenar y organizar.
##### 16/11
- Diseño de la Interfaz de Usuario y Configuración Firebase
- Continuar organizando los datos y definir la estructura de la base de datos en Firebase
- Diseñar la interfaz de usuario para la sección de Órdenes de Trabajo.

##### 17/11
- Investigación y Revisión de Diseño
- Investigar los principios fundamentales de la Interfaz de Usuario (UI) y Experiencia de Usuario (UX).
- Leer artículos y estudios de caso para comprender la importancia del diseño centrado en el usuario.

##### 20/11
- Introducción a Sistemas de Diseño
- Investigae sobre sistemas de diseño y su papel en el desarrollo de aplicaciones
- Leer acerca de cómo los sistemas de diseño mejoran la coherencia y eficiencia en el diseño.
##### 21/11
- Explorar sistemas de diseño populares como Google Material Design, Tailwind css, Apple Design entre otros.
- Comprende los componentes y principios de diseño que ofrecen estos sistemas.

##### 22/11
- Profundizar Material Design
- Dedicar tiempo a comprender en detalle los principios y directrices de Material Design.
- Estudiar la paleta de colores, tipografía y la disposición de los elementos en Material Design https://m3.material.io/

##### 23/11
- Explorar la documentación oficial de Material Design para obtener información detallada sobre componentes y comportamientos.
- Analizar casos de uso específicos de Material Design en aplicaciones similares.

##### 24/11
- Aplicación Práctica de Material Design en Flutter
- Investiga cómo implementar Material Design en Flutter.
- Comenzar la adaptacion la interfaz de usuario de la app en Figma(Diseño)

##### 27/11
- Diseño de App en Figma en base a Material Design.
- Prototipado de la app

##### 28/11
- Acciones de los botones de la app de diseño en figma 
- Ver SDK de Flutter e instalar

##### 29/11
- Instalar SDK De Android Studio
- Actualizar Dependencias de Desarrollo

##### 30/11
- Instalar extensiones en VS Code de flutter y Dart
- Testear y compilar proyecto base de flutter
##### 1/12
- Ver documentacion sobre Flutter, acerca de Sistemas o Aplicaciones creadas con este framework
- Ver casos de exito de Flutter
##### 4/12

##### 5/12
- Crear App base de template de Flutter, conocer ciertos componentes, etc.
- Agregar Drawer y AppBar(No funciona, ver el dia siguiente)

##### 6/12
- Agregar Firebase al proyecto
- Agregar plataformas: Android, IOS, MacOS, Windows
- Agregar las dependencias como firebase_core, firebase_core_platform_interface, etc.

##### 7/12

- Crear la pantalla de inicio de sesión y registro.(Pendiente)
- Configurar las reglas de seguridad en Firebase.

##### 8/12

- Desarrollar la lógica para gestionar usuarios autenticados y no autenticados.(Pendiente)
- Personalizar la interfaz de usuario de la pantalla de inicio.
- Implementar la funcionalidad de cerrar sesión.(Pendiente)

##### 11/12

- Crear una pantalla principal después del inicio de sesión con información relevante de las ordenes de Trabajo.
- Obtener y mostrar datos desde Firebase Firestore en la aplicación.
- Implementar la capacidad de agregar datos en Firestore.

##### 12/12

- Mostrar datos de firestores en App(Pendiente)
- Realizar pruebas exhaustivas en diferentes plataformas (Android(Pendiente), IOS(pendiente), MacOS, Windows).

##### 13/12

- Mostrar datos de firestore en App(Funciona, gracias a cambio de reglas de la base de datos de Cloud Firestore) de: 
```  
rules_version = '2';

service cloud.firestore {
  match /databases/{database}/documents {
    match /{document=**} {
      allow read, write: if false;
    }
  }
}
```
a:
```  
rules_version = '2';

service cloud.firestore {
  match /databases/{database}/documents {
    match /{document=**} {
      allow read, write: if
      	request.time < timestamp.date(2023,12,30)
    }
  }
}
```

- Realizar pruebas exhaustivas en plataformas Android y Web.

#### 14/12
- Se actualizó el DrawerHeader con un nuevo diseño y un texto personalizado.
- Se agregaron nuevos elementos ListTile para representar distintas secciones en el menú del Drawer(Dashboard, Ordenes de Trabajo, Informes Tecnicos, Ordenes de Repuesto, Clientes, Vehiculos).
- Cada ListTile tiene un texto, un ícono representativo y una función de callback (en este caso, onTap: () {}), esta permitirá navegar entre las distintas pestañas de la App.
- - Se realizaron cambios significativos en las páginas `edit_data.dart` y `home.dart`, incluyendo modificaciones en la lógica de navegación y actualización de datos.
- En `firebase_service.dart`, se mejoró la manipulación de datos al agregar un objeto `person` al lugar de `doc.data()`.
- Se optimizó la estructura del código eliminando parámetros innecesarios y mejorando la legibilidad.
#### 15/12
- Actualizaciones en la apariencia del Drawer con cambios de color.
- Adición de una función para eliminar atributos de documentos.
- Incorporación de una página principal llamada "Dashboard" con funcionalidad de navegación entre pestañas.
- Se finalizo el CRUD para el documento de solo un atributo: Name.
- Falta implementarlo para todos los datos lentamente.

#### 18/12
- Implementación de Firebase Auth con soporte para autenticación mediante correo electrónico.
- Agregada validación de contraseña débil y de correo en uso durante el registro.
- Mejoras no especificadas en el commit `d4ce2f29`.
- Optimización del inicio de sesión con `FirebaseAuthService` y mejoras en la experiencia de usuario al registrarse o iniciar sesión.

#### 19/12
- Se ha incorporado Firebase Authentication para gestionar la autenticación y obtener el UID del usuario actual.
- La función `getPeople` ahora filtra las personas por el UID del usuario autenticado, permitiendo que cada usuario vea solo sus propias personas.
- Los métodos `addPerson`, `updatePerson` y `deletePerson` han sido ajustados para operar en la colección 'userPeople' del usuario actual, garantizando la privacidad de los datos.
- Se han agregado comentarios para mejorar la comprensión del código.

##### 20/12
- Se actualizó la función de agregar datos en la aplicación.
- Ahora admite fecha y número de orden como parámetros.
- La página de edición (`edit_page`) también fue mejorada para permitir la edición de fechas.
- Se introdujo una nueva función para el número de orden.
- Se implementó una función de autoincremento en la colección "Counters" para controlar el índice de las órdenes.

##### 21/12
Se realizaron modificaciones significativas en la página de Dashboard (`DashboardPage`) para mejorar la experiencia del usuario y proporcionar información más útil. A continuación, se detallan los cambios implementados:

1. **Limitación de la lista "Últimas órdenes":**
    
    - Se implementó una limitación en la cantidad de elementos mostrados en la lista "Últimas órdenes" a 10 elementos.
    - Para lograr esto, se utilizó la función `take(10)` para tomar los primeros 10 elementos de la lista de datos obtenida de la función `getPeople()`.
    
    dartCopy code
    
    `// Fragmento de código relevante if (snapshot.hasData) {   // Limita la lista a 10 elementos   final limitedData = (snapshot.data as List<dynamic>).take(10).toList();   // Resto del código... }`
    
2. **Mini vista de las últimas órdenes:**
    
    - Se agregó una mini vista en la parte superior de la pantalla de DashboardPage.
    - Esta mini vista proporciona información resumida de las órdenes más recientes, permitiendo una rápida visión general de las actividades recientes.
    
    dartCopy code
    
    `// Fragmento de código relevante Row(   children: [     // ... (código existente)   ], ), Expanded(   child: Container(     // ... (código de la mini vista de órdenes)   ), ), // ... (código existente)`
    

Estos cambios contribuyen a una interfaz de usuario más efectiva y eficiente, facilitando a los usuarios acceder rápidamente a información relevante sobre las órdenes más recientes. La implementación se realizó de manera organizada y mantenible para asegurar un rendimiento óptimo y una experiencia de usuario mejorada.

##### 22/12
- Agregado Botón de Crear orden en la parte superior de la página Dashboard, mejorando la visibilidad de los ListViewBuilder para mostrar órdenes de trabajo.
- Añadida página de clientes y actualización de la interfaz de la página de inicio de sesión.
- Característica agregada: BasePage con barra de navegación y menú lateral.
- Se añadió un botón de acción flotante a la BasePage.
- Mejora: Refactorización de la filtración y visualización de clientes.
##### 25/12
- Refactorización de la lógica de filtrado por tipo de cliente y actualización de la interfaz de usuario.
- Actualización de rutas e imagen de fondo en la página de inicio de sesión.
- Se añadió un botón de retroceso a la página de clientes.

##### 26/12
- Eliminación de importaciones no utilizadas y descomentario de la llamada a setState para modificar el error: índice fuera de rango, desbordamiento.
- Refactorización del selector de fecha y eliminación de código comentado.
- Añadidos textformfields al formulario de la colección de órdenes de trabajo con sus controladores.
- Actualización de todos los formularios; ahora en el diseño se tienen más datos como vehículos, clientes, repuestos y productos desde los datos de la orden.
- Añadidos campos de formulario para los detalles de la factura.
##### 27/12
- Agregado el paquete Google Fonts y actualización del tema.
- Actualización del estilo del título del panel de control.
- Refactorización de BasePage y adición de tema oscuro.
- Refactorización del diseño del panel de control.
- Actualización del esquema de colores en themes.dart, modificación con BasePage en add_data.dart para tener una Base permanente. Y mejora del TextFormField.
- Modificación de espaciado en el relleno, nuevos SizedBox para espaciado en la aplicación, hermosos TextFormField con etiqueta y labelText.
- Refactorización de código para mejorar el rendimiento y la legibilidad.
##### 28/12
- Finalización del CRUD para la aplicación móvil.
- Mejora del diseño del panel de control.
- Optimización del inicio de sesión y registro con Firebase Authentication.
- Adición de página y funcionalidad de detalles de la orden.

##### 29/12
- Mejora de la experiencia de usuario en la aplicación móvil.
- Actualización del esquema de colores y diseño del panel de control.
- Refactorización del código para un mejor rendimiento y legibilidad.
- Nuevo lanzamiento publicado por Not-Minimal: **Versión Estable.**
Imagenes de la Aplicación:
Pagina de Login
![[Captura de pantalla 2023-12-30 a la(s) 6.59.38 p. m..png]]
Pagina de Registro:
![[Captura de pantalla 2023-12-30 a la(s) 7.00.49 p. m..png]]
Dashboard: Error al cargar datos ya que el usuario es nuevo y no existen ordenes aun.
![[Captura de pantalla 2023-12-30 a la(s) 7.02.08 p. m..png]]
Crear Orden de Trabajo:




**Semana 3-4 (23 de octubre - 5 de noviembre): Creación de la aplicación móvil con Flutter y Firebase.**

- Semana 11: Inicio del desarrollo de la aplicación móvil(del 23 de octubre al 29 de octubre). 
- Semana 12: Continuación del desarrollo y configuración de Firebase para la aplicación(del 30 de octubre al 5 de noviembre).

**Semana 5-6 (6 de noviembre - 19 de noviembre): Despliegue de la página web con GitHub Deploy Sites y/o Netlify.**

**Recursos Necesarios:**

- Equipo de desarrollo web y móvil.
- Diseñador gráfico (si es necesario).
- Personal de gestión de proyectos.
- Acceso a herramientas como Astro.build, Flutter, Firebase, Google Data Studio, Figma y GitHub/Netlify.
- Acceso a Google Sheets para la automatización de inventario.

**Presupuesto:**

- Costos de desarrollo y diseño (si es necesario).
- Costos de suscripción a herramientas y servicios (por ejemplo, Firebase, Google Data Studio).

**Riesgos Potenciales:**

- Retrasos en el desarrollo.
- Cambios en los requisitos del proyecto.
- Problemas técnicos imprevistos.

**Evaluación y Seguimiento:**

- Reuniones regulares de seguimiento del proyecto.
- Evaluación continua de los hitos alcanzados en relación con los objetivos.
- Ajuste del plan en caso de desviaciones significativas.



[[Practica Profesional 2]]
