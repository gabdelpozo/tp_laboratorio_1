#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "menu_calculadora.h"

int main(void)
{
	int opcionesMenu;
	int x=0;
	int flagX=0;
	int y=0;
	int flagY=0;
	int suma;
	int resta;
	float division;
	int errorDivision=0;
	int multiplicacion;
	long int Afactorial;
	long int Bfactorial;

	do
	{
		printf("\nMenu de opciones\n"
				"1-Ingresar primer operando(A=%d)\n"
				"2-Ingresar segundo operando(B=%d)\n"
				"3-Calcular las siguientes operaciones:\n"
				"	a) Calcular la suma (A+B)\n"
				"	b) Calcular la resta (A-B)\n"
				"	c) Calcular la division (A/B)\n"
				"	d) Calcular la multiplicacion (A*B)\n"
				"	e) Calcular el factorial (A!) y (B!)\n"
				"4-Informar los resultados de todas las operaciones\n"
				"5-Salir\n",x,y);
		if(utn_getNumero(&opcionesMenu, "\nIngrese la opción que desea efectuar:","\nERROR - Ingrese una opción valida",0,100,10)==0)
		{
			switch(opcionesMenu)
			{
			case 1:
				utn_getNumero(&x,"\nIngrese el primer operando: ","\nERROR - Numero invalido, intente nuevamente",0,100,10);
				flagX = 1;
				break;

			case 2:
				utn_getNumero(&y,"\nIngrese el segundo operando: ","\nERROR - Numero invalido, intente nuevamente",0,100,10);
				flagY = 1;
				break;

			case 3:
				if(flagX==1 && flagY==1)
				{
					opSumar(x, y, &suma);
					opRestar(x, y, &resta);
					errorDivision = opDividir(x, y, &division);
					opMultiplicar(x, y, &multiplicacion);
					opFactorial(x, &Afactorial);
					opFactorial(y, &Bfactorial);
				}
				else printf("\nIngrese el operando que falta");
				break;

			case 4:
				if (flagX==1 && flagY==1)
				{
					imprimirResultados(suma, resta, division, errorDivision, multiplicacion, Afactorial, Bfactorial);
					__fpurge(stdin);
					getchar();
				}
				else printf("\nIngrese el operando que falta");
				break;
			}
		}

	}while(opcionesMenu != 5);
    return 0;
}

