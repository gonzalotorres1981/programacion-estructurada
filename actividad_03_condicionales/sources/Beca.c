#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Prom;
    int Reprobadas;
    printf("Por favor ingrese su promedio respecto a 100: ");
    scanf("%f",&Prom);
    printf("\nPor favor ingrese la cantidad de materias reprobadas:");
    scanf("%d",&Reprobadas);
    if(Prom>=85&&Reprobadas==0)
    {
        printf("Usted obtuvo la beca");
    }
    else
    {
        printf("Usted no obtuvo la beca");

    }

return 0;
}



