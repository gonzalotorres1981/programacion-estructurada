#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N=4;
    int M=20;
    int i;
    char Nombre [N][M];
    int numero[5];

    printf("============================================================================\n");
    printf("Comprobacion de espacio guardado para un arreglo bidimensional de caracteres\n");
    printf("============================================================================\n\n");

    for (i=0; i<4; i++)
    {
        printf("%d",Nombre[i]);
        printf("\n");
    }

    printf("\n=================\n");
    printf("Lectura de numeros\n");
    printf("==================\n\n");

    for (i=0; i<5; i++)
    {
        printf("Por Favor ingrese el numero %d:",i+1);
        scanf("%d",&numero[i]);
    }

    printf("\n=============================================================\n");
    printf("Valores y direcciones de un arreglo de enteros unidimensional\n");
    printf("=============================================================\n\n");

    for (i=0; i<5; i++)
    {
        printf("Numero %d:%d Direccion %d:%d",i+1,numero[i],i+1,&numero[i]);
        printf("\n");
    }
}
