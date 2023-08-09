#include <stdio.h>

float sumatoria(float n);

int main(){
	int i;
	
	do{
		printf("Ingrese numero limite: \n");
		scanf("%d",&i);
	}while(i<1);
	
	printf("(2i^2)/(2i-1)\n\n");
	printf("La sumatoria es igual a: %f",sumatoria(i));
	
	return 0;
}

float sumatoria(float n){
	if(n==1){
		return (2*n*n)/(2*n-1);
	}
	else{
		return ((2*n*n)/(2*n-1))+(sumatoria(n-1));
	}
}
