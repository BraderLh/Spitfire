/* Escriba una función que convierta mayúsculas a minúsculas. Sin usar if-while-for*/
#include <stdio.h>


int convert(int c)
{
    return c+'a'-'A';
}

int main()
{
    int letra;
    letra=getchar();
    printf("%c",convert(letra));
}
