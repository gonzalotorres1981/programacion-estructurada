#include <stdio.h>
#include <stdlib.h>


void capturar(int v[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("Por favor ingrese el numero entero %d:",i+1);
        scanf("%d",&v[i]);
    }
}

void mostrar(int v[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ", v[i]);
    }
}

int filtrar(int origen[], int destino[], int n)
{
    int i;
    int j=0;
    for(i=0; i<n; i++)
    {
        if(origen[i] % 2 != 0)
        {
            destino[j]=origen[i];
            j++;
        }
    }
    return j;
}

void guardar(int v[],int n)
{
    FILE *f;
    f=fopen("resultados.txt","w");
    int i;
    for(i=0; i<n; i++)
    {
        fprintf(f,"%d ", v[i]);
    }
    fclose(f);
}


int main()
{
    int origen[6];
    int destino[6];
    int n=6;

    capturar(origen,n);
    printf("\n");
    mostrar(origen,n);
    printf("\n");
    int recuperados=filtrar(origen,destino,n);
    mostrar(destino,recuperados);
    guardar(destino,recuperados);
    return 0;
}

