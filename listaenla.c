#include <stdio.h>

typedef struct
{
    struct nodo* siguiente;
    char* nombre;
} nodo;
nodo* primer = NULL;
nodo* ultimo = NULL;
void agregar(nodo* nod)
{
    nod -> siguiente = NULL;
    if(primer == NULL)
    {
        primer = nod;
        ultimo = nod;
    }
    else
    {
        ultimo -> siguiente = nod;
        ultimo = nod;
    }
}
/*
void inicio(char *t,nodo* n)
{
    n -> primer = NULL;
    if(primer == n)
    {
        siguiente = primer;
        ultimo = siguiente;
    }
    else
    {
        ultimo -> siguiente = n;
        ultimo = n;
    }

}*/

int main()
{
    nodo* primerNodo = malloc(sizeof(nodo));
    primerNodo -> nombre = "1";
    nodo* segundoNodo = malloc(sizeof(nodo));
    segundoNodo -> nombre = "2";
    nodo* tercerNodo = malloc(sizeof(nodo));
    tercerNodo -> nombre = "3";

    agregar(primerNodo);
    agregar(segundoNodo);
    agregar(tercerNodo);

    nodo* i = primerNodo;
    while(i!=NULL)
    {
        printf("%s\t", i -> nombre );
        i = i -> siguiente;
    }
    return 0;
    /*
    nodo* nuevoNodo = malloc(sizeof(n));
    nuevoNodo -> nombre = "Nuevo Elemento";
    inicio(nuevoNodo);*/
}
