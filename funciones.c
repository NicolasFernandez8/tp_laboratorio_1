#include "funciones.h"

void menuResultados (float suma, float resta, float division, float multiplicacion, float resultadoFactorialA, float resultadoFactorialB, int banderaA, int banderaB)
{
    printf("El resultado de (A+B) es: %.2f ", suma);
    printf("\nEl resultado de (A-B) es: %.2f ", resta);

    if (division == -1)
    {
        printf("\nError no se puede dividir por 0");
    }

    else
    {
       printf("\nEl resultado de (A/B) es: %.2f ", division);
    }

    printf("\nEl resultado de (A*B) es: %.2f ", multiplicacion);

    if (banderaA == 0)
    {
        printf("\nLa factorial del primer numero ingresado (A!) es: %.2f! ", resultadoFactorialA);
    }

    else if (banderaA < 0)
    {
        printf("\nLa factorial del primer numero ingresados tiene un: ERROR, No se puede hacer la factorial en numeros negativos.");
    }

    if (banderaB == 0)
    {
        printf("\nLa factorial del segundo numero ingresado (B!) es: %.2f! ", resultadoFactorialB);
    }

    else if (banderaB < 0)
    {
        printf("\nLa factorial del segundo numero ingresados tiene un: ERROR, No se puede hacer la factorial en numeros negativos.");
    }
}

void menuSeleccion()
{
    printf("--> Calculadora: Tp 1. \n\n--> Alumno: Nicolas Agustin Fernandez. \n\n--> Division: 1F.\n\n");
    printf("\n1. Opcion: Ingresar 1er operando (A=x). \n");
    printf("\n2. Opcion: Ingresar 2do operando (B=y). \n");
    printf("\n3. Opcion: Calcular todas las operaciones.\n");
    printf("\n4. Opcion: Informar resultados. \n");
    printf("\n5. Opcion: Salir.\n\n");
}

float suma (float numeroUno, float numeroDos)
{
    float resultadoSuma;

    resultadoSuma = (numeroUno + numeroDos);

    return resultadoSuma;
}

float resta (float numeroUno, float numeroDos)
{
    float resultadoResta;

    resultadoResta = (numeroUno - numeroDos);

    return resultadoResta;
}

float division (float numeroUno, float numeroDos)
{
    float resultadoDivision;

    if (numeroDos == 0)
    {
        resultadoDivision = -1;
    }

    else
    {
        resultadoDivision = (numeroUno / numeroDos);
    }

    return resultadoDivision;
}

float multiplicacion (float numeroUno, float numeroDos)
{
    float resultadoMultiplicacion;

    resultadoMultiplicacion = (numeroUno * numeroDos);

    return resultadoMultiplicacion;
}

float factorialVerificacion (float numero)
{
    int numeroEntero;
    float validarNumero;

    numeroEntero = (int) numero;

    if (numero > 0)
    {
        validarNumero = numeroEntero / numero;
    }

    else
    {
        validarNumero = 0;
    }

    if (numero < 0)
    {
        return -1;
    }

    else
    {
        if (validarNumero == 1 || validarNumero == 0)
        {
            return 0;
        }

        else
        {
            return 1;
        }

    }
}

long factorial (float numeroFactorial)
{
    if(numeroFactorial == 1 || numeroFactorial == 0)
    {
        return 1;
    }

    else
    {
        return numeroFactorial * factorial (numeroFactorial -1);
    }
}

void limpiarBuffer()
{
    fflush(stdin);
}

void limpiarPantalla()
{
    system("cls");
}
