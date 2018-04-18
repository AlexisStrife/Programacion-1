#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define CANT 20

int main()
{
    int opcion, cant = 0, i, j, seIngreso = 0;
    Eempleado emp[CANT], aux;
    char continuar = 'n';


    do
    {
        puts("Ingrese la opcion deseada: \n\n1)Ingresar empleados\n2)Ordenar registros actuales\n3)Listar empleados\n");
        //fflush(stdin);
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            puts("\nCuantos empleados va a ingresar?\n")  ;
            //fflush(stdin);
            scanf("%d", &cant);
            alta(emp, cant);
            /*    for (i=0; i<cant; i++)
            {
                printf("\nIngrese el nombre del empleado %d: \n", i+1);
                //fflush(stdin);
                scanf("%s", emp[i].nombre);
                puts("Ingrese el legajo: ");
                //fflush(stdin);
                scanf("%d", &emp[i].legajo);
                puts("Ingrese el salario: ");
                //fflush(stdin);
                scanf("%f", &emp[i].salario);
                puts("Ingrese el nacimiento: ");
                puts("Dia: ");
                scanf("%d", &emp[i].fn.dia);
                puts("Mes: ");
                scanf("%d", &emp[i].fn.mes);
                puts("Anio: ");
                scanf("%d", &emp[i].fn.anio);
            }*/
            seIngreso = 1;
            break;
        case 2:
            if (seIngreso == 0)
            {
                puts("\nNo hay empleados que ordenar.");
            }
            else
            {
                for (i=0; i<cant-1; i++)
                    {
                        for(j=i+1; j<cant; j++)
                        {
                            if(emp[i].legajo > emp[j].legajo)
                            {
                                aux = emp[i];
                                emp[i] = emp[j];
                                emp[j] = aux;
                            }
                        }
                    }
            }
            break;
        case 3:
            if (seIngreso == 1)
            {
                listar(emp, cant);
                /*for(i=0; i<cant; i++)
                {
                    //printf("Nombre: %s\nLegajo: %d\nSalario: %.2f\nFecha de nacimiento: %d/%d/%d\n\n", emp[i].nombre, emp[i].legajo, emp[i].salario, emp[i].fn.dia, emp[i].fn.mes, emp[i].fn.anio);
                    printf("Nombre: %s\n", emp[i].nombre);
                    printf("%d\n", emp[i].legajo);
                    printf("%.2f\n", emp[i].salario);
                    printf("%d\n", emp[i].fn.dia);
                    printf("%d\n", emp[i].fn.mes);
                    printf("%d\n\n", emp[i].fn.anio);
                }*/
            }
            else
            {
                puts("\nAun no hay empleados en sistema.");
            }
            break;
        default:
            puts("\nIngreso cualquier cosa\n");
            break;
        }
        puts("\nDesea continuar?\n");
        fflush(stdin);
        scanf("%c", &continuar);
        while(continuar != 's' && continuar != 'n')
        {
            puts("Ingrese s o n segun corresponda:");
            fflush(stdin);
            scanf("%c", &continuar);
        }
        if(continuar == 's')
        {
            system("cls");
        }
    }
    while (continuar == 's');
    return 0;
}
