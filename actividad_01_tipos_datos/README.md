# Actividad: Tipos de datos

## Descripción
Esta actividad tuvo como objetivo comprender la gestión básica de memoria en C. En particular, que cada tipo de dato primitivo tiene un tamaño asignado por el sistema, y cómo el uso de modificadores (como `signed`, `unsigned`, `short` y `long`) altera esta capacidad de almacenamiento. Asimismo, la práctica demuestra que al momento de declarar e inicializar una variable, el sistema operativo le asigna automáticamente una dirección de memoria física.

**Descripción del código:**
1. **Inicialización:** El programa comienza declarando e inicializando una batería de variables de distintos tipos primitivos (`char`, `int`, `float`, `double`) combinados con sus respectivos modificadores de signo y longitud. 
2. **Uso de operadores:** Para acceder a la ubicación exacta de estas variables en la memoria RAM, el código hace uso del operador de dirección (`&`) anteponiéndolo al nombre de cada variable.
3. **Salida en consola:** Finalmente, mediante una serie de funciones `printf`, el programa imprime secuencialmente el valor almacenado en cada variable y su respectiva dirección de memoria. Para lograr esto correctamente, se utilizan los especificadores de formato correspondientes a la naturaleza de cada dato (por ejemplo, `%c` para caracteres, `%d` o `%hd` para enteros, y `%f` para flotantes).

## Temas aplicados
- Tipos de datos primitivos (`char`, `int`, `float`, `double`).
- Modificadores de tipo (`signed`, `unsigned`, `short`, `long`).
- Operador de dirección de memoria (`&`).
- Especificadores de formato para entrada/salida.

## Compilación
```
gcc main.c -o programa
```
## Ejecución
```
./programa
```