#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp1, temp2;
    float temp [24];
    int dummy;
    printf("La direccion de memoria de dos flotantes es: %d , %d\n",&temp1,&temp2);
    printf("La direccion de memoria de el arreglo temp es %d\n",&temp);
    printf("La direccion de memoria de el arreglo temp es %d\n",temp);
    printf("La direccion de memoria de el arreglo temp es %d\n",&temp[24]);
    printf("La direccion de memoria de dummy es %d\n",&dummy);
    return 0;
}

