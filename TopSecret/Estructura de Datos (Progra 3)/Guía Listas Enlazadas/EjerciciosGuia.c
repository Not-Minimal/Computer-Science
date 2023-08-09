#include<stdio.h>
#include<stdlib.h>

typedef struct nodo
{
	int valor;
	struct nodo *next;
}*Nodo;

Nodo eliminarTodosLosNodosQueContenga(Nodo lista, int eliminar);
Nodo agregarEnOrden(Nodo lista, Nodo nuevo);
int esContenido(Nodo listaA, Nodo listaB);
Nodo invertirLista(Nodo lista);

Nodo crearNodo(int n);
void imprimir(Nodo lista);

int main(){
	int opcion,numero,modo;
	
	Nodo lista = NULL;
	Nodo lista2 = NULL;
	Nodo nuevo;
	
	nuevo = (Nodo)malloc(sizeof(struct nodo));
	
	do{
		system("cls");
			
		printf("1) Agregar Nodo.\n2) Eliminar Repetidos.\n3) Contenido.\n4) Invertir lista.\n5) Imprimir.\n");
		scanf("%d",&opcion);
		
		if(opcion==1){
			system("cls");
			printf("Ingresa numero: ");
			scanf("%d",&numero);
			
			nuevo = crearNodo(numero);
			
			lista = agregarEnOrden(lista,nuevo);
		}
		
		if(opcion==2){
			system("cls");
			printf("Ingresa el numero que quieres eliminar: ");
			scanf("%d",&numero);
			
			lista = eliminarTodosLosNodosQueContenga(lista,numero);
		}
		
		if(opcion==3){
			//Se llena lista 1.
			do{
				system("cls");
				printf("Ingresa lista 1: ");
				scanf("%d",&numero);
			
				nuevo = crearNodo(numero);
			
				lista = agregarEnOrden(lista,nuevo);
				
				printf("Listo?\n\n1) Si.\n2) No.\n");
				scanf("%d",&opcion);
			}while(opcion==2);
			
			//Se llena lista 2.
			do{
				system("cls");
				printf("Ingresa lista 2: ");
				scanf("%d",&numero);
			
				nuevo = crearNodo(numero);
			
				lista2 = agregarEnOrden(lista2,nuevo);
				
				system("cls");
				printf("Listo?\n\n1) Si.\n2) No.\n");
				scanf("%d",&opcion);
			}while(opcion==2);
			
			system("cls");
			//Se ve si la lista 2 esta en la lista 1.
			modo = esContenido(lista,lista2);
			
			if(modo==0){
				printf("Fila 2 no esta en Fila 1.\n");
			}
			else{
				printf("Fila 2 esta en Fila 1.\n");
			}
			
			printf("\n\nPress to continue . . .\n");
			getchar();getchar();
		}
		
		if(opcion==4){
			do{
				system("cls");
				printf("Ingresa lista 1: ");
				scanf("%d",&numero);
			
				nuevo = crearNodo(numero);
			
				lista = agregarEnOrden(lista,nuevo);
				
				printf("Listo?\n\n1) Si.\n2) No.\n");
				scanf("%d",&opcion);
			}while(opcion==2);
			
			lista2 = invertirLista(lista);
			
			printf("Lista 1:\n");
			imprimir(lista);
			printf("\n\nLista 2:\n");
			imprimir(lista2);
			
			printf("\n\nPress to continue . . .\n");
			getchar();getchar();
		}
		
		if(opcion==5){
			system("cls");
			
			printf("Lista:\n\n");
			imprimir(lista);
			printf("\n\nPress to continue . . .\n");
			getchar();getchar();
		}
		system("cls");
		
		printf("Otra operacion?\n\n1) Si.\n2) No.\n");
		scanf("%d",&opcion);
		
	}while(opcion==1);	
	
	return 0;
}

Nodo agregarEnOrden(Nodo lista, Nodo nuevo){
	if(lista == NULL) return nuevo;
	if(lista->valor >= nuevo->valor)
	{
		nuevo->next = lista;
		return nuevo;
	}
	
	Nodo ant = lista;
	Nodo aux = lista->next;
	
	while(aux != NULL && aux->valor < nuevo->valor)
	{
		ant = aux;
		aux = aux->next;	
	}
	
	ant->next = nuevo;
	nuevo->next = aux;
	
	return lista;
}

Nodo crearNodo(int n){
	Nodo nuevo = (Nodo)malloc(sizeof(struct nodo));
	nuevo->next = NULL;
	nuevo->valor = n;
	return nuevo;
}

void imprimir(Nodo lista){
	while(lista!=NULL){
		printf("%d -> ", lista->valor);
		lista = lista->next;
	}
	
	printf("NULL");	
}

Nodo eliminarTodosLosNodosQueContenga(Nodo lista, int eliminar){
	
	if(lista==NULL){
		return NULL;
	}
	
	if(lista->valor==eliminar){
		lista = eliminarTodosLosNodosQueContenga(lista->next,eliminar);
	}
	else{
		lista->next = eliminarTodosLosNodosQueContenga(lista->next,eliminar);
	}
	
	return lista;
}

int esContenido(Nodo listaA, Nodo listaB){
	
	Nodo aux = listaB;
	
	while(listaA != NULL && aux != NULL)
	{
		if(listaA->valor == aux->valor)
			aux = aux->next;
		else
			if(aux != listaB)
			{
				aux = listaB;	
				continue;
			}		
		
		listaA = listaA->next;		
	}
	
	return (aux == NULL) ? 1 : 0;
	
}

Nodo invertirLista(Nodo lista){
	
	if(lista == NULL) {
		return NULL;
	}
	
	if(lista->next == NULL){
		return lista;
	}
	
	Nodo ant = NULL;
	Nodo aux = lista;
	Nodo sig = lista;
	
	while(aux != NULL){		
		sig = aux->next;//Se memoriza la referencia del siguiente
		aux->next = ant;//Ya que aqu? la perder? por el anterior.
		ant = aux;		
		aux = sig;
	}
	
	return ant;
}







