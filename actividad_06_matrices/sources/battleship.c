#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=5;
    int M=5;
    int Jugador1 [N][M];
    int Jugador2 [N][M];
    int bote1=777;
    int bote2[2]= {555,555};
    int i;
    int j;
    int XB1, YB1;
    int XB2, YB2, XB22, YB22;
    int impactos1=0, impactos2=0;
    int DIS1, DIS2;
    int turno_extra;

    printf("              |    |    |                         \n");
    printf("             )_)  )_)  )_)                        \n");
    printf("            )___))___))___)\\                     \n");
    printf("           )____)____)_____)\\\\                  \n");
    printf("         _____|____|____|____\\\\\\__             \n");
    printf("---------\\                   /---------           \n");
    printf("  ^^^^^ ^^^^^^^^^^^^^^^^^^^^^^^^^  ^^^^^          \n");
    printf("     ^^^^      ^^^^     ^^^    ^^                 \n");
    printf("                                                  \n");
    printf("   ____       _______ _______ _      ____        \n");
    printf("  |  _ \\   /\\|__   __|__   __| |    |  __|       \n");
    printf("  | |_) | /  \\  | |     | |  | |    | |__        \n");
    printf("  |  _ < / /\\ \\ | |     | |  | |    |  __|       \n");
    printf("  | |_) / ____ \\| |     | |  | |____| |__        \n");
    printf("  |____/_/    \\_|_|     |_|  |______|____|       \n");
    printf("                                                  \n");
    printf("--------------------------------------------------\n");
    printf("\nPresiona ENTER para iniciar la batalla...");
    getchar();
    system("cls");

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            Jugador1[i][j]=0;
        }
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            Jugador2[i][j]=0;
        }
    }

    printf("///////JUGADOR 1///////\n");
    printf("   ");
    for (j = 0; j < M; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%d| ", i);
        for (int j = 0; j < M; j++)
        {
            if(Jugador1[i][j] == 0) printf("~ ");
            else printf("%d ", Jugador1[i][j]);
        }
        printf("\n");
    }

    printf("\n\nJugador 1 - Introduzca sus cordenadas en formato x y para el barco 1:");
    do
    {
        scanf("%d %d",&XB1,&YB1);
    }
    while(XB1<0||YB1<0||XB1>4||YB1>4);
    Jugador1[XB1][YB1]=1;
    while(getchar() != '\n');

    printf("\n///////JUGADOR 1///////\n");
    printf("   ");
    for (j = 0; j < M; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%d| ", i);
        for (int j = 0; j < M; j++)
        {
            if(Jugador1[i][j] == 0) printf("~ ");
            else printf("%d ", Jugador1[i][j]);
        }
        printf("\n");
    }

    printf("\n\nJugador 1- Introduzca sus cordenadas en formato x y x y para el barco 2: ");
    do
    {
        scanf("%d %d %d %d",&XB2,&YB2,&XB22,&YB22);
    }
    while(XB2<0||YB2<0||XB22<0||YB22<0||XB2>4||YB2>4||XB22>4||YB22>4||Jugador1[XB2][YB2]==1||Jugador1[XB22][YB22]==1||(!(XB2==XB22&&(YB22==YB2+1||YB22==YB2-1))&&!(YB2==YB22&&(XB22==XB2+1||XB22==XB2-1))));
    Jugador1[XB2][YB2]=1;
    Jugador1[XB22][YB22]=1;
    while(getchar() != '\n');

    printf("\n///////JUGADOR 1///////\n");
    printf("   ");
    for (j = 0; j < M; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%d| ", i);
        for (int j = 0; j < M; j++)
        {
            if(Jugador1[i][j] == 0) printf("~ ");
            else printf("%d ", Jugador1[i][j]);
        }
        printf("\n");
    }

    printf("\nPresiona ENTER y pase el teclado al jugador 2");
    getchar();
    system("cls");

    printf("\n///////JUGADOR 2///////\n");
    printf("   ");
    for (j = 0; j < M; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%d| ", i);
        for (int j = 0; j < M; j++)
        {
            if(Jugador2[i][j] == 0) printf("~ ");
            else printf("%d ", Jugador2[i][j]);
        }
        printf("\n");
    }

    printf("\n\nJugador 2- Introduzca sus cordenadas en formato x y para el barco 1: ");
    do
    {
        scanf("%d %d",&XB1,&YB1);
    }
    while(XB1<0||YB1<0||XB1>4||YB1>4);
    Jugador2[XB1][YB1]=1;
    while(getchar() != '\n');

    printf("\n///////JUGADOR 2///////\n");
    printf("   ");
    for (j = 0; j < M; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%d| ", i);
        for (int j = 0; j < M; j++)
        {
            if(Jugador2[i][j] == 0) printf("~ ");
            else printf("%d ", Jugador2[i][j]);
        }
        printf("\n");
    }

    printf("\n\nJugador 2- Introduzca sus cordenadas en formato x y x y para el barco 2: ");
    do
    {
        scanf("%d %d %d %d",&XB2,&YB2,&XB22,&YB22);
    }
    while(XB2<0||YB2<0||XB22<0||YB22<0||XB2>4||YB2>4||XB22>4||YB22>4||Jugador2[XB2][YB2]==1||Jugador2[XB22][YB22]==1||(!(XB2==XB22&&(YB22==YB2+1||YB22==YB2-1))&&!(YB2==YB22&&(XB22==XB2+1||XB22==XB2-1))));
    Jugador2[XB2][YB2]=1;
    Jugador2[XB22][YB22]=1;
    while(getchar() != '\n');

    printf("\n///////JUGADOR 2///////\n");
    printf("   ");
    for (j = 0; j < M; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%d| ", i);
        for (j = 0; j < M; j++)
        {
            if(Jugador2[i][j] == 0) printf("~ ");
            else printf("%d ", Jugador2[i][j]);
        }
        printf("\n");
    }

    printf("\nPresiona ENTER para iniciar el juego");
    getchar();
    system("cls");

    do
    {
        do
        {
            turno_extra=0;
            printf("\n///////JUGADOR 2///////\n");
            printf("   ");
            for (j = 0; j < M; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
            for (i = 0; i < N; i++)
            {
                printf("%d| ", i);
                for (int j = 0; j < M; j++)
                {
                    if (Jugador2[i][j] == 0 || Jugador2[i][j] == 1)
                    {
                        printf("~ ");
                    }
                    else
                    {
                        printf("%d ", Jugador2[i][j]);
                    }
                }
                printf("\n");
            }

            printf("\nJugador 1 Por favor ingrese las cordenas de su disparo en formato x y:");
            do
            {
                scanf("%d %d",&DIS1,&DIS2);
            }
            while(DIS1<0||DIS2<0||DIS1>4||DIS2>4||Jugador2[DIS1][DIS2]== 2||Jugador2[DIS1][DIS2]== 3);
            while(getchar() != '\n');

            system("cls");

            if(Jugador2[DIS1][DIS2]==0)
            {
                Jugador2[DIS1][DIS2]=2;
            }
            else if(Jugador2[DIS1][DIS2]==1)
            {
                Jugador2[DIS1][DIS2]=3;
                impactos1++;
                if(impactos1<3)
                {
                    turno_extra=1;
                }
            }

            printf("\n///////JUGADOR 2///////\n");
            printf("   ");
            for (j = 0; j < M; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
            for (i = 0; i < N; i++)
            {
                printf("%d| ", i);
                for (int j = 0; j < M; j++)
                {
                    if (Jugador2[i][j] == 0 || Jugador2[i][j] == 1)
                    {
                        printf("~ ");
                    }
                    else
                    {
                        printf("%d ", Jugador2[i][j]);
                    }
                }
                printf("\n");
            }

            if(Jugador2[DIS1][DIS2]==2)
            {
                printf("\nDisparo fallido fin del turno del jugador uno\n");
            }
            else if(Jugador2[DIS1][DIS2]==3)
            {
                printf("\nDisparo exitoso el turno del jugador 1 continua\n");
            }

            printf("Presione ENTER para continuar...");
            getchar();
            system("cls");

        }
        while(turno_extra==1);

        if(impactos1<3)
        {
            printf("\nPresiona ENTER y pase el teclado al jugador 2");
            getchar();
            system("cls");

            do
            {
                turno_extra=0;
                printf("\n///////JUGADOR 1///////\n");
                printf("   ");
                for (j = 0; j < M; j++)
                {
                    printf("%d ", j);
                }
                printf("\n");
                for (i = 0; i < N; i++)
                {
                    printf("%d| ", i);
                    for (int j = 0; j < M; j++)
                    {
                        if (Jugador1[i][j] == 0 || Jugador1[i][j] == 1)
                        {
                            printf("~ ");
                        }
                        else
                        {
                            printf("%d ", Jugador1[i][j]);
                        }
                    }
                    printf("\n");
                }

                printf("\nJugador 2 Por favor ingrese las cordenas de su disparo en formato x y:");
                do
                {
                    scanf("%d %d",&DIS1,&DIS2);
                }
                while(DIS1<0||DIS2<0||DIS1>4||DIS2>4||Jugador1[DIS1][DIS2]== 2||Jugador1[DIS1][DIS2]== 3);
                while(getchar() != '\n');

                system("cls");

                if(Jugador1[DIS1][DIS2]==0)
                {
                    Jugador1[DIS1][DIS2]=2;
                }
                else if(Jugador1[DIS1][DIS2]==1)
                {
                    Jugador1[DIS1][DIS2]=3;
                    impactos2++;
                    if(impactos2<3)
                    {
                        turno_extra=1;
                    }
                }

                printf("\n///////JUGADOR 1///////\n");
                printf("   ");
                for (j = 0; j < M; j++)
                {
                    printf("%d ", j);
                }
                printf("\n");
                for (i = 0; i < N; i++)
                {
                    printf("%d| ", i);
                    for (int j = 0; j < M; j++)
                    {
                        if (Jugador1[i][j] == 0 || Jugador1[i][j] == 1)
                        {
                            printf("~ ");
                        }
                        else
                        {
                            printf("%d ", Jugador1[i][j]);
                        }
                    }
                    printf("\n");
                }

                if(Jugador1[DIS1][DIS2]==2)
                {
                    printf("\nDisparo fallido fin del turno del jugador 2\n");
                }
                else if(Jugador1[DIS1][DIS2]==3)
                {
                    printf("\nDisparo exitoso el turno del jugador 2 continua\n");
                }

                printf("Presione ENTER para continuar...");
                getchar();
                system("cls");

            }
            while(turno_extra==1);

            if(impactos2 < 3)
            {
                printf("\nPresiona ENTER y pase el teclado al jugador 1");
                getchar();
                system("cls");
            }
        }
    }
    while(impactos1<3&&impactos2<3);

    printf("\nPresione ENTER para descubrir el ganador");
    getchar();
    system("cls");

    if(impactos1==3){
        printf("\n\n");
        printf("          _ ._  _ , _ ._ \n");
        printf("        (_ ' ( `  )_  .__) \n");
        printf("      ( (  (    )   `)  ) _) \n");
        printf("     (__ (_   (_ . _) _) ,__) \n");
        printf("           `~~`\\ ' /`~~` \n");
        printf("                |  | \n");
        printf("              __|_ |__ \n");
        printf("             / JUG. 1  \\ \n");
        printf("            |___VICTORIA_| \n");
        printf("\n   �EL ENEMIGO HA SIDO ELIMINADO! \n");

    }else{
        printf("\n\n");
        printf("          _ ._  _ , _ ._ \n");
        printf("        (_ ' ( `  )_  .__) \n");
        printf("      ( (  (    )   `)  ) _) \n");
        printf("     (__ (_   (_ . _) _) ,__) \n");
        printf("           `~~`\\ ' /`~~` \n");
        printf("                |  | \n");
        printf("              __|_ |__ \n");
        printf("             / JUG. 2  \\ \n");
        printf("            |___VICTORIA_| \n");
        printf("\n   �EL ENEMIGO HA SIDO ELIMINADO! \n");

    }

    printf("\n\nPresione ENTER para salir del programa...");
    getchar();
    return 0;
}