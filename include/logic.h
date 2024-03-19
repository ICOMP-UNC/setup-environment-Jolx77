#pragma once

/**
 * @brief Suma dos números enteros.
 * 
 * @param fn Primer número entero.
 * @param sn Segundo número entero.
 * @return Suma de los dos números enteros.
 */
int add(int fn, int sn);

/**
 * @brief Multiplica dos números enteros.
 * 
 * @param fn Primer número entero.
 * @param sn Segundo número entero.
 * @return Producto de los dos números enteros.
 */
int multiply(int fn, int sn);

/**
 * @brief Resta dos números enteros.
 * 
 * @param fn Primer número entero.
 * @param sn Segundo número entero.
 * @return Resta de los dos números enteros.
 */
int substract(int fn, int sn);

/**
 * @brief Divide dos números enteros.
 * 
 * @param fn Dividendo.
 * @param sn Divisor.
 * @return Cociente de la división como un número de punto flotante (double).
 *         Si el divisor es 0, devuelve -1.0 para indicar un error.
 */
double divide(int fn, int sn);

