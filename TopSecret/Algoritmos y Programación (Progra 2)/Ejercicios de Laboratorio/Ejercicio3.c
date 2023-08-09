/* Cree un programa que mediante uso de funciones permita calcular la sumatoria:
	i=1 -> n 	(2i)! / (i+2)! 
	
	Analisis: - Haré una función que realice la sumatoria y otra que realice los factoriales
			  - Llamaré a una función desde otra función. */
#include <stdio.h>

//Funciones.
int factorial (int numero);
float sumatoria (int n);

int main()
{
	system("color a");
	
	//Variables.
	int n;
	
	//Ingreso de datos validando que n sea mayor que 1.
	do
	{
		
		system("cls");
		printf("Ingrese n: ");
		scanf("%d",&n);
		
	}while (n<=1);
	
	//Se muestra el resultado.
	system("cls");
	printf("Resultado: %f\n", sumatoria(n));
	
	return 0;
}

//Desarrollo de funciones.
int factorial (int numero)
{
	int i, factorial=1;
	
	for(i=1; i<=numero; i++)
	{
		factorial = factorial * i;
	}
	
	return factorial;
}

float sumatoria (int n)
{
	int i;
	float suma=0;
	
	for (i=1; i<=n; i++)
	{
		suma = suma + (factorial(2*i) / factorial(i+2));
	}
	
	return suma;
} 
