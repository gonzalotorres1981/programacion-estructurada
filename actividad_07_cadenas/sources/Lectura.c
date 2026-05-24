#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N=4;
    int M=20;
    int i;
    char Nombre [N][M];

    printf("===============================\n");
    printf("LECTURA E IMPRESION DE STRINGS\n");
    printf("===============================\n\n");


    for (i=0; i<2; i++)
    {
        printf("Por Favor ingrese el nombre %d:",i+1);
        fgets(Nombre[i],sizeof(Nombre[i]),stdin);
    }
    for (i=2; i<4; i++)
    {
        printf("Por Favor ingrese el apellido %d:",i-1);
        fgets(Nombre[i],sizeof(Nombre[i]),stdin);
    }
    printf("\n");
    for (i=0; i<4; i++)
    {
        printf("%s",Nombre[i]);
    }

    //Aqui comprobamos que independientemente si asignamos el valor del arreglo o la direccion de memoria del arreglo nos imprimira la direccion
    //de memoria del arreglo ya que el nombre de un arreglo es un puntero que nos indica donde inicia este

    printf("=============================================================\n");
    printf("Ejercicio de impresion de direccion de memoria con & y sin &\n");
    printf("=============================================================\n\n");

    printf("%d\n",Nombre);
    printf("%d",&Nombre);

    return 0;

    }

