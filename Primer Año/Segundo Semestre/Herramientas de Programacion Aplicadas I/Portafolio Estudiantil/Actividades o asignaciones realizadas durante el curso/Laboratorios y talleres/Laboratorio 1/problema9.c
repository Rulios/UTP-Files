/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */

#include<stdio.h>
//Programa donde se ingresa un numero del 1 al 12 y se imprime el numero romano
int main()
{
    //Bloque declarativas de variables
    int num;

    //Bloque de instrucciones
    printf("Introduzca un numero del 1 al 12:\n"); //Se pide un numero del 1 al 12
    scanf("%d", &num); //Se lee el numero ingresado como un int
    //Se determina el numero romano, enteros menores a 1 y mayores a 12 seran invalidos
    switch (num)
    {
    case 1:
        printf("El numero romano es: I");
        break;
    case 2:
        printf("El numero romano es: II");
        break;
    case 3:
        printf("El numero romano es: III");
        break;
    case 4:
        printf("El numero romano es: IV");
        break;
    case 5:
        printf("El numero romano es: V");
        break;
    case 6:
        printf("El numero romano es: VI");
        break;
    case 7:
        printf("El numero romano es: VII");
        break;
    case 8:
        printf("El numero romano es: VIII");
        break;
    case 9:
        printf("El numero romano es: IX");
        break;
    case 10:
        printf("El numero romano es: X");
        break;
    case 11:
        printf("El numero romano es: XI");
        break;
    case 12:
        printf("El numero romano es: XII");
        break;
    default:
        printf("El numero ingresado es invalido");
    }
return 0;
}
