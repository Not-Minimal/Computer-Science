#include <stdio.h>

int mayor(int vector[],int m,int n);

int main(){
    int n,i;

    printf("Ingrese largo del arreglo: \n");	
    scanf("%d",&n);

    int Arreglo[n];

    printf("Ingrese valores al arreglo: \n");
    for(i=0;i<n;i++){
        scanf("%d",&Arreglo[i]);
    }

    printf("El numero mayor es: %d\n",mayor(Arreglo,0,n-1));

    return 0;
}

int mayor(int vector[],int m,int n){

    if(n<0){
        return m;
    }
    else{
        if(vector[n]>m){
            m = vector[n];
            return mayor(vector,m,n-1);
        }
        else{
            return mayor(vector,m,n-1);
        }
    }
}
