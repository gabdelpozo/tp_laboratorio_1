/*
* 	TRABAJO PRACTICO 2
*/

#include <stdio.h>
#include <stdlib.h>

#include "ArrayEmployees.h"
#include "utn.h"
#include "Menu.h"

#define NOMINA_EMPLEADOS 1000

int main(void) {

	Employee arrayEmployees[NOMINA_EMPLEADOS];
	int idEmployees=0;
	int auxiliarIndice;
	int auxiliarId;
	int orderEmployee;
	int flagOrder;

	if(initEmployees(arrayEmployees,NOMINA_EMPLEADOS) == 0)
	{
		printf("***ALTAS, BAJAS Y MODIFICACIONES DE EMPLEADOS*** \n\n");
	}

	  do
	  {
	        switch(menuPrincipal())
			{
			case 1:
				auxiliarIndice = emp_getEmptyIndex(arrayEmployees,NOMINA_EMPLEADOS);
				if(auxiliarIndice >= 0)
				{
					if(add_Employees(arrayEmployees,NOMINA_EMPLEADOS,auxiliarIndice,&idEmployees) == 0)
					{
						printf("\nCarga realizada con exito\n");
					}
				}
				else
				{
					printf("\nNO HAY MAS LUGAR");
				}
				break;
			case 2:
				printEmployees(arrayEmployees,NOMINA_EMPLEADOS);
				if(utn_getNumero(&auxiliarId,"\nIndique el ID del cliente a modificar: ","\nID invalido",0,idEmployees,0) == 0)
				{
					auxiliarIndice = findEmployeeById(arrayEmployees,NOMINA_EMPLEADOS,auxiliarId);
					if(	auxiliarIndice >= 0 &&
							emp_modificarArray(arrayEmployees,NOMINA_EMPLEADOS,auxiliarIndice) == 0)
					{
						printf("\nModificacion realizada con exito\n");
					}
				}
				break;

			case 3:
				printEmployees(arrayEmployees,NOMINA_EMPLEADOS);
				if(utn_getNumero(&auxiliarId,"\nIndique el ID del cliente a eliminar","\nID invalido",0,idEmployees,0)==0)
				{
					auxiliarIndice = findEmployeeById(arrayEmployees,NOMINA_EMPLEADOS,auxiliarId);
					if(	auxiliarIndice >= 0 &&
							removeEmployee(arrayEmployees,NOMINA_EMPLEADOS,auxiliarIndice)== 0)
					{
						printf("\nBaja realizada con exito\n");
					}
				}
				break;

			case 4:
				switch(subMenu())

				{
				case 1:
					printf("\nDesea ordenar Empleados de manera ascendente[1] o descendente[0]?\n");
					scanf("%d",&orderEmployee);
					flagOrder = sortEmployees(arrayEmployees,NOMINA_EMPLEADOS,orderEmployee);
					if(flagOrder >= 0)
					{
						printf("\nSe ordeno con exito\n");
						printEmployees(arrayEmployees,NOMINA_EMPLEADOS);

					}
					break;

				case 2:
					emp_informarTotalyPromedio(arrayEmployees,NOMINA_EMPLEADOS);
					break;

			case 5:
				return 0;
				break;
		}
	}
	}while(auxiliarIndice != 5);

	return EXIT_SUCCESS;
}




