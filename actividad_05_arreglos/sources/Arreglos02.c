#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=4;
    float temp [N];
    temp[0]= 20.5;
    temp[1]= 19.4;
    temp[2]= 9.5;
    temp[3]= 10.7;
    int i;
    printf("El valor de temp[0] es %f\n",temp[0]);
    printf("El valor de temp[1] es %f\n",temp[1]);

    for(i=0; i<N; i++)
    {
        printf("Por favor ingrese la temp %i:",i+1);
        scanf("%f",&temp[i]);
    }

    for(i=0; i<N; i++)
    {
        printf("\n%f",temp[i]);
    }
    return 0;
}

