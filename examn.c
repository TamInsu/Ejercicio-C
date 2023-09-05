
#include <stdio.h>

int main()
{
   char nombre [15];
   int empleados;
   printf("Dime el nombre de la empresa:\n");
   scanf("%s", nombre);
   printf("Dime cuantos empleados hay:\n");
   scanf("%i",&empleados);
   printf("La empresa se llama %s y tiene %i empleados",nombre,empleados);
}
