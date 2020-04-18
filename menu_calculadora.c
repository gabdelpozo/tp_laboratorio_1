#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "menu_calculadora.h"


int opSumar(int num1, int num2, int *resultado)
{
    *resultado = num1 + num2;
    return 0;
}

int opRestar(int num1, int num2, int *resultado)
{
    *resultado = num1 - num2;
    return 0;
}

int opDividir(int num1, int num2, float *resultado)
{
    int ret = -1;
    if (num2 == 0)
    {
        ret = -1;
    }else
        {
            *resultado = num1/num2;
            ret = 0;
        }
    return ret;
}

int opMultiplicar(int num1, int num2, int *resultado)
{
    *resultado = num1 * num2;
    return 0;
}

int opFactorial(int num1, long int *resultado)
{
    int ret = 0;
    int i;
    long int buffer;
    buffer = num1;
    num1--;
    if (num1<0)
    {
        ret = -1;
    }
    else if (num1 == 0)
        {
            buffer = 1;
        }
    	else
            {
                for (i=1;i<num1;num1--)
                {
                    buffer = buffer * num1;
                }
            }
    *resultado = buffer;
    return ret;
}

int imprimirResultados(int suma, int resta, float division,int errorDivision, int multiplicacion, long int factorial1, long int factorial2)
{
    printf("\nEl resultado de A+B es: %d \nEl resultado de A-B es: %d",suma, resta);
    if (!errorDivision)
    {
        printf("\nEl resultado de A/B es: %.2f",division);
    }
    else
	{
		printf("\nNo se puede dividir por cero");
	}
    printf("\nEl resultado de A*B es: %d",multiplicacion);
    printf("\nEl factorial de A es: %ld y El factorial de B es: %ld",factorial1,factorial2);
    return 0;
}











