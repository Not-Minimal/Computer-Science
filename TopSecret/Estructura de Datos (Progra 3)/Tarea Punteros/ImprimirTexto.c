/* Función que reciba un texto e imprima la oración por consola tantas letras
tenga dicho texto, por cada vez que se imprima, se deberá ignora la primera letra en ese instante.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirTexto(char *letras);

int main(){
    char *texto;
	
	texto = "Hola mundo en C\n";
    
    imprimirTexto(texto);

}

void imprimirTexto(char *letras){
    int i,j;

    for(i=0;*(letras +i)!='\n';i++){        //*(letras + i) != '\n'
        for(j=i;*(letras +j)!='\n';j++){  //Condición de salida del ciclo for.
            printf("%c",*(letras +j));
        }
        printf("\n");
    }
    

}
