/*Función que recibe un arreglo de enteros
        y lo ordene de mayor a menor. */
#include <stdio.h>
#include <stdlib.h>

void ordenar(int *v, int n);
void llenar(int *v, int n);

int main(){
    int largo,i;
    int *Arreglo;

    do{
        system("cls");
        printf("Ingrese largo del arreglo: ");
        scanf("%d",&largo);
    }while(largo<=0);

    Arreglo = (int*)malloc(sizeof(int)*largo);

    //Se llena el arreglo.
    printf("Ingrese valores al arreglo:\n");
    llenar(Arreglo,largo);
    
    //Se imprime el arreglo.
    printf("Arreglo: ");
    for(i=0;i<largo;i++){
        printf("[%d]",*(Arreglo + i));
    }

    //Se ordena el arreglo.
    ordenar(Arreglo,largo);

    //Se imprime el arreglo ordenado.
    printf("\nArreglo ordenado: ");
    for(i=0;i<largo;i++){
        printf("[%d]",*(Arreglo + i));
    }


    return 0;
}

void ordenar(int *v, int n){
    int modo,i,aux;

    do{
        modo = 0;
        for(i=0;i<=n-1;i++){
            if(*(v + i)<*(v + i+1)){
                aux = *(v + i);
                *(v + i) = *(v + i+1);
                *(v + i+1) = aux;

                modo = 1;
            }
        }
    }while(modo==1);
    
}

void llenar(int *v, int n){
    int i;

    for(i=0;i<n;i++){
        printf("%d.- ",i);
        scanf("%d",(v + i));
    }

    system("cls");
}
