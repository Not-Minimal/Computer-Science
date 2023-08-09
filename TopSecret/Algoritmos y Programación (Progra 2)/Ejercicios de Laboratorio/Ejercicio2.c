/* Cree un programa que mediante uso de funciones permita calcular la sumatoria
		i=a -> b (i-a)!
		El programa debe utilizar una función que retorne el factorial de un número. */

#include <stdio.h>

//Declaración de funciones.
int factorial(int numero);

int main()
{
	system("color a");
	
	//Variables.
	int a,b,i;
	int suma=0;
	
	//Pedimos ingreso de datos.
	do
	{
		printf("Ingrese a: ");
		scanf("%d",&a);
	
		printf("Ingrese b: ");
		scanf("%d",&b);
	
	}while(a<=0 || a>b);
	
	//Sumatoria.
	for(i=a; i<=b; i++)
	{
		suma = suma + factorial(i-a);
	}
	
	//Mostramos resultados.
	system("cls");
	printf("Resultado sumatoria: %d",suma);
	
	return 0;
}

//numero = i-a;
int factorial(int numero)
{
	int i, factorial=1;
	
	for(i=1; i<=numero; i++)
	{
		factorial = factorial * i;
	}
	
	return factorial;
}










