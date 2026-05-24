# Actividad: Asignación de Memoria Dinámica

## Descripción
Esta actividad tuvo como objetivo explorar la gestión avanzada de memoria en C mediante la asignación dinámica. A diferencia de los arreglos estáticos (cuyo tamaño debe conocerse en tiempo de compilación), la memoria dinámica permite solicitar bloques de memoria a la computadora durante la ejecución del programa, utilizando el "Heap" (montículo). A través de estos ejercicios se pusieron en práctica las funciones de la librería `<stdlib.h>` para reservar, redimensionar y liberar memoria correctamente, evitando fugas de memoria (memory leaks).

**Descripción detallada de los programas:**

1. **Asignación Básica con `malloc` (`malloc.c`):**
   Este programa demuestra el uso de `malloc` (Memory Allocation). Solicita un bloque de memoria continuo del tamaño exacto para almacenar 5 enteros. Dado que `malloc` no limpia la memoria, el código se encarga de inicializarla manualmente utilizando un ciclo `for` para asignarle valores pares y luego imprimirlos. Al finalizar, utiliza `free()` para devolver la memoria al sistema.

2. **Asignación e Inicialización con `calloc` (`calloc.c`):**
   Este ejercicio contrasta con el anterior al utilizar `calloc` (Contiguous Allocation). A diferencia de `malloc`, `calloc` no solo reserva la memoria para los 5 enteros, sino que la inicializa automáticamente con ceros (`0`). El programa imprime las primeras posiciones para comprobar que, en efecto, la memoria está "limpia" por defecto. Culmina liberando la memoria con `free()`.

3. **Redimensionamiento de Memoria con `realloc` (`realloc.c`):**
   Este código ilustra la flexibilidad de la memoria dinámica. Primero reserva espacio para 5 enteros usando `malloc`. Posteriormente, hace uso de `realloc` (Re-allocation) para expandir ese mismo bloque de memoria a una capacidad de 10 enteros, conservando los datos anteriores (si los hubiera) e incrementando el tamaño del arreglo en pleno tiempo de ejecución, para finalmente liberarlo con `free()`.

## Temas aplicados
- Concepto de memoria dinámica y el segmento "Heap".
- Uso de la función `malloc` para reservar bloques de memoria.
- Uso de la función `calloc` para reservar e inicializar memoria en ceros.
- Uso de la función `realloc` para expandir o reducir bloques previamente asignados.
- Prevención de fugas de memoria (Memory Leaks) mediante el uso obligatorio de `free()`.
- Uso del operador `sizeof` para calcular bytes precisos según el tipo de dato.
- Relación entre punteros y arreglos dinámicos.

## Compilación
Para compilar cada archivo de forma individual, ejecuta el comando correspondiente en la terminal:

```bash
gcc malloc.c -o malloc
gcc calloc.c -o calloc
gcc realloc.c -o realloc
```

## Ejecución
Una vez compilados, puedes ejecutar los programas con los siguientes comandos:
```
./malloc
./calloc
./realloc
```