1. **Selección de Datos (SELECT)**: Para seleccionar todos los datos de una tabla llamada "empleados":
    
    sqlCopy code
    
    `SELECT * FROM empleados;`
    
    Esto recuperaría todos los registros de la tabla "empleados".
    
2. **Filtrado de Datos (WHERE)**: Para seleccionar empleados con un salario superior a 50,000:
    
    sqlCopy code
    
    `SELECT nombre, salario FROM empleados WHERE salario > 50000;`
    
    Esto seleccionaría los nombres y salarios de los empleados que ganan más de 50,000.
    
3. **Ordenamiento de Resultados (ORDER BY)**: Para ordenar los empleados por apellido en orden alfabético:
    
    sqlCopy code
    
    `SELECT nombre, apellido FROM empleados ORDER BY apellido;`
    
    Esto mostraría los nombres y apellidos de los empleados ordenados por apellido.
    
4. **Inserción de Datos (INSERT)**: Para agregar un nuevo empleado a la tabla "empleados":
    
    sqlCopy code
    
    `INSERT INTO empleados (nombre, apellido, salario) VALUES ('Juan', 'Pérez', 60000);`
    
    Esto agregaría un nuevo empleado llamado Juan Pérez con un salario de 60,000.
    
5. **Actualización de Datos (UPDATE)**: Para aumentar el salario de un empleado:
    
    sqlCopy code
    
    `UPDATE empleados SET salario = 65000 WHERE nombre = 'Juan' AND apellido = 'Pérez';`
    
    Esto actualizaría el salario de Juan Pérez a 65,000.
    
6. **Eliminación de Datos (DELETE)**: Para eliminar a un empleado de la tabla "empleados":
    
    sqlCopy code
    
    `DELETE FROM empleados WHERE nombre = 'Juan' AND apellido = 'Pérez';`
    
    Esto eliminaría a Juan Pérez de la tabla.
    
7. **Joins**: Supongamos que tenemos dos tablas, "empleados" y "departamentos". Para obtener una lista de empleados con sus departamentos, puedes usar un INNER JOIN:
    
    sqlCopy code
    
    `SELECT empleados.nombre, departamentos.nombre AS departamento FROM empleados INNER JOIN departamentos ON empleados.departamento_id = departamentos.id;`
    
    Esto combinaría datos de ambas tablas.
    
8. **Agregación de Datos**: Para encontrar el salario promedio de los empleados en un departamento específico:
    
    sqlCopy code
    
    `SELECT departamento_id, AVG(salario) AS salario_promedio FROM empleados GROUP BY departamento_id;`
    
    Esto mostraría el salario promedio para cada departamento.
    
9. **Subconsultas**: Para encontrar a todos los empleados que ganan más que el salario promedio:
    
    sqlCopy code
    
    `SELECT nombre, salario FROM empleados WHERE salario > (SELECT AVG(salario) FROM empleados);`
    
    Esto utiliza una subconsulta para comparar el salario de cada empleado con el salario promedio general.