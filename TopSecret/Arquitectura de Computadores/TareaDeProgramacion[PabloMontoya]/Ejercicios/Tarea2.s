# ------------------------------------- Datos del Alumno. ------------------------------------- #

	# Nombre: Pablo Israel Montoya Gutiérrez.
	# Rut : 20.259.152-3
	# Asignatura: Arquitectura de Computadores.
	# Profesor: Patricio Galdames.

# ------------------------------------- Datos del Programa. ------------------------------------- #

	# Se diseñó un programa que calcula la suma de los primeros 10 multiplos de un numero entero
	#	positivo menor a 20 leído desde el teclado.

	# Se creo una función la cual realiza el procedimiento de calcular la suma de forma recursiva
	#	(llamándose a si misma) para luego imprimir el resultado en pantalla desde el programa principal.
	
# ------------------------------------- Variables necesarias. ------------------------------------- #
.data 
	pedirNumero: .asciiz "Ingrese numero positivo menor que 20: "
	mensajeResultado: .asciiz "La suma de los 10 primeros multiplos es: "
	mensajeError: .asciiz "-1\n"
	
	# Variables globales.
	numero: .word 0
	suma: .word 0
	
# ------------------------------------- Programa Principal. ------------------------------------- #
.text	

# Dirección de memoria representada por la etiqueta es la principal.
.globl main
	
	main:
		 # Instrucción agregada en este codigo para la condición if.
		addi $s1, $zero, 20
		
		# printf("Ingrese numero positivo menor que 20: ");
		li $v0, 4
		la $a0, pedirNumero # Se imprime el mensaje.
		syscall
	
		# scanf("%d",&numero);
		li $v0, 5  # Se le pide al usuario el ingreso de un dato.
		syscall
		
		#Guardamos el valor ingresado en la variable "numero".
		sw $v0, numero
	
		# ---- Validación del numero. ---- #
		
		# if (numero > 20)
		slt $s5, $v0, $s1   # Si $v0[numero] < $s1[20] -> $s5 = 1
		beq $s5, $zero, noCumpleCondicion  # Si $s5[True/False] = 0 -> noCumpleCondicion (Porque $s5 = 0 = False)
	
		# if (numero < 0)
		slt $s5, $v0, $zero # Si $v0[numero] < 0 -> 1
		bne $s5, $zero, noCumpleCondicion # Si $s5[True/False] != 0 -> $s5 = 1 (Significa que el numero es negativo)
		
		# ---- Llamada a Función. ---- #
		
		 # -------------------------------------------------------------------------------------------------------#
		# Ahora que sabemos que el numero ingresado cumple las condiciones tratamos de realizar algo parecido a lo #
		# que hicimos en el Lenguaje de Programación C, dandole valores a las variables globales.                  #
		 # -------------------------------------------------------------------------------------------------------#
		 		
		# Registro $a0 vendrá siendo la variable global "multiplo".
		lw $a0, numero
		mul $a0, $a0, 10 # Esta instrucción representa el (numero*10) que se envía como argumento para la función.
		
		# Registro $a1 será la variable "numero" que nos servirá como "constante" ya que se estará restando en cada
		#  nuevo llamado éste registro a $a0.
		lw $a1, numero
		
		# Se llama a la función.
		
		
		jal sumaGaussMultiploRecursivo # suma = sumaGaussMultiploRecursivo(numero*10) | numero*10 = mul $a0,$a0,10
		sw $v0, suma
		
		# ---- Mensajes de Resultados. ---- #
		   # y finalizacion del programa.
		
		#Como el programa se seguirá ejecutando es importante ubicar la impresión del resultado antes
		   # que el mensaje de error ya que si no se cumple la condición se saltará al mensaje automaticamente
		      # lo cual en el caso del resultado no ocurre.
		
		# Resultado de la suma. #
			
		# printf("La suma de los 10 primeros multiplos es: 
		li $v0, 4
		la $a0, mensajeResultado
		syscall
			 
		# %d", suma);
		li $v0, 1
		lw $a0, suma
		syscall
		
		#return 0; // Finalizamos el programa gracias al valor 10
		li $v0, 10
		syscall
			
		# Si el numero ingresado no cumple las condiciones. #
		noCumpleCondicion: 
		
			# printf("1\n");
			li $v0, 4
			la $a0, mensajeError
			syscall
			
			#return 0; // Finalizamos el programa gracias al valor 10
			li $v0, 10
			syscall
 
# ------------------------------------- Funcion. ------------------------------------- #

# ---- Nota del Programador. ---- #

# Para realizar la función recursiva 
# fue necesario guiarse con un tutorial en YouTube
# por lo que algunas instrucciones escritas 
# a continuación como ".globl" son ideas de la
# estructura de una función recursiva.

# ------------------------------ #

# Dirección de memoria representada por la etiqueta es la principal.
.globl sumaGaussMultiploRecursivo

	# int sumaGaussMultiploRecursivo ( int multiplo, int numero ) {
	sumaGaussMultiploRecursivo:
	
		# Pedimos espacios para tener lo suficiente como para guardar las dos variables
		#  globales que utilizaremos en la función. Con el número "8" tenemos 2 posiciones las cuales
		#   estarán separadas con una diferencia de 4 bytes.
		
		subu $sp, $sp, 8 # Hacemos espacio para los 2 valores.
		
		# Almacenamos el valor de retorno en la dirección de la pila/stack. Se almacena en la posición 0.
		sw $ra, ($sp)
		
		# Almacenamos el valor de la variable local en la pila/stack. Se almacena en la posición 4 (Variables
		#  estan separadas con una diferencia de 4 bytes).
		sw $s0, 4($sp)
		
		# Caso Base ( if(multiplo==0) ).
		li $v0, 0
		beq $a0, 0, return # Si multiplo == 0 nos dirigimos al label "return" para finalizar la recursividad.
		
		# Caso Recursivo ( else ).
		move $s0, $a0
		sub $a0, $a0, $a1
		jal sumaGaussMultiploRecursivo
		
		# Citando una frase del tutorial "The magic happens here". En esta linea se irá realizando la suma de los
		#  numeros una vez que se vuelva a llamar a la función.
		add $v0, $s0, $v0
	
		return:
			
			# ---- Recuperamos los datos de la pila. ---- #
			
			# En esta parte realizamos lo opuesto a lo que hicimos al principio de la función #
			
			# Se retorna el valor de la dirección de retorno de la pila.
			lw $ra, ($sp)
			
			# Cargamos el valor de la variable local al registro desde la pila
			lw $s0, 4($sp)
			
			# Como al inicio de la función restamos 8 en esta parte restauramos la pila
			#  agregando el mismo valor que restamos (8).
			addu $sp, $sp, 8
			
			jr $ra
# }









