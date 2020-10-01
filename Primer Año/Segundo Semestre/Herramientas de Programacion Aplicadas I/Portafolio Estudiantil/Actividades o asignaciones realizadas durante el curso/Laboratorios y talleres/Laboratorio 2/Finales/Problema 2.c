/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */

#include <stdio.h>

//Programa para calcular el promedio de estatura de 10 niños y obtener estatura mas alta y mas baja


int main()
{
    float est, est_ma, est_me, prom, suma_est;//declaracion de variables

   suma_est = 0;//inicaliza en cero la suma de estaturas


    printf("Calcular promedio de estatura en metros de 10 ninnos");

    for(int i=1;i<=10;i++){
        printf( "\nIntroduzca la estatura %d: ",i);
        scanf("%f",&est);
        suma_est = est + suma_est;//acumulador de estaturas

        if(i==1){//solo va a pasar cuando i sea igual a 1

            est_ma=est;//inicaliza la estatura mayor como la estatura que se introdujo
            est_me=est;//inicializa la estatura menor como la estatura que se introdujo
        }

        if(est > est_ma){//sentencia if para verificar la estatura mas alta
            est_ma=est;
        }
        if(est < est_me){//sentencia if para verificar la estatura mas alta
            est_me=est;
        }
    }

    prom = suma_est / 10;//operacion que calcula el promedio de estaturas

    printf("\nEl promedio de estaturas es: %.2f m.",prom);
    printf("\nLa estatura mas alta es: %.2f m.",est_ma);
    printf("\nLa estatura mas baja es: %.2f m.",est_me);
    return 0;
}
