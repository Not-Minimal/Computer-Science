/* Cree un programa que mediante funciones resuelva la siguiente sumatoria.

i=1 -> n (5i+1)

La sumatoria debe ser calculada en una función con el siguiente nombre y tipo:
int sumatoria(int n), y el resultado debe ser mostrado desde main() */

#include <stdio.h>

//Funcion.
int sumatoria(int n);

int main()
{
	system("color a");
	
	//Variables.
	int n;
	
	//Ingreso de datos. Se valida que n sea mayor que 1.
	do
	{
		
		system("cls");
		printf("Ingrese n: ");	
		scanf("%d",&n);
		
	}while(n<=1);
	
	//Se muestra el resultado de la sumatoria.
	system("cls");
	printf("Resultado: %d", sumatoria(n));
	
	return 0;
}

//Desarrollo de funcion.
int sumatoria(int n)
{
	//Variables.
	int i, suma=0;
	
	for (i=1; i<=n; i++)
	{
		suma = suma + ((5*i)+1);
	}
	
	return suma;
}






