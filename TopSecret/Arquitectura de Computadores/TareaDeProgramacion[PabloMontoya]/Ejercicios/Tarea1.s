# ------------------------------------- Datos del Alumno. ------------------------------------- #

	# Nombre: Pablo Israel Montoya Gutiérrez.
	# Rut : 20.259.152-3
	# Asignatura: Arquitectura de Computadores.
	# Profesor: Patricio Galdames.

# ------------------------------------- Datos del Programa. ------------------------------------- #

	# Se diseñó un programa que calcula la suma de los primeros 10 multiplos de un numero entero
	#	positivo menor a 20 leído desde el teclado.

	# Se creo una función la cual realiza el procedimiento de calcular la suma utilizando ciclo For
	#	retornando el valor de la suma de los 10 primeros multiplos del numero ingresado en
	#		 el programa princpal.
	
# ------------------------------------- Variables necesarias. ------------------------------------- #
.data 
	pedirNumero: .asciiz "Ingrese numero positivo menor que 20: "
	mensajeResultado: .asciiz "La suma de los 10 primeros multiplos es: "
	mensajeError: .asciiz "-1\n"
	
	# ---- Algunos apuntes. ---- #
	# $s1 = 20.
	# True = 1.
	# False = 0.
	
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
		li $v0, 5  # Se le pide al usuario el ingreso de un dato (Gracias al valor 5).
		syscall
	
		# ---- Validación del numero. ---- #
		
		# if (numero > 20)
		slt $s5, $v0, $s1   # Si $v0[numero] < $s1[20] -> $s5 = 1
		beq $s5, $zero, noCumpleCondicion  # Si $s5[True/False] = 0 -> noCumpleCondicion (Porque $s5 = 0 = False)
	
		# if (numero < 0)
		slt $s5, $v0, $zero # Si $v0[numero] < 0 -> 1
		bne $s5, $zero, noCumpleCondicion # Si $s5[True/False] != 0 -> $s5 = 1 (Significa que el numero es negativo)
		
		# ---- Llamada a Función. ---- #
		
		# Se copia el valor en los registros $s0 y $s3 los cuales seran los argumentos para la función
			#suma = sumaGaussMultiplo ( [$s0,$s3] )

		move $s0, $v0	# $s0 = numero.
		
		# Luego de trasladar el codigo de C a Assembler podemos llamar finalmente a la función
			# y completar -> suma = sumaGaussMultiplo(numero);
		jal sumaGaussMultiplo
		
		# ---- Mensajes de Resultados. ---- #
		   # y finalizacion del programa.
		   
		# Resultado de la suma.
		resultadoFinal:
			
			# printf("La suma de los 10 primeros multiplos es: 
			 li $v0, 4
			 la $a0, mensajeResultado
			 syscall
			 
			# %d", suma);
			 li $v0, 1
			 move $a0, $s4
			 syscall
		
			#return 0; // Finalizamos el programa gracias al valor 10
			li $v0, 10
			syscall
			
		# Si el numero ingresado no cumple las condiciones.
		noCumpleCondicion: 
		
			# printf("1\n");
			li $v0, 4
			la $a0, mensajeError
			syscall
			
			#return 0; // Finalizamos el programa gracias al valor 10
			li $v0, 10
			syscall
 
# ------------------------------------- Funcion. ------------------------------------- #

# int sumaGaussMultiplo ( int numero ) {
	sumaGaussMultiplo:
		
		# Variables necesarias para implementar ciclo For.
			# ** for (...
		add $s2, $zero, $zero	# i=0;
		addi $t0, $0,10	   	# i<10;
		
		# int suma = 0;
		addi $s4 ,$zero, 0	# Registro que almacenará el resultado de la suma el cual será retornado al main.
		
		# int multiplo = numero;
		add $s3, $zero, $v0	# $s3 = numero.
		
		for: # {
			# Esta intrucción tendrá 2 funciones:
				# 1) Evaluar la condicion de salida del ciclo For (i<10).
				# 2) Salir de la función siendo la instrucción de retorno en el codigo en C (return suma;)
			beq $s2,$t0, resultadoFinal 

			# suma = suma + multiplo;
			add  $s4,$s4,$s3    # Sumar los multiplos.
			
			# multiplo = multiplo + numero;
			add  $s3,$s3,$s0	# Se aumenta el multiplo.

			addi $s2, $s2, 1  # i++) **
			
			j for # } Volvemos a repetir el ciclo For

# }
