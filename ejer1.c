/* Escriba una funci�n que convierta may�sculas a min�sculas. Sin usar if-while-for*/
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
