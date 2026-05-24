# Actividad: Cadenas de Texto (Strings) y Librería `<string.h>`

## Descripción
Esta actividad tuvo como objetivo comprender cómo el lenguaje C maneja las cadenas de texto. A diferencia de lenguajes de más alto nivel, C no tiene un tipo de dato `string` nativo, por lo que las palabras o frases se almacenan como arreglos de caracteres (`char`). A través de estos ejercicios se exploró cómo leer y almacenar múltiples textos utilizando matrices de caracteres, cómo se comportan en la memoria, y principalmente, cómo manipularlos de manera eficiente y segura utilizando las funciones integradas de la librería estándar `<string.h>`.

**Descripción detallada de los programas:**

1. **Lectura, Impresión y Memoria de Strings (`string1.c`):**
   Este programa introductorio demuestra cómo almacenar múltiples nombres y apellidos utilizando un arreglo bidimensional de caracteres (`char Nombre[N][M]`). Hace uso de la función `fgets`, la cual es una práctica mucho más segura que `scanf` para leer textos que contienen espacios. Además, el código finaliza con una comprobación de direcciones de memoria, demostrando que en C, el nombre de un arreglo de caracteres actúa internamente como un puntero hacia la primera posición de memoria donde inicia la cadena.

2. **Manipulación de Strings y Listas VIP (`string2.c`):**
   Este ejercicio es una aplicación práctica diseñada específicamente para poner a prueba las funcionalidades de la librería `<string.h>`. Simula un sistema de registro para una lista de invitados, aplicando varias funciones clave para el manejo de texto:
   - **`strcspn`**: Utilizada de forma ingeniosa para buscar y eliminar el salto de línea (`\n`) que la función `fgets` guarda por defecto al presionar Enter.
   - **`strlen`**: Evalúa la longitud de la cadena ingresada para validar que el nombre no sea demasiado corto.
   - **`strcmp`**: Compara cadenas de texto de forma exacta para verificar si el usuario ingresó la palabra "Admin", otorgando acceso total.
   - **`strcpy`**: Copia de manera segura el contenido de una variable temporal hacia el arreglo principal de la lista de invitados.
   - **`strcat`**: Concatena (une) cadenas de texto, añadiendo automáticamente la etiqueta " [VIP]" al final de cada nombre registrado.

## Temas aplicados
- Arreglos bidimensionales de caracteres (matrices para guardar múltiples strings).
- Entrada segura de texto desde teclado utilizando `fgets`.
- Relación entre arreglos y direcciones de memoria (punteros).
- Limpieza de buffers y saltos de línea en cadenas.
- Funciones de la librería estándar `<string.h>` (`strlen`, `strcspn`, `strcmp`, `strcpy`, `strcat`).

## Compilación
Para compilar cada archivo de forma individual, ejecuta el comando correspondiente en la terminal:

```bash
gcc string1.c -o string1
gcc string2.c -o string2
```

## Ejecución
Una vez compilados, puedes ejecutar los programas con los siguientes comandos:
```
./string1
./string2
```