#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void alta(Eempleado emp[], int cantidad)
{
    int i;
    for (i=0; i<cantidad; i++)
    {
        printf("\nIngrese el nombre del empleado %d: \n", i+1);
        scanf("%s", emp[i].nombre);
        puts("Ingrese el legajo: ");
        scanf("%d", &emp[i].legajo);
        puts("Ingrese el salario: ");
        scanf("%f", &emp[i].salario);
        puts("Ingrese el nacimiento: ");
        puts("Dia: ");
        scanf("%d", &emp[i].fn.dia);
        puts("Mes: ");
        scanf("%d", &emp[i].fn.mes);
        puts("Anio: ");
        scanf("%d", &emp[i].fn.anio);
    }
}

void listar(Eempleado emp[], int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
                {
                    //printf("Nombre: %s\nLegajo: %d\nSalario: %.2f\nFecha de nacimiento: %d/%d/%d\n\n", emp[i].nombre, emp[i].legajo, emp[i].salario, emp[i].fn.dia, emp[i].fn.mes, emp[i].fn.anio);
                    printf("Nombre: %s\n", emp[i].nombre);
                    printf("%d\n", emp[i].legajo);
                    printf("%.2f\n", emp[i].salario);
                    printf("%d\n", emp[i].fn.dia);
                    printf("%d\n", emp[i].fn.mes);
                    printf("%d\n\n", emp[i].fn.anio);
                }
}
