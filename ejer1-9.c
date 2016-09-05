/*Reemplaza cada letra por un espacio en blanco*/
#include <stdio.h>

int main()
{
    int c;
    c=getchar();
    while(c!=EOF)
    {
        putchar(' ');
        c=getchar();
    }
}
