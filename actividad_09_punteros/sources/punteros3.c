#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *p;

    p = &x;

    printf("\nx = %d", x);
    printf("\nDireccion de x: %p", (void*)&x);
    printf("\np = %p", (void*)p);
    printf("\n*p = %d", *p);

    *p = 20;
    printf("\nDespues de *p = 20: x = %d\n", x);

    return 0;
}