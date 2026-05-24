#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N=5;
    int M=5;
    char Jugador1 [N][M];
    int i;
    int j;
    char nombre [10];

    FILE *archivo;
    archivo=fopen("tablero.txt","w");

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            Jugador1[i][j]='~' ;
        }
    }



    Jugador1[1][2]='B';
    Jugador1[3][4]='X';
    Jugador1[2][1]='O';

    printf("Por favor ingrese el nombre 1:");
    fgets(nombre,sizeof(nombre),stdin);
    fprintf(archivo,"%s",nombre);


    fprintf(archivo,"\n///////JUGADOR 1///////\n");
    fprintf(archivo,"   ");
    for (j = 0; j < M; j++)
    {
        fprintf(archivo,"%d ", j);
    }
    fprintf(archivo,"\n");
    for (i = 0; i < N; i++)
    {
        fprintf(archivo,"%d| ", i);
        for (int j = 0; j < M; j++)
        {
         fprintf(archivo,"%c ", Jugador1[i][j]);
        }
        fprintf(archivo,"\n");
    }
    printf("Por favor ingrese el nombre 2:");
    fgets(nombre,sizeof(nombre),stdin);
    fprintf(archivo,"%s",nombre);
    fclose(archivo);

    archivo=fopen("tablero.txt","r");
    char nombre1[50];
    char temp[50];
    char nombre2[50];

    if(archivo != NULL){
        fgets(nombre1,sizeof(nombre1),archivo);
        while(fgets(temp,sizeof(temp),archivo) != NULL){
                strcpy(nombre2,temp);
        }
        fclose(archivo);

        printf("El nombre 1 es %s",nombre1);
        printf("El nombre 2 es %s",nombre2);
    }else{
    printf("No se encontro el archivo");
    }

    return 0;
}
