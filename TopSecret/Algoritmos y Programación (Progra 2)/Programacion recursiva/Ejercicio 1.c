#include <stdio.h>

int sumatoria(int i,int n);

int main(){
	int n,a;
	
	do{
		printf("Ingrese numero base: \n");
		scanf("%d",&a);
		
		printf("Ingrese numero limite: \n");
		scanf("%d",&n);
	}while(a>n);
	
	printf("(4i-2n^3)\n\n");
	printf("La sumatoria es igual a: %d",sumatoria(a,n));
	
	return 0;
}

int sumatoria(int i,int n){
	if(n==i){
		return (4*i-2*(n*n*n));
	}
	else{
		return (4*i-2*(n*n*n)) + (sumatoria(i+1,n));
	}
}
