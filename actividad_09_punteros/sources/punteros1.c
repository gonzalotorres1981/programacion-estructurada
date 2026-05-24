#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[3] = {10, 20, 30};

    printf("v[0] = %d, *v = %d\n", v[0], *v);
    printf("v[1] = %d, *(v+1) = %d\n", v[1], *(v+1));
    printf("v[2] = %d, *(v+2) = %d\n", v[2], *(v+2));

    return 0;
}