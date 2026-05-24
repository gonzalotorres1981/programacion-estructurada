# Actividad: Ciclos y Estructuras Iterativas

## Descripción
Esta actividad tuvo como objetivo dominar las estructuras repetitivas o ciclos en el lenguaje C, específicamente `for`, `while` y `do-while`. A través de estos ejercicios se exploró cómo ejecutar bloques de código de forma repetitiva, ya sea por una cantidad definida de veces, hasta que se cumpla una condición específica, o mediante la implementación de menús interactivos que mantienen el programa en ejecución hasta que el usuario decide salir.

**Descripción detallada de los programas:**

1. **Sumatoria con límite definido (`ejemplo_while.c`):**
   Este programa solicita al usuario la cantidad exacta de números que desea sumar. Utiliza un ciclo `for` para iterar exactamente esa cantidad de veces (`N`), pidiendo un valor en cada iteración y acumulándolo en una variable de suma. Es un ejemplo clásico de un ciclo definido.

2. **Menú interactivo básico (`ejemplo_do_while.c`):**
   Un ejercicio fundamental para entender el ciclo `do-while`. Garantiza que el menú de opciones se muestre al menos una vez antes de evaluar la condición de salida. El programa se mantendrá "atrapado" en el ciclo repitiendo el menú hasta que el usuario ingrese la opción de salida (2).

3. **Sumatoria con valor centinela (`ejemplo_for.c`):**
   A diferencia del primer ejercicio, este programa no sabe cuántos números va a sumar. Utiliza un ciclo `while` que se ejecuta continuamente pidiendo y sumando números hasta que el usuario ingresa un "valor centinela" (el número 0). Cuando detecta el 0, el ciclo se rompe y muestra el resultado final.

4. **Calculadora de Promedios Avanzada (`calculadora_de_prom.c`):**
   El programa más completo de la actividad. Integra todas las estructuras de control vistas hasta ahora. 
   - Utiliza un `do-while` para el menú principal.
   - Usa un `for` para pedir las calificaciones iterando sobre el número de materias.
   - Implementa **validación de datos**: si el usuario ingresa una calificación fuera del rango (0-100), el programa muestra un error y "retrocede" el contador del ciclo (`--i`) para obligarlo a ingresar una calificación válida sin perder el progreso.
   - Calcula métricas adicionales haciendo uso de contadores y acumuladores, mostrando promedios y porcentajes de aprobación/reprobación mediante "casteo" a flotantes (`float`).

## Temas aplicados
- Ciclos controlados por contador (`for`).
- Ciclos controlados por condición/centinela (`while`).
- Ciclos de ejecución garantizada al menos una vez (`do-while`).
- Variables acumuladoras (para sumatorias) y contadoras (para materias aprobadas/reprobadas).
- Validación de entrada de datos (Input validation).
- Conversión de tipos de datos explícita (Casting).

## Compilación
Para compilar cada archivo de forma individual, ejecuta el comando correspondiente en la terminal:

```bash
gcc ejemplo_while.c -o ejemplo_while
gcc ejemplo_do_while.c -o ejemplo_do_while
gcc ejemplo_for.c -o ejemplo_for
gcc calculadora_de_prom.c -o calculadora_de_prom
```
## Ejecución
Una vez compilados, puedes ejecutar los programas con los siguientes comandos

```
./ejemplo_while
./ejemplo_do_while
./ejemplo_for
./calculadora_de_prom
```