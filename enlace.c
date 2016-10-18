#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

struct registro
{
    int valor;
    struct registro *next;
};
typedef struct registro _nodo;

_nodo *crearLista(_nodo *apuntador)
{
    return (apuntador = NULL);
}
_nodo *insertarEnLista(int n,_nodo *apuntador)
{
    _nodo *registroNuevo,*apuntadorAuxiliar;

    registroNuevo = (_nodo *) malloc(sizeof(_nodo));

    if(registroNuevo != NULL)
    {
        registroNuevo->valor = n;
        registroNuevo->next = NULL;

        if (apuntador == NULL)
            apuntador = registroNuevo;
        else
        {
            apuntadorAuxiliar = apuntador;
            while (apuntadorAuxiliar->next != NULL)
                apuntadorAuxiliar = apuntadorAuxiliar->next;
                apuntadorAuxiliar->next = registroNuevo;
        }
    }
    return apuntador;
}
_nodo InserEle(int valor, _nodo *apuntador)
{
    _nodo *nuevoNodo;
    nuevoNodo = malloc(sizeof(_nodo));
    nuevoNodo->valor = valor;
    nuevoNodo->next = apuntador;
    return *nuevoNodo;
}
_nodo InsertarMedio(int valor; _nodo *apuntador)
{
    _nodo *nuevoNodo;
    _nodo Auxiliar = apuntador;
    nuevoNodo->valor = valor;
    nuevoNodo->next = NULL;
    if(apuntador->next == NULL)
    {
        apuntador->next = nuevoNodo;
    }
    else
    {
        while(Auxiliar->next != NULL)
        {
            Auxiliar = Auxiliar->next;
        }
        Auxiliar->next = nuevoNodo;
    }
    return nuevoNodo;
}
_nodo Insertar
void imprimirLista(_nodo *apuntador)
{
    _nodo *apuntadorAuxiliar;
    apuntadorAuxiliar = apuntador;
    while(apuntadorAuxiliar!=NULL)
    {
        printf("%d ->", apuntadorAuxiliar->valor);
        apuntadorAuxiliar = apuntadorAuxiliar->next;
    }
    printf("NULL\n");
    return;
}

main()
{
    _nodo *inicioLista;

    inicioLista = crearLista(inicioLista);
    inicioLista = insertarEnLista(1, inicioLista);
    inicioLista = insertarEnLista(1, inicioLista);
    inicioLista = insertarEnLista(1, inicioLista);
    imprimirLista(inicioLista);

    InserEle(2,inicioLista);


}
