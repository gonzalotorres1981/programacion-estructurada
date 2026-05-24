# Actividad: Funciones y Modularidad

## Descripción
Esta actividad tuvo como objetivo comprender y aplicar el paradigma de la programación modular en C mediante el uso de **funciones**. A través de estos ejercicios se exploró cómo dividir un bloque de código monolítico en subrutinas más pequeñas, específicas y reutilizables. Además, se analizó cómo el lenguaje C maneja el paso de argumentos, diferenciando entre el paso por valor (variables primitivas) y el paso por referencia implícito (cuando se envían arreglos).

**Descripción detallada de los programas:**

1. **Conceptos Básicos de Funciones (`funciones1.c`):**
   Este programa introductorio sirve como un catálogo de las diferentes formas de estructurar funciones. 
   - Demuestra el uso de funciones con valor de retorno (`int cambiar`) y funciones que no retornan valores (`void mostrar`).
   - Muestra cómo pasar variables simples por valor (donde la función trabaja con una copia del dato) y cómo modificar el valor original reasignando el retorno.
   - Ilustra la sintaxis para pasar arreglos unidimensionales (`int v[]`) y bidimensionales (`int m[2][3]`) como parámetros, demostrando que los arreglos se pasan por referencia (la función accede directamente a la memoria original del arreglo).

2. **Flujo de Datos Modular (`funciones2.c`):**
   Este ejercicio representa una aplicación práctica y estructurada de la modularidad. Todo el ciclo de vida de los datos se dividió en funciones especializadas, simulando un flujo de trabajo real:
   - **`capturar`**: Se encarga exclusivamente de la entrada de datos (leer desde teclado y llenar un arreglo).
   - **`filtrar`**: Realiza el procesamiento lógico. Toma un arreglo de origen, extrae únicamente los números impares utilizando el operador módulo (`%`), los deposita en un arreglo de destino, y retorna la cantidad de elementos filtrados.
   - **`mostrar`**: Es una función utilitaria reutilizable que imprime en consola cualquier arreglo unidimensional que reciba.
   - **`guardar`**: Maneja la persistencia de datos escribiendo el resultado final en un archivo de texto (`resultados.txt`).

## Temas aplicados
- Declaración y definición de funciones (tipos de retorno y parámetros).
- Uso de funciones `void` (procedimientos sin valor de retorno).
- Paso de parámetros por valor (variables primitivas).
- Paso de arreglos unidimensionales y bidimensionales a funciones.
- Diseño modular: separación de responsabilidades (entrada, proceso, salida y almacenamiento).
- Retorno de variables de estado (ej. retornar el contador de elementos filtrados).

## Compilación
Para compilar cada archivo de forma individual, ejecuta el comando correspondiente en la terminal:

```bash
gcc funciones1.c -o funciones1
gcc funciones2.c -o funciones2
```

## Ejecución
Una vez compilados, puedes ejecutar los programas con los siguientes comandos:
```
./funciones1
./funciones2
```