Entidad: Es como un objeto, puede hacer referencia a cualquier cosa que existe en la vida real. Es una representacion de algo.
Almacenan datos.
Entidad Persona: Clientes o usuarios.
Notacion de Chen
- Entidad Casa: Dentro de un cuadrado
Una entidad lo es gracias a sus atributos o propiedades, Tamaño, direccion, Ventanas, Etc.
- Atributos se encierran en ovalos.
	- Atributo simple: Datos unicos; precio.
	- Atributo compuestos: Se componen de otros datos; comedor, living, baño, etc,.
	- Atributos multivalor: Ambientes ya que hay mas que uno. representado con doble ovalo.
	- Atributos derivaados: Antiguedad y ubicacion, se adquieran a traves de otros, ejemplo: fecha final menos fecha inicial. representado como bordeado punteado
- Clave o Key: Forma unica de identificar algo:
	- ejemplo casa: Id de casa.
	- Son atributos, Ovalado y dentro subrayado.
	Ejemplo de diagrama.
	![[Captura de pantalla 2023-10-28 a la(s) 22.51.34.png]]
	- Empleado
		- id empleado: Key
		- Habilidades: multivalor
		- Edad: dereivado
		- Informacion de contacto: compuesto
		- Todo lo demas: Simples

Consulta: Query
Table: Tabla
Campo: Field
Valor de campo: fiel Value
Registro: Record
Identifiers: ID

SELECT *  FROM Employees
As: ayuda a darle un nombre mas descriptivo a la consulta.
SELECT LastName As Apellido  FROM Employees
SELECT FirstName As Nombre, LastName As Apellido  FROM Employees
SELECT  Price FROM Products
SELECT  Price * 2 As precio_doble FROM Products
SELECT  Price, Price * 2 As precio_doble FROM Products
SELECT * FROM Products
ORDER By ProductName ASC
SELECT * FROM Products
ORDER By ProductName ASC Nulls Last
SELECT * FROM Products
ORDER By ProductName, SupplierID desc
SELECT  DISTINCT ProductName FROM Products order by ProductName asc: Solo muestra un dato sin duplicado. En vez de 10 manzanas y 5 peras. Muestra una manzana y una pera.
SELECT * FROM Products Where Price  <= 40
SELECT * FROM Products Where Price  <= 40   ORDER By Price Asc
DELETE  FROM Products Where ProductID = 2
UPDATE Products SET ProductName = "Sushi" WHERE ProductID = 33
### Operadores Logicos
SELECT * FROM Products  where  ProductID = 33 AND ProductName = "Sushi"
SELECT * FROM  Customers where CustomerID >= 50 and CustomerID < 55
SELECT * FROM  Employees where  FirstName = "Nancy" or FirstName = "Anne"
SELECT  * FROM Customers  WHERE CustomerID >= 50 and CustomerID < 55 and NOT Country = "Germany"
SELECT  * FROM Customers  WHERE CustomerID >= 50 and NOT Country = "Germany"
LIMIT 5
SELECT  * FROM Customers  WHERE CustomerID >= 50 and NOT Country = "Germany" AND not Country = "UK" AND NOT Country ="Mexico" AND NOT Country = "France"
LIMIT 5 
SELECT  * FROM Products where not CategoryID = 6 and not SupplierID = 1
SELECT  * FROM Products where not CategoryID = 6 and not SupplierID = 1 and Price <=30
LIMIT 3