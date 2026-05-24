#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Por favor ingrese un numero entero:");
    scanf("%d",&num);
    if(num%2==1)
    {
        printf("Su numero es impar");
    }
    else
    {
        printf("Su numero es par");
    }
    return 0;
}

