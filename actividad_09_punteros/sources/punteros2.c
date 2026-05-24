#include <stdio.h>
#include <stdlib.h>

void cambiar(int *x)
{
    *x = 100;
}

int main()
{
    int a = 5;

    printf("Antes: a = %d\n", a);
    cambiar(&a);
    printf("Despues: a = %d\n", a);

    return 0;
}