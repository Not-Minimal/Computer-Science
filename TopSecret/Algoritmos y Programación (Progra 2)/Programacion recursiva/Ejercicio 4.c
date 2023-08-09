#include <stdio.h>

int invertir(int arreglo[],int min,int max);

int main(){
	int n,i,num,inicio,final;
	
	do{
		printf("Ingrese numero limite: \n");
		scanf("%d",&n);
	}while(n<0);
	
	int arreglo[n];
	
	printf("Ingrese valores al arreglo: \n\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&arreglo[i]);
	}
	
	inicio = arreglo[0];
	final = arreglo[n];
	
	
	return 0;
}

int invertir(int arreglo[],int min,int max){
	int aux;
	
	if(min == max){
		return ;
	}
	else{
		aux = arreglo[min];
		arreglo[min] = arreglo[max];
		arreglo[max] = aux;
		
		return invertir(arreglo,min+1,max-1);
	}
}
