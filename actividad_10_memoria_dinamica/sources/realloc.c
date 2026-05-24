#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;
    v = (int*)malloc(5 * sizeof(int));
    v = (int*)realloc(v, 10 * sizeof(int));
    free(v);
    return 0;
}