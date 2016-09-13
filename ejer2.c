/* Escriba una función que convierta mayúsculas a minúsculas. Sin usar if-while-for*/

#include <stdio.h>


void convert(char *mayus,char *minus)
{
    char x;

    x = *mayus;
    *mayus = *minus;
    *minus = x;
}
main()
{
    char a = 'A', b = 'a';
    convert(&a,&b);
    printf("%d",a);
}

