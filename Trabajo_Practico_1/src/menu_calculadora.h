#ifndef MENU_CALCULADORA_H_INCLUDED
#define MENU_CALCULADORA_H_INCLUDED

/*
 *\brief Realiza la operación suma(+) de los enteros num1 y num2 y devuelve un resultado
 *\param int *resultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 *\param num1 y num2 Variables que reciben el valor a operar
 *\return retorna 0(exito) siempre que se realice la operación sumar
 */

int opSumar(int num1, int num2, int *resultado);

/*
 *\brief Realiza la operación resta(-) de los enteros num1 y num2 y devuelve un resultado
 *\param int *resultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 *\param num1 y num2 Variables que reciben el valor a operar
 *\return retorna 0(exito) siempre que se realice la operación restar
 */
int opRestar(int num1, int num2, int *resultado);

/*
 *\brief Realiza la operación división(/) de los enteros num1 y num2 y devuelve un resultado
 *\param float *resultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 *\param int num1 y int num2 Variables que reciben el valor a operar
 *\return retorna 0(exito) siempre que int num2 sea mayor a 0, de lo contrario retorna -1
 */
int opDividir(int num1, int num2, float *resultado);

/*
 *\brief Realiza la operación multiplicación(*) de los enteros num1 y num2 y devuelve un resultado
 *\param int *resultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 *\param int num1 y int num2 Variables que reciben el valor a operar
 *\return retorna 0(exito) siempre que realice la operación multiplicar
 */
int opMultiplicar(int num1, int num2, int *resultado);

/*
 *\brief Realiza la operación factorial(!) de los enteros num1 y devuelve un resultado
 *\param int *resultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 *\param int num1 Variable que recibe el valor a operar
 *\return retorna 0(exito) siempre que num1 sea mayor a 0, de lo contrario retorna -1, si num1 es
 *		igual a 0, long int *resultado será igual a 1
 */
int opFactorial(int num1, long int *resultado);

/*
 *\brief imprime los valores por referencia de las operaciones int suma, int resta, float division,
 * 		int errorDivision, int multiplicacion, unsigned long long factorial1 y unsigned long long
 * 		factorial 2
 *\param int suma Almacena la operación suma y la devuelve
 *\param int resta Almacena la operación resta y la devuelve
 *\param float división Almacena la operación división y la devuelve
 *\param int errorDivisión y float division comprueba que se pueda realizar la operación división, si el resultado
 *		es distinto de 0 ingresa devuelve el resultado de division
 *\param int multiplicacion Almacena la operacion multiplicacion y la devuelve
 *\param long int factorial1 y long int factorial2 Alamcenan las operaciones factorial y las
         devuelven
 */
int imprimirResultados(int suma, int resta, float division,int errorDivision, int multiplicacion, long int factorial1, long int factorial2);


#endif /* MENU_CALCULADORA_H_INCLUDED */
