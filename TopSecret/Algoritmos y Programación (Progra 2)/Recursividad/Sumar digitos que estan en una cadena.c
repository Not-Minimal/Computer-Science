/*
    Cuando se ocupa un SCANF para las cadenas
    la lectura se detiene en el espacio          */
    
#include <stdio.h>

int sumatoria(char Palabra[],int pos);

int main(){
    char Cadena[30];

    printf("Ingrese la frase: \n");
    scanf("%s",&Cadena);

    printf("La suma de los digitos \nencontrados en la cadena es: %d\n",sumatoria(Cadena,0));

    return 0;
}

int sumatoria(char Palabra[],int pos){
    int x;

    if(Palabra[pos]=='.'){
        return 0;
    }
    else{
        if(Palabra[pos]>=48 && Palabra[pos]<=57){
            x = (Palabra[pos]-48);
            return (x + (sumatoria(Palabra,pos+1)));
        }
        else{
            return sumatoria(Palabra,pos+1);
        }
    }
}
