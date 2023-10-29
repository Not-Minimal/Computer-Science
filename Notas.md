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

**Entidad 1: Cliente**

- Nombre
- Rut
- Dirección
- Correo Electrónico
- Celular

**Entidad 2: Orden de Trabajo**

- Fecha
- Fecha Salida
- Descripción Análisis
- Técnicos
- Número de Orden
- Tipo: (Particular o Licitación)

**Entidad 3: Vehículo**

- Marca
- Patente
- Modelo
- Número de Motor
- Año
- Categoría

**Entidad 4: Detalle de Repuestos y Adicionales**

- Cantidad 1
- Cantidad 2
- Cantidad 3
- Cantidad 4
- Cantidad 5
- Cantidad 6
- Cantidad 7
- Cantidad 8
- Descripción 1
- Descripción 2
- Descripción 3
- Descripción 4
- Descripción 5
- Descripción 6
- Descripción 7
- Descripción 8
- Valor 1
- Valor 2
- Valor 3
- Valor 4
- Valor 5
- Valor 6
- Valor 7
- Valor 8

**Entidad 5: Detalle de Repuestos (Repuesto 1 a 4)**

- Cantidad Repuesto 1
- Cantidad Repuesto 2
- Cantidad Repuesto 3
- Cantidad Repuesto 4
- Descripción Repuesto 1
- Descripción Repuesto 2
- Descripción Repuesto 3
- Descripción Repuesto 4
- Valor Repuesto 1
- Valor Repuesto 2
- Valor Repuesto 3
- Valor Repuesto 4

**Entidad 6: Mano de Obra**

- Total Mano de Obra

**Entidad 7: Gasto de Repuestos**

- Total Repuestos (o Gasto Repuesto)

**Entidad 8: Factura**

- Número de Factura
- Subtotal
- Descuento
- Neto
- IVA
- Total Abono

**Entidad 9: Estado de Pago**

- Tipo de Pago
- Estado