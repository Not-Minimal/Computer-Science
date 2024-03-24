```javascript
$ npx express-generator
```

Crear proyecto con https://expressjs.com/es/starter/generator.html
```javascript
$ express --view=pug myapp

   create : myapp
   create : myapp/package.json
   create : myapp/app.js
   create : myapp/public
   create : myapp/public/javascripts
   create : myapp/public/images
   create : myapp/routes
   create : myapp/routes/index.js
   create : myapp/routes/users.js
   create : myapp/public/stylesheets
   create : myapp/public/stylesheets/style.css
   create : myapp/views
   create : myapp/views/index.pug
   create : myapp/views/layout.pug
   create : myapp/views/error.pug
   create : myapp/bin
   create : myapp/bin/www
```
A continuación, instale las dependencias:

```console
$ cd myapp
$ npm install
```
En MacOS o Linux, ejecute la aplicación con este mandato:

```console
$ DEBUG=myapp:* npm start
```
A continuación, cargue `http://localhost:3000/` en el navegador para acceder a la aplicación.

La aplicación generada tiene la siguiente estructura de directorios:

```console
.
├── app.js
├── bin
│   └── www
├── package.json
├── public
│   ├── images
│   ├── javascripts
│   └── stylesheets
│       └── style.css
├── routes
│   ├── index.js
│   └── users.js
└── views
    ├── error.pug
    ├── index.pug
    └── layout.pug

7 directories, 9 files
```
Instalar React
https://www.freecodecamp.org/espanol/news/como-crear-una-aplicacion-react-con-un-backend-de-node-la-guia-completa/
