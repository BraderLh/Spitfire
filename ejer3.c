#include <stdio.h>

int expo(int x, int y)
{
    if(y==1)
        return x;
    return x*expo(x,y-1);
}

float conver(char *xs)
{
    int i, b, m;
    b=10;
    float n,  decimal;
    n=0;
    decimal=0;
    m=1;
    for(i=0;*(xs+i)!='.';++i){
        if(*(xs+i)>='0'&& *(xs+i)<'9')
            n=10*n+(*(xs+i)-'0');
    }
    while(*(xs+i+m)!='\0'){
        decimal=1.0*(*(xs+i+m)-'0')/(expo(b,m));
        n+=decimal;
        m++;
    }
    return n;
}
int main()
{
    char num[]="123.456";
    printf("%f \n", conver(num));
}
