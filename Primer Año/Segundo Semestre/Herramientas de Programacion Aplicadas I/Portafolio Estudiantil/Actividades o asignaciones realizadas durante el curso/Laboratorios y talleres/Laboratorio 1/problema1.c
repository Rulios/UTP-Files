/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */

#include<stdio.h>
//Elabore un programa que lea tres números diferentes, A, B, C, e imprime los valores máximo y mínimo.
void main(){
//Bloque declarativa de variables
    float A,B,C,mayor,min;
    //Bloque de instrucciones
    //Se ingresa los numeros
    printf("Ingrese el primer numero:\n");
    scanf("%f",&A);
    printf("Ingrese el segundo numero:\n");
    scanf("%f",&B);
    printf("Ingrese el tercer numero:\n");
    scanf("%f",&C);
    //se busca el maximo y minimo
    if(A>B){
        mayor=A;
        min=B;}
    else{
        mayor=B;
        min=A;}
    if(mayor<C)
        mayor=C;
    if(min>C)
        min=C;
    //bloque de salidas
    printf("El numero maximo: %2.f\n",mayor);
    printf("El numero minimo: %2.f\n",min);

}
