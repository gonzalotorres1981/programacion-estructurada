# Arreglos
1. [Introduccion](##Introduccion)
2. [Unidimensionales](##Unidimensionales)
3. [Sintaxis](###Sintaxis)
4. [Bidimensionales](##Bidimensionales)
5. [Sintaxis](###Sintaxis)

## Introduccion 

En la clase de hoy revisamos el tema de arreglos durante la primera hora enfocandonos en los arreglos unidimensionales y durante la segunda parte de la clase nos enfocamos en los arreglos bidimensionales

**Arreglo:** Conjunto de datos del mismo tipo 

Los arreglos por si solos se pueden considerar como una orden para el sistema de guardar una cierta cantidad de espacios de cierto tamaño y todos de un mismo tipo de dato 

## Unidimensionales
Son arreglos que se almacenan en una sola coordenada siendo mas especcificos una sola fila 

### **Sintaxis**
La sintaxis de los arreglos unidimensionales cuenta con tres elementos, el tipo de dato, el nombre o etiqueta del arreglo, y el tamaño del arreglo en el orden mencionado, cada uno con una utilidad, el tipo de dato nos indica cada cuantos bits guardara un espacio nuevo, la etiqueta nos ayudara a identificar y usar nuestro arreglo mas adelante y el tamaño ddel arreglo indica cuantos espacios guardara en total esta cuenta comienza desde el numero 0 por lo que si pedimos 24 espacios la cuenta iniciara en 0 y terminara en 23

```c
//tipo_de_dato etiqueta [tamaño]
int tablero1 [24];
```
## Bidimensionales 
A diferencia de los arreglos unidimensionales estos arreglos se en encuentran en filas y columnas es decir en dos dimensiones por lo que ahora estos cuenta con un par ordenado de coordenadas y no solo una 

### **Sintaxis**
La sintaxis es muy parecida a la de los unidimensionales solo cambiando de un solo tamaño a dos tamaños uno para las filas y otro para las columnas pero para descubrir el orden llevamos a cabo el siguiente ejercicio para descubrir en que orden se coloca la sintaxis si primero las columnas o las filas 

```c
//Comprabacion filas y columnas
int N=3;
int M=3;
int tablero[N][M];

tablero[0][0]=100;
tablero[0][1]=101;
tablero[0][2]=102;
tablero[1][0]=110;
tablero[1][1]=111;
tablero[1][2]=112;
tablero[2][0]=120;
tablero[2][1]=121;
tablero[2][2]=122;
printf("Dato 112 esta en tablero[1][2]\n",tablero[1][2]);
printf("Dato 121 esta en tablero[2][1]",tablero[1][2]);
```

Ahora conociendo que primero se introducen las filas y despues las columnas podemos revisar la sintaxis

```c
//tipo_de_dato etiqueta [tam_filas][tam_columnas]
int arreglo02 [5][4];
```
