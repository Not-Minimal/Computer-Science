#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int numerador;
    int denominador;
    struct Nodo *siguiente;
} Nodo;

Nodo *crearLista(Nodo *cabeza, int n);
Nodo *insertarNodo(Nodo *cabeza);
Nodo *insertarNodoEnPosicion(Nodo *cabeza, int posicion);
void imprimirLista(Nodo *cabeza);
Nodo *eliminarNodo(Nodo *cabeza, int X);
int sumaLista(Nodo *cabeza);
int productoLista(Nodo *cabeza);
int buscar(Nodo *cabeza, int X);
void mayorValor(Nodo *cabeza, int *valor, int *posicion);
void menorValor(Nodo *cabeza, int *valor, int *repeticiones);
float divisionMayorMenor(Nodo *cabeza);
Nodo *ordenarListaAscendente(Nodo *lista);
Nodo *ordenarListaDescendente(Nodo *lista);
void menu();

Nodo *crearLista(Nodo *cabeza, int n)
{
    Nodo *nuevo = NULL;
    int i;

    if (cabeza == NULL)
    {
        Nodo *actual = NULL;
        for (i = 0; i < n; i++)
        {
            nuevo = (Nodo *)malloc(sizeof(Nodo));

            printf("Ingrese el valor del numerador: ");
            scanf("%d", &nuevo->numerador);
            fflush(stdin);

            do
            {
                printf("Ingrese el valor del denominador: ");
                scanf("%d", &nuevo->denominador);
                fflush(stdin);

                if (nuevo->denominador == 0)
                {
                    printf("Valor invalido, reingrese denominador diferente de 0 \\n");
                }

            } while (nuevo->denominador == 0);

            nuevo->siguiente = NULL;

            if (cabeza == NULL)
            {
                cabeza = nuevo;
                actual = nuevo;
            }
            else
            {
                actual->siguiente = nuevo;
                actual = nuevo;
            }
        }

        printf("\\n");
        return cabeza;
    }
    else
    {
        Nodo *actual = cabeza;

        while (actual->siguiente != NULL)
        {
            actual = actual->siguiente;
        }

        for (i = 0; i < n; i++)
        {
            nuevo = (Nodo *)malloc(sizeof(Nodo));

            printf("Ingrese el valor del numerador a agregar: ");
            scanf("%d", &nuevo->numerador);
            fflush(stdin);

            do
            {
                printf("Ingrese el valor del denominador: ");
                scanf("%d", &nuevo->denominador);
                fflush(stdin);

                if (nuevo->denominador == 0)
                {
                    printf("Valor invalido, reingrese denominador diferente de 0\\n");
                }

            } while (nuevo->denominador == 0);

            nuevo->siguiente = NULL;
            actual->siguiente = nuevo;
            actual = nuevo;
        }
    }
    printf("\\n");
    return cabeza;
}

Nodo *insertarNodo(Nodo *cabeza)
{
    Nodo *nuevo = (Nodo *)malloc(sizeof(Nodo));
    printf("Ingrese el valor del numerador a agregar: ");
    scanf("%d", &nuevo->numerador);
    while (1)
    {
        printf("Ingrese el valor del denominador: \\n");
        scanf("%d", &nuevo->denominador);
        if (nuevo->denominador != 0)
        {
            break;
        }
        printf("Valor invalido, reingrese denominador diferente de 0\\n");
    }
    nuevo->siguiente = NULL;
    if (cabeza == NULL)
    {
        cabeza = nuevo;
    }
    else
    {
        Nodo *actual = cabeza;
        while (actual->siguiente != NULL)
        {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
    }
    printf("\\n");
    return cabeza;
}

Nodo *insertarNodoEnPosicion(Nodo *cabeza, int posicion)
{
    Nodo *nuevo = (Nodo *)malloc(sizeof(Nodo));
    printf("Ingrese el valor del nodo: ");
    scanf("%d", &nuevo->numerador);
    printf("\\n");
    nuevo->siguiente = NULL;
    if (cabeza == NULL || posicion == 0)
    {
        nuevo->siguiente = cabeza;
        cabeza = nuevo;
    }
    else
    {
        Nodo *actual = cabeza;
        int i = 1;
        while (actual->siguiente != NULL && i < posicion)
        {
            actual = actual->siguiente;
            i++;
        }
        nuevo->siguiente = actual->siguiente;
        actual->siguiente = nuevo;
    }
    return cabeza;
}

void imprimirLista(Nodo *cabeza)
{
    system("cls");
    printf("Lista: \\n");
    while (cabeza != NULL)
    {
        printf("%d/%d", cabeza->numerador, cabeza->denominador);
        if (cabeza->siguiente != NULL)
        {
            printf(" ->> ");
        }
        cabeza = cabeza->siguiente;
    }
    printf("\\n\\n");
}

Nodo *eliminarNodo(Nodo *cabeza, int valor)
{
    Nodo *anterior = NULL, *actual = cabeza;
    while (actual != NULL && actual->numerador != valor)
    {
        anterior = actual;
        actual = actual->siguiente;
    }
    if (actual != NULL)
    {
        if (anterior == NULL)
        {
            cabeza = actual->siguiente;
        }
        else
        {
            anterior->siguiente = actual->siguiente;
        }
        free(actual);
    }
    return cabeza;
}

int sumaLista(Nodo *cabeza)
{
    int suma = 0;
    while (cabeza != NULL)
    {
        suma += cabeza->numerador;
        cabeza = cabeza->siguiente;
    }
    return suma;
}

int productoLista(Nodo *cabeza)
{
    system("cls");
    int producto1 = 1, producto2 = 1;
    if (cabeza == NULL)
    {
        printf("No hay elementos en la lista\n");
        return 0;
    }
    else
    {
        while (cabeza != NULL)
        {
            producto1 *= cabeza->numerador;
            producto2 *= cabeza->denominador;
            cabeza = cabeza->siguiente;
        }
        printf("El producto de los elementos de la lista es: %d/%d \n", producto1, producto2);
        return 0;
    }
}
int buscar(Nodo *cabeza, int x)
{
    printf("Ingrese el numerador del conjunto a/b a buscar: ");
    scanf("%d", &x);

    int x2;
    printf("Ingrese el denominador del conjunto a/b a buscar: ");
    scanf("%d", &x2);

    if (x2 == 0)
    {
        printf("El número no se encuentra en la lista.\\\\n\\\\n");
        return 0;
    }

    int contador = 0;
    while (cabeza != NULL)
    {
        if (cabeza->numerador == x && cabeza->denominador == x2)
        {
            contador++;
        }
        cabeza = cabeza->siguiente;
    }
    if (contador == 0)
    {
        printf("El número no se encuentra en la lista.\\\\n\\\\n");
    }
    else
    {
        printf("El número se encuentra %d veces en la lista.\\\\n\\\\n", contador);
    }
    return 0;
}

void mayorValor(Nodo *cabeza, int *valor, int *posicion)
{
    int mayor = cabeza->numerador;
    *valor = mayor;
    *posicion = 1;
    cabeza = cabeza->siguiente;
    int i = 2;
    while (cabeza != NULL)
    {
        if (cabeza->numerador > mayor)
        {
            mayor = cabeza->numerador;
            *valor = mayor;
            *posicion = i;
        }
        cabeza = cabeza->siguiente;
        i++;
    }
}

void menorValor(Nodo *cabeza, int *valor, int *repeticiones)
{
    int menor = cabeza->numerador;
    *valor = menor;
    *repeticiones = 1;
    cabeza = cabeza->siguiente;
    while (cabeza != NULL)
    {
        if (cabeza->numerador < menor)
        {
            menor = cabeza->numerador;
            *valor = menor;
            *repeticiones = 1;
        }
        else if (cabeza->numerador == menor)
        {
            (*repeticiones)++;
        }
        cabeza = cabeza->siguiente;
    }
}

float divisionMayorMenor(Nodo *cabeza)
{
    int mayor, menor, repeticiones;
    menorValor(cabeza, &menor, &repeticiones);
    mayorValor(cabeza, &mayor, &repeticiones);
    return (float)mayor / menor;
}

Nodo *ordenarListaAscendente(Nodo *lista)
{
    Nodo *actual = lista, *siguiente = NULL, *nuevo = NULL, *actual = NULL;
    int actualValor;
    while (actual != NULL)
    {
        siguiente = actual->siguiente;
        while (siguiente != NULL)
        {
            if (actual->numerador > siguiente->numerador)
            {
                actualValor = actual->numerador;
                actual->numerador = siguiente->numerador;
                siguiente->numerador = actualValor;
            }
            siguiente = siguiente->siguiente;
        }
        nuevo = (Nodo *)malloc(sizeof(Nodo));
        nuevo->numerador = actual->numerador;
        nuevo->siguiente = NULL;
        if (actual == NULL)
        {
            actual = nuevo;
            lista = nuevo;
        }
        else
        {
            if (actual->numerador != actual->numerador)
            {
                actual->siguiente = nuevo;
                actual = nuevo;
            }
        }
        actual = actual->siguiente;
    }
    return lista;
}

Nodo *ordenarListaDescendente(Nodo *lista)
{
    Nodo *actual = lista, *siguiente = NULL, *nuevo = NULL, *actual = NULL;
    int actualValor;
    while (actual != NULL)
    {
        siguiente = actual->siguiente;
        while (siguiente != NULL)
        {
            if (actual->numerador < siguiente->numerador)
            {
                actualValor = actual->numerador;
                actual->numerador = siguiente->numerador;
                siguiente->numerador = actualValor;
            }
            siguiente = siguiente->siguiente;
        }
        nuevo = (Nodo *)malloc(sizeof(Nodo));
        nuevo->numerador = actual->numerador;
        nuevo->siguiente = NULL;
        if (actual == NULL)
        {
            actual = nuevo;
            lista = nuevo;
        }
        else
        {
            if (actual->numerador != actual->numerador)
            {
                actual->siguiente = nuevo;
                actual = nuevo;
            }
        }
        actual = actual->siguiente;
    }
    return lista;
}

void menu()
{
    Nodo *lista = NULL;
    int opcion = 0, n = 0, X = 0, valor = 0, posicion = 0, repeticiones = 0;
    float division = 0.0;
    do
    {
        printf("1. Insertar N elementos a la lista\n");
        printf("2. Insertar un unico elemento elemento\n");
        printf("3. Eliminar elemento especifico de la lista\n");
        printf("4. Sumar elementos de la lista\n");
        printf("5. Multiplicar elementos de la lista\n");
        printf("6. Buscar elemento en la lista\n");
        printf("7. Encontrar el mayor valor y su posición\n");
        printf("8. Encontrar el menor valor y sus repeticiones\n");
        printf("9. Calcular la división del mayor y el menor\n");
        printf("10. Ordenar la lista de forma ascendente\n");
        printf("11. Ordenar la lista de forma descendente\n");
        printf("12. Imprimir Lista\n");
        printf("13. Insertar nodo en posicion especifica\n");
        printf("14. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        fflush(stdin);
        system("cls");
        switch (opcion)
        {
        case 1: // listo
            do
            {
                printf("Ingrese la cantidad de elementos de la lista \n");
                scanf("%d", &n);
                fflush(stdin);
                if (n < 1)
                {
                    printf("Valor invalido, reingrese dato mayor o igual a 1\n");
                }

            } while (n < 1);
            system("cls");
            lista = crearLista(lista, n);
            system("cls");
            break;
        case 2: // listo
            system("cls");
            lista = insertarNodo(lista);
            system("cls");
            break;
        case 3: //! no listo
            printf("Ingrese el valor del nodo que desea eliminar: ");
            scanf("%d", &X);
            fflush(stdin);
            lista = eliminarNodo(lista, X);
            break;
        case 4: //! no listo
            system("cls");
            sumaLista(lista);
            break;
        case 5: // lsito
            productoLista(lista);
            break;
        case 6: //! no listo
            buscar(lista, X);
            break;
        case 7: //! no listo
            mayorValor(lista, &valor, &posicion);
            printf("El mayor valor de la lista es %d y se encuentra en la posición %d\n", valor, posicion);
            break;
        case 8: //! no listo
            menorValor(lista, &valor, &repeticiones);
            printf("El menor valor de la lista es %d y se repite %d veces\n", valor, repeticiones);
            break;
        case 9: //! no listo
            division = divisionMayorMenor(lista);
            printf("La división del mayor y el menor valor de la lista es: %.2f\n", division);
            break;
        case 10: //! no listo
            imprimirLista(lista);
            lista = ordenarListaAscendente(lista);
            imprimirLista(lista);
            break;
        case 11: //! no listo
            imprimirLista(lista);
            lista = ordenarListaDescendente(lista);
            imprimirLista(lista);
            break;
        case 12: //! no listo
            imprimirLista(lista);
            break;
        case 13: //! no listo
            printf("Ingrese la posicion del nodo que desea insertar: ");
            scanf("%d", &X);
            fflush(stdin);
            lista = insertarNodoEnPosicion(lista, X);
            break;
        case 14: // listo
            printf("Saliendo...\n");
            break;
        default: // listo xd
            printf("Opción inválida\n");
        }
    } while (opcion != 14);
}
int main()
{
    menu();
    return 0;
}