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
    struct Producto Tienda[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("--- Producto %d ---\n", i + 1);
        printf("Nombre: ");
        fgets(Tienda[i].Nombre, 20, stdin);

        printf("Precio: ");
        scanf("%f", &Tienda[i].Precio);

        printf("Cantidad: ");
        scanf("%d", &Tienda[i].Cantidad);

        printf("Disponible: ");
        scanf("%d", &Tienda[i].Disponible);

        getchar();
    }

    printf("=== Lista de Productos ===\n");
    for(i = 0; i < 3; i++)
    {
        printf("Producto %d:\n", i + 1);
        printf("Nombre: %s\n", Tienda[i].Nombre);
        printf("Precio: %.2f\n", Tienda[i].Precio);
        printf("Cantidad: %d\n", Tienda[i].Cantidad);
        printf("Disponible: %d\n", Tienda[i].Disponible);
    }

    return 0;
}