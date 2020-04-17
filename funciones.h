#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "funciones.c"

/** \brief Muestra el menu de Seleccion.
 *
 * \return void
 *
 */
void menuSeleccion();

/** \brief Muestra los resultados de las operaciones.
 *
 * \param suma: Muestra el resultado de la suma.
 * \param resta: Muestra el resultado de la resta.
 * \param division: Muestra el resultado de la division.
 * \param multiplicacion: Muestra el resultado de la multiplicacion
 * \param resultadoFactorialA: Muestra el resultado de la factorialA.
 * \param resultadoFactorialB: Muestra el resultado de la factorialB.
 * \param banderaA: Si el primer numero ingresado es negativo muestra un mensaje de ERROR ya que un numero factorial no puede ser negativo y si el numero es posito muestra el resultado del primer numero ingresado.
 * \param banderaB: Si el segundo numero ingresado es negativo muestra un mensaje de ERROR ya que un numero factorial no puede ser negativo y si el numero es posito muestra el resultado del primer numero ingresado.
 *
 * \return void
 *
 */
void menuResultados (float suma, float resta, float division, float multiplicacion, float resultadoFactorialA, float resultadoFactorialB, int banderaA, int banderaB);

/** \brief Realiza la operacion de suma del (numeroUno + numeroDos).
 *
 * \param numeroUno: El primer numero ingresado.
 * \param numeroDos: El segundo numero ingresado.
 *
 * \return resultadoSuma
 *
 */
float suma (float numeroUno, float numeroDos);

/** \brief Realiza la operacion de resta del (numeroUno - numeroDos).
 *
 * \param numeroUno: El primer numero ingresado.
 * \param numeroDos: El segundo numero ingresado.
 *
 * \return resultadoResta
 *
 */
float resta (float numeroUno, float numeroDos);

/** \brief Realiza la operacion de division del (numeroUno / numeroDos).
 *
 * \param numeroUno: El primer numero ingresado.
 * \param numeroDos: El segundo numero ingresado.
 * \return resultadoDivision
 *
 */
float division (float numeroUno, float numeroDos);

/** \brief Realiza la operacion de multiplicacion del (numeroUno * numeroDos).
 *
 * \param numeroUno: El primer numero ingresado.
 * \param numeroDos: El segundo numero ingresado.
 *
 * \return resultadoMultiplicacion
 *
 */
float multiplicacion (float numeroUno, float numeroDos);

/** \brief La verificacion de los numeros para ver si son negativos de la factorial. (A!) y (B!)
 *
 * \param Verificacion del primer numero (A).
 * \param Verificacion del segundo numero (B).
 *
 * \return Retorna al Resultado de la verificacion de los dos numeros: (A!) y (B!) En caso de ser negativo se pone el mensaje de error.
 *
 */
float factorialVerificacion (float numero);

/** \brief La factorizacion de dos numeros (A!) y (B!).
 *
 * \param Primer numero (A) a aplicar factorial.
 * \param Segundo numero (B) a aplicar factorial.
 *
 * \return Retorna al Resultado de la factorial de: (A!) y (B!).
 *
 */
long factorial (float numeroFactorial);

/** \brief Sirve para limpiar el Buffer.
 *
 * \return void
 *
 */
void limpiarBuffer();

/** \brief Sirve para limpiar la pantalla.
 *
 * \return void
 *
 */
void limpiarPantalla();

#endif
