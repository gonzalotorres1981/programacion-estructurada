# Actividad: Arreglos

## Descripción
Esta actividad tuvo como objetivo comprender el funcionamiento de los arreglos (arrays) unidimensionales en el lenguaje C. A través de estos programas, se exploró cómo declarar colecciones de datos del mismo tipo, cómo el sistema operativo les asigna espacio contiguo en la memoria RAM, y cómo interactuar con cada uno de sus elementos mediante el uso de índices y estructuras iterativas.

**Descripción detallada de los programas:**

1. **Gestión de Memoria en Arreglos (`arreglos01.c`):**
   Este programa introductorio tiene un enfoque a nivel de memoria. Su objetivo es demostrar físicamente cómo se almacenan las variables. A través de la impresión de direcciones de memoria con el operador `&`, el código comprueba que el nombre de un arreglo (ej. `temp`) actúa internamente como una referencia o puntero a su primera posición, y muestra cómo los espacios reservados para el arreglo se alojan de manera adyacente a diferencia de las variables aisladas.

2. **Manipulación e Iteración de Arreglos (`arreglos02.c`):**
   Este ejercicio se enfoca en el uso práctico de los arreglos. Primero, muestra cómo inicializar y acceder manualmente a posiciones específicas del arreglo utilizando índices (ej. `temp[0] = 20.5`). Posteriormente, introduce la mejor práctica para manejar arreglos: combinarlos con un ciclo `for`. Utiliza un ciclo para pedirle al usuario que llene las posiciones del arreglo dinámicamente y otro ciclo `for` para recorrer e imprimir todos los valores almacenados secuencialmente.

## Temas aplicados
- Declaración y dimensionamiento de arreglos unidimensionales.
- Acceso y modificación de datos mediante índices (empezando desde 0).
- Comportamiento de los arreglos en la memoria física y uso del operador de dirección (`&`).
- Iteración sobre arreglos utilizando ciclos definidos (`for`).
- Lectura y escritura de colecciones de datos (`scanf` y `printf` en ciclos).

## Compilación
Para compilar cada archivo de forma individual, ejecuta el comando correspondiente en la terminal:

```bash
gcc arreglos01.c -o arreglos01
gcc arreglos02.c -o arreglos02
```

## Ejecución
Una vez compilados, puedes ejecutar los programas con los siguientes comandos:
```
./arreglos01
./arreglos02
```
