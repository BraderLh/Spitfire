/* Escriba una función strindex(t,s) la cual retorne la posición mas al final t en S. Si no encuentra t retornar -1*/


int strinde(char *c,char t)
{
    int i;
    int pos=0;
    for (i = 0; *(c+i)! = '\0';i++)
    {
        if(*(c+i)==t)
            pos=i;
    }
    if(pos>0)
        return pos;
    else
        return -1;

}
main()
{
    char a='o';
    char name[]="ciencia de la computacion";
    printf("%d",strinde(name,a));
}
