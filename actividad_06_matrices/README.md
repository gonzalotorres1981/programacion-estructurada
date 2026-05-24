# Actividad: Matrices (Arreglos Bidimensionales)

## Descripción
Esta actividad tuvo como objetivo comprender y manipular arreglos de múltiples dimensiones en el lenguaje C, específicamente las matrices (arreglos bidimensionales). A través de estos ejercicios se exploró cómo declarar estructuras de datos que requieren dos índices `[filas][columnas]`, cómo utilizar ciclos anidados para recorrerlas completamente, y cómo estas estructuras son la herramienta matemática y lógica perfecta para representar cuadrículas, tableros espaciales y mapas de coordenadas.

**Descripción detallada de los programas:**

1. **Simulador de Batalla Naval (`battleship.c`):**
   Este programa es una aplicación práctica extensa del uso de matrices. Utiliza arreglos bidimensionales de tipo entero (`Jugador1[N][M]` y `Jugador2[N][M]`) para representar las cuadrículas de juego. Demuestra cómo inicializar una matriz completa usando ciclos `for` anidados, y cómo acceder a posiciones específicas (coordenadas X, Y) para almacenar información de estado (por ejemplo, guardar un `1` donde hay un barco, un `2` para agua y un `3` para un impacto).

2. **Tablero de Caracteres (`tablero.c`):**
   A diferencia del código anterior, este ejercicio trabaja con una matriz de tipo caracter (`char Jugador1[N][M]`). Demuestra cómo se puede "dibujar" o mapear un espacio visual. Rellena toda la matriz bidimensional con un carácter por defecto (`~`) y luego accede de forma directa a índices específicos para sobrescribir caracteres individuales (ej. `Jugador1[1][2]='B'`), demostrando control absoluto sobre celdas individuales de la cuadrícula.

3. **Gestión de Memoria en Matrices (`matrices.c`):**
   Este programa tiene un enfoque analítico sobre cómo el compilador de C trata internamente a los arreglos multidimensionales. Al declarar un arreglo bidimensional `char Nombre[4][20]` e imprimir las direcciones de `Nombre[i]`, el código comprueba visualmente cómo las filas de una matriz se almacenan en bloques de memoria contiguos, ayudando a comprender la arquitectura física detrás de la cuadrícula lógica.

## Temas aplicados
- Declaración y dimensionamiento de matrices (arreglos bidimensionales).
- Sistemas de indexación por coordenadas `[fila][columna]`.
- Recorrido y llenado de matrices mediante el uso de ciclos anidados.
- Modificación directa y lectura de elementos específicos en una cuadrícula.
- Comportamiento de las matrices en la memoria física.

## Compilación
Para compilar cada archivo de forma individual, ejecuta el comando correspondiente en la terminal:

```bash
gcc battleship.c -o battleship
gcc tablero.c -o tablero
gcc matrices.c -o matrices
```
## Ejecución
Una vez compilados, puedes ejecutar los programas con los siguientes comandos:
```
./battleship
./tablero
./matrices
```