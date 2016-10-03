#include <stdio.h>
#include "calc.h"
#define  MAXVAL 100
int sp = 0;
double val[MAXVAL];

void push(double f)
{
      printf("push numero: %f en : %d\n",f,sp);
      if (sp < MAXVAL)
        val[sp++] = f;
      else
        printf("error: pila llena\n");
}

double pop(void)
{
      if (sp > 0) {
        printf("pop %f en indice: %d\n",val[sp],sp);
        return val[--sp];
      }
      else {
        printf("error: pila vacia\n");
        return 0.0;
  }
}
