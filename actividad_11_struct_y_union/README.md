# Actividad: Estructuras (`struct`) y Uniones (`union`)

## Descripción
Esta actividad tuvo como objetivo explorar la creación de tipos de datos personalizados en C. A través de las estructuras (`struct`) y las uniones (`union`), es posible agrupar múltiples variables de diferentes tipos de datos bajo un solo nombre. Esto es fundamental para modelar objetos del mundo real de una manera mucho más limpia y organizada. Además, se analizó cómo estas estructuras pueden interactuar con punteros y funciones, y la diferencia crítica en cómo `structs` y `uniones` gestionan la memoria de la computadora.

**Descripción detallada de los programas:**

1. **Conceptos Básicos de Estructuras (`struct1.c`):**
   Este programa introduce la sintaxis fundamental de un `struct`. Define un tipo de dato llamado `Producto` que encapsula el nombre, precio, cantidad y disponibilidad de un artículo. Muestra cómo instanciar una sola variable de este nuevo tipo (`p1`) y cómo acceder a cada uno de sus miembros individuales utilizando el "operador punto" (`.`) para leer e imprimir datos.

2. **Arreglos de Estructuras (`struct2.c`):**
   Este código eleva el concepto del programa anterior al combinar `structs` con arreglos. Al declarar `struct Producto Tienda[3]`, el programa crea una colección o inventario capaz de almacenar múltiples registros simultáneamente. Hace uso de ciclos `for` para iterar a través del arreglo de estructuras, y demuestra la importancia de usar `getchar()` para limpiar el buffer del teclado al mezclar la lectura de números (`scanf`) con la lectura de cadenas de texto (`fgets`).

3. **Punteros a Estructuras y Recursividad (`struct3.c`):**
   Este ejercicio es clave para entender el paso por referencia aplicado a estructuras. En lugar de pasar una copia pesada de la estructura a la función, se envía su dirección de memoria (`&totopo`). La función `f_bajan` recibe un puntero a la estructura (`struct barco *p`) y demuestra el uso del **operador flecha (`->`)** para acceder y modificar sus miembros directamente. Además, implementa la **recursividad**, llamándose a sí misma para restar iterativamente la tripulación hasta que la condición base se cumple.

4. **Memoria Compartida con Uniones (`union.c`):**
   Este programa contrasta directamente con las estructuras. Mientras que un `struct` reserva memoria para *todos* sus miembros simultáneamente, un `union` reserva solo la cantidad de memoria necesaria para su miembro más grande, y *todos sus miembros comparten esa misma dirección de memoria*. El código demuestra cómo declarar un `union Valor` y asignarle un valor entero para luego sobrescribir esa misma ubicación de memoria con un valor decimal (`float`).

## Temas aplicados
- Definición de tipos de datos personalizados compuestos (`struct`).
- Definición de tipos de datos de memoria compartida (`union`).
- Instanciación de registros y acceso a sus campos mediante el operador punto (`.`).
- Creación y manipulación de arreglos de estructuras (bases de datos simples).
- Paso de estructuras a funciones por referencia utilizando punteros.
- Uso del operador flecha (`->`) para desreferenciar y acceder a miembros de un puntero a estructura.
- Implementación de funciones recursivas para modificar el estado de una estructura.
- Diferenciación conceptual y práctica entre la asignación de memoria de un `struct` vs un `union`.

## Compilación
Para compilar cada archivo de forma individual, ejecuta el comando correspondiente en la terminal:

```bash
gcc struct1.c -o struct1
gcc struct2.c -o struct2
gcc struct3.c -o struct3
gcc union.c -o union
```

## Ejecución
Una vez compilados, puedes ejecutar los programas con los siguientes comandos:
```
./struct1
./struct2
./struct3
./union
```