//Programa que imite la funcion "split".
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estructura.
typedef struct texto{
    char *frase;
    struct texto *next;
}TEXT;

//Funcion.
TEXT *split(char cadena[], char delimitador[]);

//Datos se piden como argumento de Main.
int main(int argumentos,char *TextoDel[]){
    system("color a");

    if(argumentos>3){
        printf("Error, muchos argumentos.\n");
    }
    else if(argumentos<3){
        printf("Error, se esperan 2 argumentos (Texto,Delimitador)\n");
    }
    else{
        TEXT *arreglo = split(TextoDel[1],TextoDel[2]);   //Se llama a la función.

        //Se muestran resultados.
        printf("\n\nFrase aplicando Split.\n\n");

        while(arreglo!=NULL){
            printf("%s\n",arreglo->frase);
            arreglo = arreglo->next;
        }
    }
    
    getchar();getchar();
    
    return 0;
}

TEXT *split(char cadena[], char delimitador[]){   //Funcion split.
    //Declaracion de Variables.
    TEXT *cabeza=NULL,*aux=NULL;
    char *ptr = strtok(cadena,delimitador);

    //Asignación de memoria.
    cabeza = (TEXT*)malloc(sizeof(TEXT));
    aux = (TEXT*)malloc(sizeof(TEXT));

    //Se asignan valores.
    cabeza->frase = ptr;
    cabeza->next = aux;

    while(ptr!=NULL){
        ptr = strtok(NULL,delimitador);

        if(aux->next==NULL){
            aux->next = (TEXT*)malloc(sizeof(TEXT));
            aux = aux->next;
        }
				
        aux->frase = ptr;
        aux->next = NULL;
    }

    aux->next = NULL;
    
    return cabeza;
}
