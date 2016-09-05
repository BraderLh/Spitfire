/*Cuenta espacios en blanco,tabs y nuevas lineas*/
#include <stdio.h>

main()
{
    int c, nl;
    nl = 0;
    while((c=getchar())!=EOF)
        if( c == ' ')
            ++nl;
        else if( c == '\t')
            ++nl;
        else if( c == '\n')
            ++nl;
    printf("%d\n", nl);
}
