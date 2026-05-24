#include <stdio.h>
#include <stdlib.h>

struct barco
{
    char nombre[20];
    int peso;
    int tripulacion;
    int tam;
};

int f_bajan(struct barco *p)
{
    printf("Tripulacion actual: %d\n", p->tripulacion);

    p->tripulacion = p->tripulacion - 2;

    if (p->tripulacion <= 0)
    {
        return 0;
    }
    else
    {
        return f_bajan(p);
    }
}

int main()
{
    struct barco totopo;

    totopo.peso = 1000;
    totopo.tripulacion = 10;
    printf("Peso del barco: %d\n", totopo.peso);

    f_bajan(&totopo);

    printf("Tripulacion final: %d\n", totopo.tripulacion);

    return 0;
}