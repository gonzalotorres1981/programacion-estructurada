#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 7, b = 8, c = 18, d = 7;

    printf("--- Test de Operadores Aritmeticos ---\n");
    printf("Valores actuales: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
    printf("Calculo de a + b %% d: %d\n\n", a + b % d);

    printf("--- Test de Operadores Relacionales ---\n");
    printf("Usando: >=, <=, ==, !=, >, <\n");
    printf("a es igual a b?: %d\n", a == b);
    printf("a es menor o igual a b?: %d\n", a <= b);
    printf("Multiplicacion de c * d: %d\n\n", c * d);

    printf("--- Test de Operadores Logicos ---\n");
    printf("Resultado con OR (||): %d\n", b == 7 || c == b);
    printf("Resultado con AND (&&): %d\n\n", b == 7 && c == b);

    printf("--- Operacion Ternaria ---\n");
    int mayor = (a > b) ? a : b;
    printf("El numero mas grande entre a y b es: %d\n\n", mayor);

    printf("--- Incrementos y Bits ---\n");
    printf("Valor de a con post-incremento: %d\n", a++);
    printf("Resultado de a & d %% b: %d\n\n", a & d % b);

    a = 2; b = 5; c = 21;
    int e, f;

    d = 30 < (c | (a += b)) ? 1 : 0;
    e = c | (a += b);
    f = (e || d);

    printf("Valor final de f: %d\n", f);
    printf("Valor final de e: %d\n", e);
    printf("e tras un incremento previo: %d\n", ++e);
    printf("e tras un decremento previo: %d\n", --e);
    printf("Valor de d en este punto: %d", d++);
    printf("\nIncrementando d para evitar el cero...\nNuevo valor de d: %d\n", d);

    return 0;
}
