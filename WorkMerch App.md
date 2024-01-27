## Diagrama de Flujo Plataformas
Este diagrama de flujo describe el proceso de configuración de opciones en Firebase según la plataforma de destino.


``` mermaid
graph TD
  Start[shape: oval, icon: flag] -->|Inicio| CheckIfWeb[shape: diamond, icon: globe]
  CheckIfWeb -->|Sí| UseWebConfig[icon: gcp-app-engine]
  CheckIfWeb -->|No| DeterminePlatform[icon: device]
  DeterminePlatform -->|Android| AndroidConfig[icon: android]
  DeterminePlatform -->|iOS| iOSConfig[icon: apple]
  DeterminePlatform -->|MacOS| MacOSConfig[icon: laptop]
  DeterminePlatform -->|Windows| WindowsConfig[icon: laptop]
  UseWebConfig -->|Configuración Web| EndWebConfig[shape: oval, icon: check]
  AndroidConfig -->|Configuración Android| EndAndroidConfig[shape: oval, icon: check]
  iOSConfig -->|Configuración iOS| EndiOSConfig[shape: oval, icon: check]
  MacOSConfig -->|Configuración MacOS| EndMacOSConfig[shape: oval, icon: check]
  WindowsConfig -->|Configuración Windows| EndWindowsConfig[shape: oval, icon: check]
```
### Explicación

- **Inicio:** El proceso comienza en el nodo "Inicio".
- **CheckIfWeb:** Se verifica si la aplicación es una aplicación web.  
    - Sí: La configuración se realiza utilizando la configuración web de Firebase.
    - No: Se determina la plataforma de destino.
- **DeterminePlatform:** Según la plataforma de destino, se realiza la configuración correspondiente.
    - Android: Configuración específica para Android.
    - iOS: Configuración específica para iOS.
    - MacOS: Configuración específica para MacOS.
    - Windows: Configuración específica para Windows.
- **EndWebConfig, EndAndroidConfig, EndiOSConfig, EndMacOSConfig, EndWindowsConfig:** Fin del proceso de configuración para cada plataforma específica.
![[diagram-export-27-1-2024-18_39_51.png]]
## Diagrama Secuencias Firebase Authentication
Este diagrama de secuencia describe el flujo de autenticación en Firebase para las operaciones de registro e inicio de sesión.

### Registro de Usuario

sequence
Client [icon: user] > FirebaseAuthService: Register request
activate Client
FirebaseAuthService [icon: firebase] > FirebaseAuth [icon: firebase]: Create user
alt [label: if registration successful]
  FirebaseAuth - FirebaseAuthService: User object
  FirebaseAuthService --> Client: User object
else [label: if registration fails]
  FirebaseAuthService --> Client: Null response
end
deactivate Client

### Explicación

1. El usuario (`**Client**` ) envía una solicitud de registro (`**Register request**` ) al servicio de autenticación de Firebase (`**FirebaseAuthService**` ).
    
2. El servicio de autenticación (`**FirebaseAuthService**` ) interactúa con Firebase (`**FirebaseAuth**` ) para crear un nuevo usuario.
    
3. Si el registro es exitoso, se obtiene un objeto de usuario y se envía de vuelta al usuario. Si falla, se devuelve una respuesta nula.
    

### Inicio de Sesión

sequenceCopy codeClient [icon: user] > FirebaseAuthService: Sign-in request
activate Client
FirebaseAuthService [icon: firebase] > FirebaseAuth [icon: firebase]: Authenticate user
alt [label: if sign-in successful]
  FirebaseAuth - FirebaseAuthService: User object
  FirebaseAuthService --> Client: User object
else [label: if sign-in fails]
  FirebaseAuthService --> Client: Null response
end
deactivate Client

### Explicación

1. El usuario (`**Client**` ) envía una solicitud de inicio de sesión (`**Sign-in request**` ) al servicio de autenticación de Firebase (`**FirebaseAuthService**` ).
    
2. El servicio de autenticación (`**FirebaseAuthService**` ) autentica al usuario en Firebase (`**FirebaseAuth**` ).
    
3. Si el inicio de sesión es exitoso, se obtiene un objeto de usuario y se envía de vuelta al usuario. Si falla, se devuelve una respuesta nula.
    

![diagram-export-27-1-2024-18_08_33.png](https://eraser.imgix.net/workspaces/WEJGXVuNz0EDQJfepg3a/foQFEQh3MteGbtpABAp87TbUrVk2/rbPvP8O1Jubm8hEJkFght.png?ixlib=js-3.7.0 "diagram-export-27-1-2024-18_08_33.png")


Este documento describe la arquitectura en la nube utilizando Firebase para gestionar servicios de autenticación y almacenamiento de datos en Cloud Firestore.

## Firebase Services

![Firebase](https://eraser.imgix.net/workspaces/3JR4douZSALxNZBah7YU/foQFEQh3MteGbtpABAp87TbUrVk2/p7Ywqg9okm7v-JZQhnckV.png?ixlib=js-3.7.0)
- **Authentication:** Servicio de Firebase para la autenticación de usuarios.
![Cloud Firestore](https://eraser.imgix.net/workspaces/3JR4douZSALxNZBah7YU/foQFEQh3MteGbtpABAp87TbUrVk2/S4RtZ7fuQDzjtHsCOEIZ5.png?ixlib=js-3.7.0)
- **Firestore Database:** Base de datos en tiempo real y en la nube proporcionada por Firebase.
## Cloud Firestore

![Cloud Firestore](https://eraser.imgix.net/workspaces/3JR4douZSALxNZBah7YU/foQFEQh3MteGbtpABAp87TbUrVk2/PY4oPQxCKwRAW0YAu_nct.png?ixlib=js-3.7.0)
- **Clients:** Colección en Cloud Firestore para almacenar datos de clientes.
![Cloud Firestore](https://eraser.imgix.net/workspaces/3JR4douZSALxNZBah7YU/foQFEQh3MteGbtpABAp87TbUrVk2/Z8sfoEZszrzQBB8HPaJoG.png?ixlib=js-3.7.0)
- **Vehicles:** Colección en Cloud Firestore para almacenar datos de vehículos.
![Cloud Firestore](https://eraser.imgix.net/workspaces/3JR4douZSALxNZBah7YU/foQFEQh3MteGbtpABAp87TbUrVk2/pDXmP23qN2G8TxcfM4Joo.png?ixlib=js-3.7.0)
- **Work Orders:** Colección en Cloud Firestore para almacenar datos de órdenes de trabajo.
![Cloud Firestore](https://eraser.imgix.net/workspaces/3JR4douZSALxNZBah7YU/foQFEQh3MteGbtpABAp87TbUrVk2/PaZZAmaLX-5vXuIySD3WM.png?ixlib=js-3.7.0)
- **Order Summary:** Colección en Cloud Firestore para almacenar resúmenes de órdenes.
## Conexiones

- **Authentication > Firestore Database:** Integración entre el servicio de autenticación de Firebase y la base de datos Firestore.
- **Firestore Database > Cloud Firestore:** Conexión entre el servicio Firestore Database de Firebase y Cloud Firestore para almacenar y recuperar datos.

![[diagram-export-27-1-2024-18_41_15.png]]
---

Este es un resumen de la arquitectura en la nube utilizando Firebase. Asegúrate de personalizar la documentación según las características específicas de tu aplicación y las necesidades de tu proyecto.

## Diagrama de Entidad Relación Firebase Service 
Este diagrama de entidad-relación (ERD) representa la estructura de datos para el servicio Firebase.
### Explicación

- **people:** Representa la colección de usuarios.
- **counters:** Almacena los contadores asociados a los usuarios para el número de órdenes.
- **clients:** Almacena datos de clientes.
- **vehicles:** Almacena datos de vehículos.
- **workOrders:** Contiene información sobre las órdenes de trabajo, incluyendo servicios y repuestos.
- **orderSumary:** Almacena resúmenes de las órdenes.

### Relaciones

- **people.counters.orderNumber > counters.id:** Relación entre el contador y el número de órdenes asociado a los usuarios.
- **people.clients <> clients.uid:** Relación entre la colección de usuarios y los clientes.
- **people.vehicles <> vehicles.uid:** Relación entre la colección de usuarios y los vehículos.
- **people.workOrders <> workOrders.uid:** Relación entre la colección de usuarios y las órdenes de trabajo.
- **workOrders.clientId > clients.uid:** Relación entre las órdenes de trabajo y los clientes.
- **workOrders.vehicleId > vehicles.uid:** Relación entre las órdenes de trabajo y los vehículos.
- **people.orderSumary <> orderSumary.id:** Relación entre la colección de usuarios y los resúmenes de órdenes.

---

Este es un resumen de tu modelo de entidad-relación para el servicio Firebase. Asegúrate de ajustar y personalizar la documentación según las características específicas de tu aplicación y las necesidades de tu proyecto.