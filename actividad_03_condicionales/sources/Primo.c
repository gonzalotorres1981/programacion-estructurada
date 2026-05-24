#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int Primo = 1;
    printf("Introduce un numero entero positivo: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        Primo = 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                Primo = 0;
                break;
            }
        }
    }
    if (Primo == 1)
    {
        printf("%d es un numero primo.\n", n);
    }
    else
    {
        printf("%d NO es un numero primo.\n", n);
    }

    return 0;
}
*/

