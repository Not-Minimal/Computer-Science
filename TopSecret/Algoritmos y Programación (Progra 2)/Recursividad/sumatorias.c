#include <stdio.h>

//Declaracion funciones.

int sumatoria_1(int n);
int sumatoria_2(int n);
int sumatoria_3(int n);
float sumatoria_4(int n);
int potencia(int base,int exp);

int main(){
	int opt,i,numero,a,b;

	printf("Ingrese opcion: \n\n");
	for(i=1;i<=6;i++){
		printf("%d) Sumatoria %d\n",i,i);
	}
	printf("7) Potencia.\n");
	
	do{
		scanf("%d",&opt);
	}while(opt<1 || opt>7);

	switch(opt){
		case 1:
			printf("Ingrese numero para calcular su factorial: \n");
			
			do{
				scanf("%d",&numero);
			}while(numero<1);

			printf("%d! = %d\n",numero,sumatoria_1(numero));
			
			break;
		
		case 2: 
			printf("Ingrese n (n>1): \n");

			do{
				scanf("%d",&numero);
			}while(numero<1);

			printf("Sumatoria 3i con n=%d es: %d\n",numero,sumatoria_2(numero));

			break;
			
		case 3:
			printf("Ingrese n (n>1): \n");
			
			do{
				scanf("%d",&numero);
			}while(numero<1);
			
			printf("Sumatoria (4i-2) con n=%d es: %d\n",numero,sumatoria_2(numero));
			
			break;
			
		case 4:
			printf("Ingrese n (n>1): \n");
			
			do{
				scanf("%d",&numero);
			}while(numero<1);
			
			printf("Sumatoria (5i-3)/(2i) con n=%d es: %f\n",numero,sumatoria_4(numero));
			
			break;
			
		case 7:
			printf("Ingrese base: \n");
			scanf("%d",&a);
			
			printf("Ingrese exponente (exp>0): \n");
			
			do{
				scanf("%d",&b);
			}while(b<1);
			
			printf("%d^%d: %d",a,b,potencia(a,b));
			
			break;
	}
	return 0;
}

int sumatoria_1(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*(sumatoria_1(n-1));
	}
}

int sumatoria_2(int n){
	if(n==1){
		return 3;
	}
	else{
		return (3*n)+(sumatoria_2(n-1));
	}
}

int sumatoria_3(int n){
	if(n==1){
		return 2;
	}
	else{
		return ((4*n)-2)+(sumatoria_3(n-1));
	}
}

//4.74
float sumatoria_4(int n){
	if(n==1){
		return 1;
	}
	else{
		return (((5*n)-3)/(2*n))+(sumatoria_4(n-1));
	}
}

int potencia(int base,int exp){
	if(exp==1){
		return base;
	}
	else{
		return base*potencia(base,exp-1);
	}
}
