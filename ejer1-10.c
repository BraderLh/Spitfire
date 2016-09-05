#include <stdio.h>

main()
{
    int c;
    c=getchar();
    while(c!=EOF)
    {
        if(c=='\t')
            putchar('t');
            c=getchar();
        if(c == '\b')
            putchar('b');
            c=getchar();
        if(c == '\\')
            putchar('\\');
            c=getchar();

    }
}
