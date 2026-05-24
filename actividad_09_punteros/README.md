# Actividad: Punteros y Gestión de Memoria

## Descripción
Esta actividad tuvo como objetivo comprender uno de los conceptos más poderosos y fundamentales del lenguaje C: los **punteros**. Un puntero es una variable que, en lugar de guardar un dato común (como un número o una letra), almacena la dirección de memoria física de otra variable. A través de estos ejercicios se exploró la declaración de punteros, la relación intrínseca que tienen con los arreglos (aritmética de punteros) y cómo permiten superar las limitaciones de las funciones mediante el **paso por referencia**.

**Descripción detallada de los programas:**

1. **Aritmética de Punteros y Arreglos (`punteros1.c`):**
   Este programa demuestra que, internamente en C, el nombre de un arreglo actúa como un puntero a su primera posición. El código comprueba que acceder a un elemento mediante un índice tradicional (ej. `v[1]`) es exactamente lo mismo que utilizar aritmética de punteros sumando desplazamientos a la dirección base y desreferenciando el resultado (ej. `*(v+1)`).

2. **Funciones y Paso por Referencia (`punteros2.c`):**
   Este ejercicio es crucial para entender cómo modificar variables fuera del alcance local de una función. Normalmente, C pasa los argumentos "por valor" (hace una copia). Sin embargo, este código demuestra el **paso por referencia simulado mediante punteros**: al enviarle a la función la dirección de memoria de la variable (`&a`) y recibirla en un puntero (`int *x`), la función puede viajar a esa dirección y alterar el valor de la variable original directamente (`*x = 100`).

3. **Fundamentos y Operadores de Punteros (`punteros3.c`):**
   Un programa analítico que desglosa la anatomía básica de los punteros. Muestra el uso de los dos operadores fundamentales:
   - El operador de dirección (`&`): Para obtener la ubicación de una variable en la memoria.
   - El operador de indirección o desreferencia (`*`): Para acceder o modificar el valor que está guardado en la dirección a la que apunta el puntero.
   Además, hace uso del especificador de formato correcto (`%p`) para imprimir direcciones de memoria en formato hexadecimal.

## Temas aplicados
- Declaración e inicialización de variables tipo puntero (`int *p`).
- Operadores de dirección (`&`) e indirección (`*`).
- Aritmética de punteros aplicada a la navegación de arreglos.
- Diferencia entre paso por valor y paso por referencia en funciones.
- Modificación directa de memoria desde subrutinas.
- Imprimir direcciones de memoria físicas con el formato `%p`.

## Compilación
Para compilar cada archivo de forma individual, ejecuta el comando correspondiente en la terminal:

```bash
gcc punteros1.c -o punteros1
gcc punteros2.c -o punteros2
gcc punteros3.c -o punteros3
```

## Ejecución
Una vez compilados, puedes ejecutar los programas con los siguientes comandos:
```
./punteros1
./punteros2
./punteros3
```