#include <stdio.h>
#include <stdlib.h>

struct Producto
{
    char Nombre[20];
    float Precio;
    int Cantidad;
    int Disponible;
};

int main()
{
    struct Producto p1;

    printf("Nombre: ");
    fgets(p1.Nombre, 20, stdin);

    printf("Precio: ");
    scanf("%f", &p1.Precio);

    printf("Cantidad: ");
    scanf("%d", &p1.Cantidad);

    printf("Disponible: ");
    scanf("%d", &p1.Disponible);

    printf("\nDatos capturados:");
    printf("\nNombre: %s", p1.Nombre);
    printf("Precio: %.2f\n", p1.Precio);
    printf("Cantidad: %d\n", p1.Cantidad);
    printf("Disponible: %d\n", p1.Disponible);

    return 0;
}