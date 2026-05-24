#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    float prom;
    int reprobadas;

    printf("Por favor ingrese se edad:");
    scanf("%d",&edad);
    printf("Por favor ingrese se Promedio:");
    scanf("%f",&prom);
    printf("Por favor ingrese su cantidad de materias reprobadas:");
    scanf("%d",&reprobadas);

    if(prom>=90.0&&reprobadas==0)
    {
        printf("Usted obtuvo la beca");
    }
    else if(reprobadas<=2)
    {
        printf("Usted no obtuvo la beca");
        printf("\nPero usted puede reinscribirse");
    }
    else
    {
        printf("Usted no obtuvo la beca");
        printf("\nUsted esta en situacion critica ponte pilas");
    }
    return 0;
}



