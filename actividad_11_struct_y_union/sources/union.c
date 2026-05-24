#include <stdio.h>
#include <stdlib.h>

union Valor
{
    int Entero;
    float Decimal;
};

int main()
{
    union Valor v;

    v.Entero = 42;
    printf("Entero: %d\n", v.Entero);

    v.Decimal = 3.14;
    printf("Decimal: %.2f", v.Decimal);

    return 0;
}