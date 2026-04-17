# Computación — FIUNA 2023 (1er cuatrimestre)

> **In English:** Coursework from **Computación**, a semester-long introductory programming course in **C/C++** at FIUNA (Universidad Nacional de Asunción). Covers fundamentals of structured programming: control flow, functions, recursion, arrays, strings, structs, pointers, and sorting algorithms. Files organized by unit in order of increasing complexity. Code comments are in Spanish.

Archivo de ejercicios, prácticas y exámenes de la materia **Computación**, cursada en la Facultad de Ingeniería de la Universidad Nacional de Asunción (FIUNA) durante el primer cuatrimestre de 2023. El curso se dictó en **C/C++** y cubre los fundamentos de programación estructurada.

## Estructura

El código fuente está en `Codigos/`, organizado por unidades en orden de complejidad creciente:

| Unidad  | Tema              | Contenido                                                      |
| ------- | ----------------- | -------------------------------------------------------------- |
| 1       | Introducción      | E/S básica, variables, tipos, conversiones                     |
| 2       | Selección         | `if/else`, `switch/case`                                       |
| 3       | Repetición        | `for`, `while`, `do-while`                                     |
| 4       | Funciones         | Paso por valor y referencia, modularización                    |
| 5       | Recursividad      | Factorial, Fibonacci                                           |
| 6       | Arreglos          | Vectores unidimensionales                                      |
| 7       | Matrices          | Arreglos 2D                                                    |
| 8       | Cadenas           | `char[]`, `cstring`, validación, decodificación Morse          |
| 9       | Estructuras       | `struct`, arreglos de estructuras                              |
| 10      | Punteros          | Aritmética de punteros, paso a funciones                       |
| 11      | Ordenamiento      | Burbuja, Selección, Inserción, QuickSort, MergeSort            |

`Codigos/Exámenes/` contiene parciales, finales y talleres resueltos. En la raíz se incluye `codigo ascii.jpg`, tabla de referencia usada durante el curso.

## Convenciones

- Cada archivo comienza con un bloque `/* Enunciado: ... */` que describe el objetivo del ejercicio.
- Los ejercicios numerados siguen el formato `s<semana>e<ejercicio>-<slug>.cpp`; el resto usa slugs descriptivos en kebab-case.
- Variantes de un mismo ejercicio se identifican con sufijos `-v2`, `-v3`.
- El código mantiene el estilo de la cátedra: `using namespace std`, arreglos de tamaño variable (`int A[N]`), `cin.getline`, `strcmp`.