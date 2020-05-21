#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "Menu.h"
#include "ArrayEmployees.h"


/** \brief Es el menu de opciones principal.
 * \return Retorna la opcion elegida.
 */


int menuPrincipal()
{
    int opcion;
    printf("\n\n1. Cargar un Empleado");
    printf("\n2. Modificar un Empleado");
    printf("\n3. Eliminar un Empleado");
    printf("\n4. Informar: ");
    printf("\n5. Salir\n");

    utn_getNumero(&opcion, "\nIngrese una opcion: ", "\nError, Ingrese una opcion correcta.\n",1,5,2);
    printf("\n");
    return opcion;
}

int subMenu()
{
	int opcion;
	printf("\n\n1. Listado de los empleados ordenados alfabéticamente por Apellido y Sector.\n");
	printf("\n2. Total y promedio de los salarios, y cuántos empleados superan el salario promedio.\n");

	utn_getNumero(&opcion, "\nIngrese una opcion: ", "\nError, Ingrese una opcion correcta.\n ",1,2,2);
	printf("\n");
	return opcion;
}
