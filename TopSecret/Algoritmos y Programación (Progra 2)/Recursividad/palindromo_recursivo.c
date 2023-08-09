#include <stdio.h>

int palindromo(char Cadena[], int inicio, int final);

/* asdfggfdsa */

int main(){
    char texto[20];
    int res,i,pos;

    printf("Ingrese texto: ");
    gets(texto);

    for(i=0;i<20;i++){
        if(texto[i]=='\0'){
            pos = i;
            break;
        }
    }

    res = palindromo(texto,0,pos-1);

    if(res==0){
        printf("\nEl texto no es palindromo.\n");
    }
    else{
        printf("\nEl texto es palindromo.\n");
    }

    return 0;
}

int palindromo(char Cadena[], int inicio, int final){
    
    if(inicio>final){
        return 1;
    }
    else{
        if(Cadena[inicio]==Cadena[final]){
            return 1*palindromo(Cadena,inicio+1,final-1);
        }
        else{
        	return 0;
    	}
    }
}
