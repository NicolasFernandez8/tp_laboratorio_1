#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    float resultadoFactorialA;
    float resultadoFactorialB;

    int banderaA = 0;
    int banderaB = 0;

    float numeroUno;
    float numeroDos;

    char respuesta;

    do
    {
        menuSeleccion();

        limpiarBuffer();
        scanf("%c",  &respuesta);

        switch(respuesta)
        {
            case '1':

                printf("Ingresar 1er operando (A=x): ");
                scanf("%f", &numeroUno);

                break;

            case '2':

                printf("\nIngresar 2do operando (B=y): ");
                scanf("%f", &numeroDos);

                break;

            case '3':

                printf("\nInciando proceso de calculo de resultados....\n");

                resultadoSuma = suma (numeroUno, numeroDos); //Suma
                resultadoResta = resta (numeroUno, numeroDos); //Resta
                resultadoDivision = division (numeroUno, numeroDos); //Division
                resultadoMultiplicacion = multiplicacion (numeroUno, numeroDos); //Multiplicacion

                banderaA = factorialVerificacion (numeroUno); //Factorial A:

                if (banderaA == 0)
                {
                    resultadoFactorialA = factorial (numeroUno);
                }

                banderaB = factorialVerificacion (numeroDos); //Factorial B:

                if (banderaB == 0)
                {
                    resultadoFactorialB = factorial (numeroDos);
                }

                break;

            case '4':

                menuResultados (resultadoSuma, resultadoResta, resultadoDivision, resultadoMultiplicacion, resultadoFactorialA, resultadoFactorialB, banderaA, banderaB);

                break;

            case '5':

                return 0;
        }

        do
        {
            printf("\nContinuar [S/N]:?");

            limpiarBuffer();

            scanf("%c", &respuesta);

            respuesta = toupper(respuesta);

            limpiarPantalla();

        } while (respuesta != 'S' && respuesta != 'N');

    } while (respuesta == 'S');
}
