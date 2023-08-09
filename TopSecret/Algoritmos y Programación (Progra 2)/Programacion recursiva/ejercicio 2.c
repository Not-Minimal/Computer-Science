#include <stdio.h>

float sumatoria(float n);

int main(){
	int i;
	
	do{
		printf("Ingrese numero limite: \n");
		scanf("%d",&i);
	}while(i<1);
	
	printf("(3i)/(5i-3)\n\n");
	printf("La sumatoria es igual a: %f",sumatoria(i));
	
	return 0;
}

float sumatoria(float n){
	if(n==1){
		return (3*n)/(5*n-3);
	}
	else{
		return ((3*n)/(5*n-3))+(sumatoria(n-1));
	}
}
