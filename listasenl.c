#include <stdio.h>
#include <stdlib.h>

struct registro
{
    int val;
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
        registroNuevo->val = n;
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
void imprimirLista(_nodo *apuntador)
{
    _nodo *apuntadorAuxiliar;
    apuntadorAuxiliar = apuntador;
    printf("Contenido de la lista: inicioLista->");
    while(apuntadorAuxiliar!=NULL)
    {
        printf("%d ->", apuntadorAuxiliar->val);
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
    return EXIT_SUCCESS;
}


