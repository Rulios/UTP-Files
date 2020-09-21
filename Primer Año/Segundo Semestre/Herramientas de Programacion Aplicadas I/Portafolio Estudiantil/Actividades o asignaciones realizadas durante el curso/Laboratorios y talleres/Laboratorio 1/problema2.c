/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */

#include<stdio.h>
//Elabore un programaque le solicite al usuario 3 calificaciones para calcular el promedio e imprimir la equivalencia de la nota en letras A, B, C, D y F.
void main(){
    //Bloque declarativa de variables
    float c1,c2,c3,promedio;
    //Bloque de instrucciones
    //Se ingresa las notas
    printf("Ingrese la calificacion 1, ingresar numeros entre 100-0:\n");
    scanf("%f",&c1);
    printf("Ingrese la calificacion 2, ingresar numeros entre 100-0:\n");
    scanf("%f",&c2);
    printf("Ingrese la calificacion 3, ingresar numeros entre 100-0:\n");
    scanf("%f",&c3);
    //SE CALCULA EL PROMEDIO
    promedio=((c1+c2+c3)/3);
    //BLOQUE DE SALIDAS DEPENDE EL PROMEDIO OBTENIDO
    if(promedio>100)
        printf("El promedio de las calificaciones es mayor a 100,La nota final  es %.2f\n",promedio);
    else if((promedio<=100)&&(promedio>90))
        printf("La nota final  es %.2f,esto equivale a: A\n",promedio);
    else if((promedio<=90)&&(promedio>80))
        printf("La nota final  es %.2f,esto equivale a: B\n",promedio);
    else if((promedio<=80)&&(promedio>70))
        printf("La nota final  es %.2f,esto equivale a: C\n",promedio);
    else if((promedio<=70)&&(promedio>60))
        printf("La nota final  es %.2f,esto equivale a: D\n",promedio);
    else if((promedio<=60)&&(promedio>-1))
        printf("La nota final  es %.2f,esto equivale a: F\n",promedio);
    else
        printf("La nota final  es %.2f,hubo un error al momento de ingresar las calificaciones\n",promedio);
}
