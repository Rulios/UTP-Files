/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */

#include <stdio.h>
//Programa para ingresar una hora e imprimir si es antes o depues de mediodia y a cuantos segundos equivale
int main()
{
    //Bloque declarativa de variables
    int hora, minuto, segundos;
    //Bloque de instrucciones
    //Se ingresa la hora y luego se imprime la hora ingresada
    printf("Ingrese la hora (en formato hh:mm): \n");
    scanf("%d:%d", &hora, &minuto);
    printf("La hora ingresada fue: %d horas %d minutos \n", hora, minuto);

    //Se determina si es antes durante o despues del mediodia
    if (hora==12 && minuto==0)
    {
        printf("La hora es mediodia");
    }
    else if (hora>=12 && minuto>=0)
    {
        printf("La hora es despues del mediodia");
    }
    else if (hora<12)
    {
        printf("La hora es antes del mediodia");
    }
    else
    {
        printf("La hora ingresada no es valida");
    }
    //Se calcula la cantidad de segundos
    segundos=hora*3600+minuto*60;
    printf("\nLa hora equivale a %d segundos", segundos);
    return 0;
  }

