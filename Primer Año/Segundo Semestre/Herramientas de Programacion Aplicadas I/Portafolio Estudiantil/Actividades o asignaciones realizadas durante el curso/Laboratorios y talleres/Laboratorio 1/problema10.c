/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */

#include<stdio.h>
//Programa donde se ingresa un numero del 1 al 7 y se determina el dia de la semana
int main()
{
    //Bloque declarativas de variables
    int num;

    //Bloque de instrucciones
    printf("Introduzca un numero entre el 1 y el 7:\n"); //Se pide un numero del 1 al 7
    scanf("%d", &num); //Se lee el numero ingresado
    switch (num) //Se determina el dia de la semana, enteros menores a 1 y mayores a 7 seran invalidos
    {
        case 1:
            printf("El dia de la semana es lunes");
            break;
        case 2:
            printf("El dia de la semana es martes");
            break;
        case 3:
            printf("El dia de la semana es miercoles");
            break;
        case 4:
            printf("El dia de la semana es jueves");
            break;
        case 5:
            printf("El dia de la semana es viernes");
            break;
        case 6:
            printf("El dia de la semana es sabado");
            break;
        case 7:
            printf("El dia de la semana es domingo");
            break;
        default:
            printf("El numero ingresado es invalido");
    }
return 0;
}
