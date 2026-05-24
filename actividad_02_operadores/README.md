# Actividad: Operadores y Corrección de Código

## Descripción
Esta actividad tuvo como objetivo principal aprender a utilizar y clasificar los diferentes tipos de operadores disponibles en el lenguaje C. Además, la práctica se complementó resolviendo ejercicios analíticos para comparar cálculos manuales con las respuestas del compilador, y culminó con un ejercicio de depuración (debugging) para corregir errores de sintaxis en estructuras de control.

**Descripción de los códigos:**

1. **Exploración General de Operadores:** El primer bloque sirve como un campo de pruebas completo para entender la sintaxis y función de los diversos operadores del lenguaje:
   - **Aritméticos y Relacionales:** Evalúa operaciones matemáticas clásicas (suma, módulo, multiplicación) y realiza comparaciones booleanas (`==`, `<=`) para determinar la relación entre variables.
   - **Lógicos y Ternario:** Aplica compuertas lógicas (`&&` para AND, `||` para OR) en condiciones compuestas. También implementa el operador ternario (`? :`) como una alternativa compacta y eficiente a la estructura `if-else` (utilizado aquí para calcular el número mayor).
   - **Bits (Bitwise) e Incrementos:** Experimenta con operadores a nivel de bits (`&`, `|`) combinados con asignaciones compuestas (`+=`) y modificadores de pre/post incremento, demostrando cómo C puede manipular datos a un nivel muy bajo.

2. **Ejercicios Analíticos de Operadores:** El segundo bloque pone a prueba reglas matemáticas y de memoria específicas:
   - **Incrementos y decrementos:** Evalúa la diferencia crucial entre el post-incremento (`a++`) y el pre-incremento/decremento (`++i` / `--b`), demostrando en qué momento exacto se actualiza el valor de la variable.
   - **Precedencia de operadores:** Demuestra cómo C respeta la jerarquía matemática estándar (multiplicación antes que suma) y cómo el uso de paréntesis `()` altera este orden.
   - **División entera:** Comprueba el comportamiento del compilador al dividir dos números enteros y evidencia la necesidad de conversiones (casteo) para no perder decimales.

3. **Depuración y Estructuras de Control:** El tercer bloque muestra la refactorización de un código con sentencias condicionales `if-else`. Se corrigieron múltiples problemas del código original:
   - Se agregaron las llaves `{}` correspondientes a los bloques `if` y `else` para delimitar correctamente el alcance de las instrucciones.
   - Se corrigieron errores de sintaxis, como la ausencia de punto y coma (`;`).
   - Se reubicó una impresión fuera de la estructura condicional y se le agregó un salto de línea (`\n`) para limpiar la consola.
   - Se aplicó una indentación correcta a todo el bloque para garantizar la legibilidad.

## Temas aplicados
- Operadores aritméticos y de asignación compuesta.
- Operadores relacionales (`<`, `>`, `==`, etc.) y lógicos (`&&`, `||`).
- Operador condicional ternario (`? :`).
- Operadores a nivel de bits (Bitwise `&`, `|`).
- Operadores de incremento y decremento (pre y post).
- Precedencia matemática.
- Estructuras de control de flujo (`if` / `else`).
- Depuración de código (Debugging) y buenas prácticas de formato.

## Compilación

```bash
gcc main.c -o programa
gcc ejercicios.c -o programa2
```
## Ejecución
```
./programa
./programa2
```