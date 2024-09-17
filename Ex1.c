#include <stdio.h>

int main(void)
{
   int v = 5, *p;

    p = &v;

    printf("Valor guardado: %p\n",p);
    printf("Valor apontado: %d\n",*p);
}