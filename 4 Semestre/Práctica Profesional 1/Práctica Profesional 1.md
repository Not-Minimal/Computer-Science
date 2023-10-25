**Nombre del Proyecto:** Desarrollo de pagina web y app móvil para crear ordenes de trabajo y cotización para JC Reparación y Mantención de Vehículos y Maquinaria Pesada SpA

**Objetivos:**

1. Crear una página web utilizando Astro.build para promocionar los servicios de JC Reparación y Mantención de Vehículos y Maquinaria Pesada SpA.
2. Desarrollar una aplicación móvil con Flutter y Firebase que permita a los usuarios generar órdenes de trabajo y cotizaciones desde dispositivos móviles.
3. Configurar informes de producción en Google Data Studio y habilitar la visualización de estos informes en la aplicación móvil.
4. Crear macros utilizando JavaScript en Google Sheets para automatizar el control de inventario.
5. Diseñar y documentar un nuevo sistema de trabajo en gestión de órdenes de trabajo, cotizaciones y automatización.
6. Generar material gráfico y documentación de servicios para promocionar y describir los servicios de la empresa.
7. Desplegar la página web utilizando GitHub Deploy Sites y/o Netlify para que esté disponible en línea.

**Cronograma Tentativo:**

**Semana 1-2 (9 de octubre - 22 de octubre): Desarrollo de la Página Web con Astro.build.**

- Semana 1: Reunión inicial de planificación y diseño de la estructura de la página web (9 de octubre).
- Semana 2: Desarrollo de la interfaz de usuario y la funcionalidad principal de la página web (del 10 de octubre al 22 de octubre).
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

##### 25/10
- Ver por que las imagenes y SVG's no aparecen en linea.

**Semana 3-4 (23 de octubre - 5 de noviembre): Creación de la aplicación móvil con Flutter y Firebase.**

- Semana 11: Inicio del desarrollo de la aplicación móvil(del 23 de octubre al 29 de octubre). 
- Semana 12: Continuación del desarrollo y configuración de Firebase para la aplicación(del 30 de octubre al 5 de noviembre).

**Semana 5-6 (6 de noviembre - 19 de noviembre): Despliegue de la página web con GitHub Deploy Sites y/o Netlify.**

- Preparación final y despliegue de la página web en la plataforma elegida (del 6 de noviembre al 19 de noviembre).

**Semana 7-8 (20 de noviembre - 3 de diciembre): Diseño y documentación del nuevo sistema de trabajo.**

- Semana 7: Diseño detallado del nuevo sistema de gestión de órdenes de trabajo y cotizaciones (del 20 de noviembre al 26 de noviembre).
- Semana 8: Documentación de procesos, flujos de trabajo y políticas del nuevo sistema (del 27 de noviembre al 3 de diciembre).

**Semana 9-10 (4 de diciembre - 17 de diciembre): Desarrollo de macros en Google Sheets para el control de inventario.**

- Semana 9: Creación de macros para automatizar tareas de control de inventario (del 4 de diciembre al 10 de diciembre).
- Semana 10: Pruebas y refinamiento de los macros en Google Sheets (del 11 de diciembre al 17 de diciembre).

**Semana 11-12 (18 de diciembre - 28 de diciembre): Creación de la aplicación móvil con Flutter y Firebase.**

- Semana 11: Inicio del desarrollo de la aplicación móvil (del 18 de diciembre al 24 de diciembre).
- Semana 12: Continuación del desarrollo y configuración de Firebase para la aplicación (del 25 de diciembre al 28 de diciembre).

**Semana 13 (23 de octubre - 5 de noviembre): Generación de material gráfico y documentación de servicios.**

- Semana 3: Diseño de material gráfico, como folletos y gráficos promocionales (del 18 de diciembre al 24 de diciembre).
- Semana 4: Elaboración de documentos que describan los servicios de la empresa(del 25 de diciembre al 28 de diciembre).

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
