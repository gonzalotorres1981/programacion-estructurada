#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Por favor ingrese un numero entero:");
    scanf("%d",&num);
    if(num%2==0){
        printf("Su numero es par");
    }
    else
    {
        printf("Su numero es impar");
    }
    return 0;
}


