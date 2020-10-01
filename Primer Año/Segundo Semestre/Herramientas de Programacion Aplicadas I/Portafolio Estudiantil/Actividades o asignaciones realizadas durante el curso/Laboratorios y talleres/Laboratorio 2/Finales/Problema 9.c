/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */


#include<stdio.h>
//Programa para calcular cantidad de menores, mayores y promedio de edades
int main()
{
    //Bloque declarativa de variables
    int edad, cant, cont, menores, mayores;
    float sum, prom;

    //Bloque de instrucciones

    //Se determina la cantidad de edades que ingresar
    printf("Introduzca la cantidad de edades que desea ingresar: ");
    scanf("%d", &cant);

    //Se asignan los acumuladores a 0
    sum=0;
    menores=0;
    mayores=0;
    cont=1; //Se inicia el contador en uno para que el numero de joven empieze en 1
    while(cont<(cant+1)) //Estas instrucciones se van a repetir hasta que el contador llegue al numero de edades ingresado
    {
        //Se ingresa la edad del joven
        printf("Edad del joven numero %d: ", cont);
        scanf("%d", &edad);
        if(edad<18) //Se determina si el joven es menor de edad
        {
            menores++;
        }
        if(edad>=18) //Se determina si el joven es mayor de edad
        {
            mayores++;
        }
        sum += edad; //Se suma la edad ingresada al acumulador
        cont++; //Se le suma 1 al contador hasta que sea igual a la cantidad de edades
    }
    prom=sum/cant; //Se calcula el promedio despues de que se sumen todas las edades

    //Se imprimen los resultados
    printf("El promedio de las edades es: %f \n", prom);
    printf("La cantidad de menores de edad es: %d \n", menores);
    printf("La cantidad de mayores de edad es: %d \n", mayores);
return 0;
}
