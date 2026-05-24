# Actividad: Manejo de Archivos en C

## Descripción
Esta actividad tuvo como objetivo explorar la lectura y escritura de archivos en el lenguaje C. Por defecto, todas las variables e información que maneja un programa se almacenan en la memoria RAM, lo que significa que son volátiles y se pierden en el momento en que la ejecución termina. A través de estos ejercicios, pusimos en práctica el uso de la librería `<stdio.h>` para interactuar con el disco duro, logrando la **persistencia de datos** mediante la creación, escritura y lectura de archivos de texto plano (`.txt`).

**Descripción detallada de los programas:**

1. **Escritura y Persistencia Básica (`archivos.c`):**
   Este programa modular demuestra el ciclo de vida de los datos desde su captura hasta su almacenamiento físico. Tras filtrar un arreglo de números enteros para extraer solo los impares, el código utiliza una función dedicada (`guardar`) para abrir un archivo llamado `resultados.txt` en modo de escritura (`"w"`). Utiliza un puntero de tipo `FILE *` y la función `fprintf` dentro de un ciclo para plasmar el arreglo procesado directamente en el documento antes de cerrarlo de forma segura con `fclose`.

2. **Lectura, Escritura y Recorrido de Archivos (`rellenar.c`):**
   Este ejercicio es una aplicación más avanzada de entrada y salida (I/O) de archivos. Realiza un proceso de dos fases con el archivo `tablero.txt`:
   - **Fase de Escritura:** Abre el archivo en modo `"w"`, solicita los nombres de dos jugadores y "dibuja" una matriz bidimensional (un tablero de juego) directamente en el archivo de texto utilizando `fprintf`.
   - **Fase de Lectura:** Cierra el archivo y lo vuelve a abrir, pero esta vez en modo de lectura (`"r"`). Demuestra el manejo de errores validando que el archivo exista (`if(archivo != NULL)`). Luego, utiliza la función `fgets` para leer la primera línea (el nombre del jugador 1) y emplea un ciclo `while` que lee hasta el final del archivo (`NULL`) para capturar la última línea escrita (el nombre del jugador 2).

## Temas aplicados
- Punteros de tipo `FILE *` para la manipulación de flujos de datos.
- Apertura de archivos con `fopen` y sus modos operativos (`"w"` para escritura, `"r"` para lectura).
- Escritura de texto formateado y variables en documentos físicos usando `fprintf`.
- Lectura segura de líneas desde un archivo utilizando `fgets`.
- Recorrido de archivos hasta llegar al final (EOF) evaluando el retorno `NULL`.
- Cierre seguro de flujos de datos mediante la función `fclose`.
- Validación básica para prevenir errores al intentar leer archivos inexistentes.

## Compilación
Para compilar cada archivo de forma individual, ejecuta el comando correspondiente en la terminal:

```bash
gcc archivos.c -o archivos
gcc rellenar.c -o rellenar
```

## Ejecución
Una vez compilados, puedes ejecutar los programas con los siguientes comandos:
```
./archivos
./rellenar
```
