#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    char alumno1[16]="Antonio";
    char alumno2[16];
    char alumno3[16];
    char lista [4][16];
    int i;
    int j;
    int longitud;

    printf("Por favor ingrese el nombre el alumno 2:");
    scanf("%s",&alumno2);
    printf("El nombre el alumno 2 es %s",alumno2);
    getchar();

    printf("\nPor favor ingrese el nombre completo de el alumno 3:");
    fgets(alumno3,sizeof(alumno3),stdin);
    printf("El nombre completo del alumno 3 es %s", alumno3);

    for(i=0;i<4;i++){
            printf("Por favor ingrese el nombre %d: ",i+1);
            fgets(lista[i],sizeof(lista),stdin);
    }
    for(i=0;i<4;i++){
        printf("El nombre %d es %s",i+1,lista[i]);
    }
    for(i=0;i<4;i++){
    longitud=strlen(lista[i]);
    lista[i][strcspn(lista[i], "\n")] = 0;
    printf("La longitud de %s , es %d\n",lista[i],longitud);
    }
    */
    char lista[3][50];
    char temp[50];
    char titulo[] = " [VIP]";

    for (int i = 0; i < 3; i++) {
        printf("Ingrese el nombre del invitado %d: ", i + 1);

        fgets(temp, 50, stdin);

        temp[strcspn(temp, "\n")] = 0;

        if (strlen(temp) < 2) {
            printf("Nombre muy corto. Intenta de nuevo.\n");
            i--; continue;
        }

        if (strcmp(temp, "Admin") == 0) {
            printf("�Acceso total concedido!\n");
        }

        strcpy(lista[i], temp);

        strcat(lista[i], titulo);
    }

    printf("\n--- Lista de Invitados Final ---\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, lista[i]);
    }

    return 0;
}
