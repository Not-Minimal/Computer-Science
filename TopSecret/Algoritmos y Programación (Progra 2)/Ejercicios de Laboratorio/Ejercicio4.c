/* Cree un programa que permita resolver la sumatoria implementando funciones.
 No se permite el uso de la librería math.h o similares para calcular potencia.
 
 
 i=x -> n     f(x) ; x es par, f(x) = (x+2i)!
                   ; x es impar, f(x) = (x+i)^i
				   
  Analisis: - Haré una funcion para calcular la sumatoria donde en el ciclo preguntaré 
  				si es par o impar el x ingresado.
  			- Haré una función para resolver factorial.
			- Haré una función para resolver potencia. */
 
#include <stdio.h>

//Funciones.
int sumatoria (int x, int n);
int factorial (int numero);
int potencia (int base, int exponente);

int main()
{
	system("color a");
	
	//Variables.
	int x, n;
	
	//Ingreso de datos y validación de que x sea menor a n.
	do
	{
		
		system("cls");
		
		printf("Ingrese x: ");
		scanf("%d",&x);
		
		printf("Ingrese n: ");
		scanf("%d",&n);
		
	}while (x>n);
	
	//Se imprime el resultado de la sumatoria.
	system("cls");
	printf("Resultado: %d", sumatoria(x,n));
	
	return 0;
}

//Desarrollo de funciones.
int sumatoria (int x, int n)
{
	//Variables.
	int i, suma = 0;
	
	for (i=x; i<=n; i++)
	{
		//Saber si el x de la funcion es par o impar.
		if(x%2==0)
		{
			//Par.
			suma = suma + factorial(x+(2*i));
		}
		else
		{
			//Impar.
			suma = suma + potencia((x+i),i);
		}
		
	}
	
	return suma;
}

int factorial (int numero)
{
	int i, factorial=1;
	
	for(i=1; i<=numero; i++)
	{
		factorial = factorial * i;
	}
	
	return factorial;
}

int potencia (int base, int exponente)
{
	//Variables.
	int i, potencia=1;
	
	for(i=0; i<exponente; i++)
	{
		potencia = potencia * base;
	}
	
	return potencia;
}








