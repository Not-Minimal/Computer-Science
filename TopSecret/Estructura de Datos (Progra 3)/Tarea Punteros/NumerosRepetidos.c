/* Función que reciba un array de enteros y elimine todos los números que
                pudiesen estar repetidos. */
#include <stdio.h>
#include <stdlib.h>

int eliminarRepetidos(int *v, int n);
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
    
    //Se imprime el arreglo y su dimensión.
    printf("Dimension: %d\n",largo);
    printf("Arreglo: ");
    for(i=0;i<largo;i++){
        printf("[%d]",*(Arreglo + i));
    }
    
    //Se eliminan numeros repetidos.
    largo = eliminarRepetidos(Arreglo,largo);

    //Se imprime el arreglo sin numeros repetidos.
    printf("\n\nDimension: %d\n",largo);
    printf("Nuevo Arreglo: ");
    for(i=0;i<largo;i++){
        printf("[%d]",*(Arreglo + i));
    }

    return 0;
}

int eliminarRepetidos(int *v, int n){
    int i,j,k;
	
	for(i=0;i<n;i++){               //Se recorre el arreglo comparando
        for(j=0;j<n;j++){           //Arreglo en posición i con Arreglo en posición j

            if(i!=j && *(v + i)==*(v + j)){     //Si se encuentra numero repetido se hace el cambio
                for(k=j;k<n-1;k++){
                    *(v + k) = *(v + k+1);
                }
                i--;
                n--; //Largo = largo - 1
            }

        }
    }

    return n;
}

void llenar(int *v, int n){
    int i;

    for(i=0;i<n;i++){
        printf("%d.- ",i+1);
        scanf("%d",(v + i));
    }

    system("cls");
}
