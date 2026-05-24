#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int suma= 0;

    printf("Dame un numero: ");
    scanf("%d", &x);

    while (x != 0){
        suma += x;
        scanf("%d", &x);
    }
    printf("Tu suma es %d",suma);
    return 0;
}

