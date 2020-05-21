#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

#define NAME_LEN 51
#define LASTNAME_LEN 51

typedef struct
{
	char name[NAME_LEN];
	char lastName[LASTNAME_LEN];
	float salary;
	int isEmpty;
	int id;
	int sector;
}Employee;

int emp_imprimir(Employee* auxProducto);
int initEmployees(Employee* array,int limite);
int add_Employees(Employee* array,int limite, int indice, int* id);
int emp_getEmptyIndex(Employee* array,int limite);
int printEmployees(Employee* array,int limite);
int findEmployeeById(Employee array[], int limite, int valorBuscado);
int emp_modificarArray(Employee* array,int limite, int indice);
int removeEmployee(Employee* array,int limite, int indice);
int sortEmployees(Employee* array,int limite, int order);
void emp_informarTotalyPromedio(Employee* array,int limite);


#endif /* ARRAYEMPLOYEES_H_ */
