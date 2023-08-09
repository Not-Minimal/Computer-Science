#include <stdio.h>

/* VARIABLE IMPORTANTE: "m" */

int busqueda(int V[], int x, int inicio, int final);

int main(){
	int n,i,numero,posicion;
	
	printf("Ingrese n para Arreglo[n]: \n");				//Ahí tú agregas la validacion que solo sean numeros positivos porque
	scanf("%d",&n);											// no existe Arreglo[-4].
	
	int Arreglo[n];
	
	//Se llena el arreglo.

	printf("Ingrese valores al arreglo: \n");
	
	for(i=0;i<n;i++){
		scanf("%d",&Arreglo[i]);
	}
	
	printf("\nIngrese el numero que quiere buscar: \n");
	scanf("%d",&numero);
	
	//Se llama a la funcion.
	posicion = busqueda(Arreglo,numero,0,n-1);

	if(posicion==-1){
		printf("No se encontro el numero.\n");
	}
	else{
		printf("El numero se encontro en la posicion %d\n",posicion);
	}

	return 0;
}


int busqueda(int V[], int x, int inicio, int final){
	int m = (inicio+final)/2;

	//Caso base.
	if(inicio>final){				//Caso 1: El numero no existe.
		return -1;
	}
	else{
		if(x==V[m]){				//Caso 2: Se encontró el numero.
			return m;
		}
		else{
			if(x<V[m]){
				return busqueda(V,x,inicio,m-1);		//Si el numero que se busca es menor que m, se busca entre 0 y m
			}
			else{
				return busqueda(V,x,m+1,final);			//Si el numero que se busca es mayor que m, se busca entre m y n	, siendo n el limite del arreglo.
			}
		}
	}
}
