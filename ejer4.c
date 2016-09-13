//Escriba una función recursiva que devuelva el string invertido. (no usar string.h)
#include <stdio.h>

void mostrar(char *stri)
{
    int i;
    int t=len(stri);
    for(i=t-1;i>=0;--i)
        printf("%c",*(stri+i));
}
int len(char *ys)
{
    int tm=0;
    int i;
    for(i=0;*(ys+i)!='\0';++i)
        ++tm;
    return tm;
}

int main()
{
    char strinvertido[]="es lo que hay";
    mostrar(strinvertido);
    return 0;
}
