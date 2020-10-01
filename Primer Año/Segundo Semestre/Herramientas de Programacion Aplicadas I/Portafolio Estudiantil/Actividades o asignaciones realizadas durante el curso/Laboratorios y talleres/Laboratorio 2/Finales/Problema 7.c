/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */


#include <stdio.h>

//programa para calcular la estatura promedio y mostrar estatura mas alta y mas baja

int main()
{
    int n,x;
    float est, prom, sum, est_ba, est_al;

    sum = 0;
    x = 0;

    printf("Introduzca cantidad de ninnos a evaluar: ");
    scanf("%d",&n);//cantidad de estaturas que se van a evaluar

    while(x<n){

        x++;//contador para controlar las veces que se va a pedir la estatura

        printf("Introduzca la estatura en metros %d: ",x);
        scanf("%f",&est);

        sum = sum + est;//acumulador de estaturas

        if(x == 1){

            est_al = est;
            est_ba = est;

        }

        if(est > est_al){//sentencia if para verificar la estatura mas alta

            est_al=est;//variable que guarda la estatura mas alta
        }

        if(est < est_ba){//sentencia if para verificar la estatura mas alta

            est_ba=est;//variable que guarda estatura mas baja
        }

    }

    prom = sum/n;//promedio de las estaturas

    printf("\nEl promedio de estatura es: %.2f m." ,prom);
    printf("\nLa estatura mas alta es: %.2f m.",est_al);
    printf("\nLa estatura mas baja es: %.2f m.",est_ba);
    return 0;
}
