/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */


#include<stdio.h>
//Programa para calcular la tabla del 1 al 10 de un numero
int main()
{
    //Bloque declarativa de variables
    int num, cont, res;

    //Bloque de instrucciones
    printf("Introduzca un entero entre el 1 y el 12:\n"); //Se pide un numero del 1 al 12
    scanf("%d", &num); //Se asigna como un entero

    if(num<1||num>12) //Se invalidan numeros menores a 1 y mayores a 12
    {
        printf("Numero invalido");
    }
    else
    {
        printf("Tabla de multiplicacion del %d\n", num);

        for(cont=1;cont<11;cont++) //Se inicia un ciclo empezando en 1 y acabando en 10
        {
            res=num*(cont); //Se calcula el resultado de la multiplicacion
            printf("%d x %d = %d\n",num,cont,res); //Se imprimen los numeros
        }
    }
return 0;
}
