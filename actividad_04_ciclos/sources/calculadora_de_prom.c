#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    int materias;
    float Calificaciones;
    do
    {
        printf("\n ----- CALCULADORA DE PROMEDIO ----- \n");
        printf("\n1.-Ingresar calificaciones\n");
        printf("\n2.-Salir\n");
        printf("\nPor favor escoja una opcion: ");
        scanf("%d",&opcion);
        if(opcion==1)
        {
            float Prom=0;
            int i=1;
            int a=1;
            int apro=0;
            int repro=0;
            printf("Por favor ingrese el numero de materias:");
            scanf("%d",&materias);

            if(materias!=0)
            {
                for (i; i<=materias; i++)
                {
                    printf("\nPor favor ingrese su calificacion %d:",i);
                    scanf("%f",&Calificaciones);

                    if(Calificaciones>=0 && Calificaciones<=100)
                    {
                        if(Calificaciones>=60)
                        {
                            apro++;
                        }
                        else
                        {
                            repro++;
                        }
                        Prom+=Calificaciones;
                    }
                    else
                    {
                        printf("Por favor ingrese una calificacion valida entre 0-100");
                        --i;
                    }

                }

                Prom=(float)Prom/materias;
                printf("Tu promedio es %f",Prom);
                printf("\nTienes %d materias aprobadas y %d materias reprobadas",apro,repro);
                float por_apro=(float)apro*100/materias;
                float por_repro=(float)repro*100/materias;
                printf("\nEl porcentaje de aprobadas es %.2f%% y reprobadas %.2f%%\n",por_apro,por_repro);
            }
            else
            {
                printf("Nos vemos pronto");
                printf("\nPresione Enter para volver al inicio");
                getchar();
                system("cls");
            }
        }
        else if (opcion !=2)
        {
            printf("Nos vemos pronto");
            printf("\nPresione Enter para volver al inicio");
            getchar();
            system("cls");
        }

    }
    while(opcion!=2);
    printf("Vuelva pronto");

    return 0;
}

