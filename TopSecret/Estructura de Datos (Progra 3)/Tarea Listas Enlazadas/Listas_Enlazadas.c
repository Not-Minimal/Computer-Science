#include <stdio.h>
#include <stdlib.h>

//Estructura de NODO.
typedef struct nodo{
	int valor;
	struct nodo *next;
}*Nodo;

//Funciones.
Nodo eliminarNodo(Nodo lista, int eliminar);	//Ejercicio 1.
Nodo agregarNodoEn(Nodo lista, int valor, int posicion);	//Ejercicio 2.
void imprimir(Nodo lista);

int main(){
	system("color a");
	int opt,eliminar,valor,posicion;

	Nodo lista;
	lista = NULL;
	
	//Menu.
	do{

		do{
			system("cls");
			printf("Ingrese opcion.\n\n1) Agregar Nodo.\n2) Eliminar Nodo.\n3) Imprimir Lista.\n\n");
			scanf("%d",&opt);
		
			if(opt<1 || opt>3){
				printf("\nError. Ingrese un valor valido.");
				Sleep(2000);
			}
		}while(opt<1 || opt>3);
	
    	//Opciones.
    	switch(opt){
        
        	case 1:
            	system("cls");
            	printf("Agregar Nodo.\n\n");

          		//Se piden datos.
            	printf("Ingrese el valor que desea agregar: ");
            	scanf("%d",&valor);

				system("cls");

				printf("\nIngrese la posicion donde desea agregar: ");
            	scanf("%d",&posicion);

				if(posicion<0){
					posicion = 0;	//Si (posicion<0), el Nodo debe ser agregado en la posición 0.
				}

            	lista = agregarNodoEn(lista,valor,posicion);

				system("cls");
            	printf("\nLista actualizada.\n");
            	Sleep(2000);
            
	            break;
        
    	    case 2:
				system("cls");
        	    printf("Eliminar Nodo.\n\n");

				//Se piden datos.
            	printf("Ingrese el valor que desea eliminar: ");
            	scanf("%d",&eliminar);

            	lista = eliminarNodo(lista,eliminar);

				system("cls");
            	printf("\nLista actualizada.\n");
            	Sleep(2000);

            	break;
        
        	case 3:

				system("cls");
            	printf("Lista.\n\n");
            	imprimir(lista);
            	printf("\n\nPresione una tecla para continuar . . .");
            	getchar();getchar();

            	break;

    	}

		do{
			system("cls");
			printf("Ingrese opcion.\n\n1) Realizar otra operacion.\n2) Salir.\n\n");
			scanf("%d",&opt);
		
			if(opt<1 || opt>2){
				printf("\nError. Ingrese un valor valido.");
				Sleep(2000);
			}
		}while(opt<1 || opt>2);

	}while(opt==1);

	system("cls");
    printf("Gracias por usar el programa.\n");
    Sleep(2000);
	
	return 0;
}

//Funcion para eliminar nodos de la lista.

Nodo eliminarNodo(Nodo lista, int eliminar){
	
	Nodo borrar = NULL;

	if(lista==NULL){
		return NULL;
	}
    else{

        if(lista->valor==eliminar){
        	borrar = lista;
        	lista=lista->next;
        	borrar = NULL;
		}
		else{
			lista->next = eliminarNodo(lista->next, eliminar);
		}
		
    }
	
}

//Funcion para agregar nodos a la lista en una posicion definida por el usuario.

Nodo agregarNodoEn(Nodo lista, int valor, int posicion){
	Nodo nuevo = (Nodo)malloc(sizeof(struct nodo));

	int cont=1;
	int modo=0;

	nuevo->valor = valor;
	nuevo->next = NULL;
	
	if(lista == NULL){
		return nuevo;
	}
		
	Nodo ant = lista;
	Nodo aux = lista->next;
	
	if(posicion==0){
		nuevo->next = lista;
		lista = nuevo;
		modo = 1;
	}
	else{
		while(ant->next!=NULL){
			if(cont==posicion){
				ant->next = nuevo;
				nuevo->next = aux;
				modo = 1;
				break;
			}
			aux = aux->next;
			ant = ant->next;
			cont = cont+1;
		}
	}
	
	if(modo==0){
		ant->next = nuevo;
		nuevo->next = aux;
	}
	 
	return lista;
}


//Funcion para imprimir la lista.

void imprimir(Nodo lista)
{
	while(lista!=NULL)
	{
		printf("[%d]->", lista->valor);
		lista = lista->next;
	}
	
	printf("NULL\n");	
}
