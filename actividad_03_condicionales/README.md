# Actividad: Condicionales y Lógica de Programación

## Descripción
Esta actividad tuvo como objetivo profundizar en el uso de las estructuras de control de flujo en el lenguaje C, centrándose en la toma de decisiones lógica. A través del desarrollo de múltiples programas, se exploró cómo el software puede evaluar condiciones del mundo real (como la elegibilidad académica o propiedades matemáticas) y reaccionar de manera distinta según los datos proporcionados por el usuario. La práctica permitió pasar de condicionales simples a estructuras anidadas y lógica algorítmica más compleja.

**Descripción detallada de los programas:**

1. **Evaluación de Mayoría de Edad (`mayoromenor.c`):**
   Este programa representa la base de la lógica condicional. Utiliza una sentencia `if-else` para comparar una variable de entrada contra un valor constante (18). Es un ejercicio fundamental para entender cómo el programa bifurca su ejecución dependiendo de si una expresión relacional resulta verdadera o falsa.

2. **Sistema de Becas - Filtro Estricto (`beca.c`):**
   A diferencia del anterior, este código implementa lógica compuesta. El objetivo fue aplicar el operador lógico `&&` (AND) para validar que se cumplan dos condiciones obligatorias de forma simultánea: excelencia académica (promedio >= 85) y regularidad (0 materias reprobadas). Esto simula un proceso de filtrado de datos del mundo real.

3. **Sistema de Validación Escolar Avanzado (`sistema_de_validacion.c`):**
   Este programa escala la complejidad mediante el uso de `else if`. No solo decide entre dos opciones, sino que categoriza al usuario en múltiples niveles según su desempeño académico. Permite gestionar escenarios donde existen rangos intermedios, como alumnos que no obtienen beca pero tienen permitido reinscribirse, diferenciándolos de aquellos en situación académica crítica.

4. **Número Par (`numero_par.c`):**
   Este ejercicio se enfoca en la aplicación del operador de módulo (`%`). El objetivo fue comprender que el residuo de una división es una herramienta poderosa para determinar propiedades numéricas. Se utiliza la lógica de verificar si el residuo de una división entre 2 es exactamente cero para confirmar que el número es par.

5. **Número Impar (`numero_impar.c`):**
   Similar al ejercicio anterior, este programa utiliza el operador de módulo para identificar números impares. En este caso, se valida si el residuo de la división entre 2 es igual a 1, demostrando cómo una pequeña variación en la condición lógica permite identificar la propiedad opuesta del número.

6. **Verificación de Números Primos (`primo.c`):**
   Es el programa más robusto de la actividad. Su objetivo fue combinar condicionales con estructuras iterativas (`for`). El programa analiza si un número es divisible por cualquier otro menor a él; utiliza una "variable bandera" para registrar el resultado y la instrucción `break` para optimizar el proceso, deteniendo el análisis en cuanto se confirma que el número no es primo.

## Temas aplicados
- Toma de decisiones con `if`, `else if` y `else`.
- Operadores relacionales (`>`, `<`, `==`, `>=`) y lógicos (`&&`).
- Aritmética de residuos con el operador módulo (`%`).
- Uso de variables de estado o banderas (flags).
- Optimización de procesos mediante interrupción de ciclos (`break`).
- Lectura de múltiples tipos de datos desde teclado (función `scanf`).

## Compilación
Para compilar cada archivo de forma individual, ejecuta el comando correspondiente en la terminal:

```bash
gcc mayoromenor.c -o mayoromenor
gcc beca.c -o beca
gcc sistema_de_validacion.c -o sistema_de_validacion
gcc numero_par.c -o numero_par
gcc numero_impar.c -o numero_impar
gcc primo.c -o primo
```

## Ejecución 

Una vez compilados, puedes ejecutar los programas con los siguientes comandos:

```
./mayoromenor
./beca
./sistema_de_validacion
./numero_par
./numero_impar
./primo
```