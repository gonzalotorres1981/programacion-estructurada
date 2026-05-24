#include <stdio.h>
#include <stdlib.h>

int main()
{
//EJERCICIO 1
int a = 3;
int b = 4;
int c = a++ + --b;
printf ("%d %d %d\n",a ,b ,c);

//EJERCICIO 2
int x = 10;
int y = 3;
printf("%d\n", x+y*2);
printf("%d\n", (x+y)*2);

//EJERCICIO 3
int i=5;
printf("%d\n", i++);
printf("%d\n", ++i);

//EJERCICIO 4
int A= 5, B= 2;
float r= A/B;
printf ("%.2f\n",r);



    return 0;
}




#include <stdio.h>
#include <stdlib.h>

/*
CODIGO ORIGINAL
int main(){
int x=5, y=3;
if(x>y)
printf("x es mayor");
else
printf("y es mayor");
printf("fin")
return 0;
}
*/

/*int main()
{
    int x=5, y=3;
    if(x>y)
    {

        printf("x es mayor");

    }
    else
    {
        printf("y es mayor");
    }
    printf("\nfin");
    return 0;
}
*/
/*Hay varios errores el primero las llaves de if y segundo la llave de else, terceo sacar el printf de la estructura y cuarto darle una vuelta de carro al fin y por ultimo indentar todo el codigo*/
