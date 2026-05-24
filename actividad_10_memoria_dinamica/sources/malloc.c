#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;
    int i;
    v = (int*)malloc(5 * sizeof(int));
    for(i = 0; i < 5; i++)
    {
        v[i] = i * 2;
    }
    for(i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
    free(v);
    return 0;
}