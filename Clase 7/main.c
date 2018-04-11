#include <stdio.h>
#include <stdlib.h>

void saludar(void);
int getInt(char mensaje[], char mensajeError[], int intentos, int maximo, int minimo);
int getIntEntreMinMax(char mensaje[], int maximo, int minimo, int *respuesta);
int cambiar(int *dato);

int main()
{
    int numero = 0;
    saludar();
    cambiar(&numero);
    printf("\nNumero cambiado: %d\n\n", numero);
    printf("\nLa edad Ingresada es: %d\n", getInt("Ingrese su edad: ", "ERROR. Ingrese una edad valida. ", 3, 99, 00));
    int respuesta;
    int sueldo;
    respuesta = getIntEntreMinMax("\nIngrese sueldo: ", 99999, 00000, &sueldo);
    if (respuesta == 0)
    {
        printf("\nSueldo correcto: %d\n", sueldo);
    }
    else
    {
        if (respuesta < 0)
        {
            printf("\nTe falto\n");
        }
        else
        {
            printf("\nTe pasaste\n");
        }
    }

}
/** \brief
* getint()
* \param mensaje[] char mensaje de pedido de
* \param mensajeError[] char mensaje de error
* \param intentos int cantidad de posibilida
* \param maximo int el maximo numero posible
* \param minimo int el minimo numero posible
* \return int numero entero
*
*/

    saludar()
    {
    printf("Hola UTNFRA!\n");
    }

    cambiar(int *dato)
    {
        printf("Ingrese dato: ");
        scanf("%d", dato);
        printf("%d", *dato);
        //*dato = 2;
        return 0;
    }

    getInt(char mensaje[], char mensajeError[], int intentos, int maximo, int minimo)
    {
    int retorno = 0;
    do{
        printf("%s", mensaje);
        scanf("%d", &retorno);
        if (retorno <= maximo && retorno >= minimo)
        {
            break;
        }
        printf("%s", mensajeError);
        intentos--;
    } while (intentos > 0);
    return retorno;
    }

    getIntEntreMinMax(char mensaje[], int maximo, int minimo, int *respuesta)
    {
        int retorno = 0;
        int ingresoAux;
        printf("%s", mensaje);
        scanf("%d", &ingresoAux);
        if (ingresoAux < maximo && ingresoAux > minimo)
        {
        }
        else
        {
            retorno = 1;
        }
        *respuesta = ingresoAux;
        return retorno;
    }







