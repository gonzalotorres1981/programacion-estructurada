#include <stdio.h>
#include <stdlib.h>
int suma (int a, int b)
{
    return a+b;
}

int cambiar(int x)
{
    x=100;
    return x;
}

void mostrar(int v[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ", v[i]);
    }
}

void mostrar_matriz (int m[2][3])
{
    int i,j;
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a=5;
    a=cambiar(a);
    printf("%d",a);

    int datos[5]= {1,2,3,4,5};
    mostrar(datos,5);

    int matriz[2][3]={{1,2,3},{4,5,6}};
    printf("\n");
    mostrar_matriz(matriz);
    return 0;
}
