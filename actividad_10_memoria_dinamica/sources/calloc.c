#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;
    v = (int*)calloc(5, sizeof(int));
    printf("%d\n", v[0]);
    printf("%d\n", v[1]);
    printf("%d\n", v[2]);
    free(v);
    return 0;
}