#include <stdio.h>
#include <stdlib.h>

int main()
{
int N;
int suma;
int valor;
printf("Por favor ingrese el numero de datos que quiere sumar:");
scanf("%d",&N);
    for (int i=1; i<=N; i++)
    {
        printf("\nPor favor ingrese el valor %d:",i);
        scanf("%d",&valor);
        suma+=valor;
    }
    printf("\nLa sumatoria final es %d",suma);
    return 0;
}

