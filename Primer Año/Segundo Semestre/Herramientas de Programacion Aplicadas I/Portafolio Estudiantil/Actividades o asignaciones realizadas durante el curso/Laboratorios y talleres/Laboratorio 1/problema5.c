/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */



#include <stdio.h>
//Programa para identificar el tipo de triangulo
int main()
{
    int a,b,c;//variable para identificar los lados del triangulo
    printf("Introduzca lado a: ");
    scanf("%d",&a);
    printf("Introduzca lado b: ");
    scanf("%d",&b);
    printf("Introduzca lado c: ");
    scanf("%d",&c);

    if(a==b && a==c){
        printf("Su triangulo es equilatero, todos los lados son iguales.");
    }
    else if(a==b || a==c || b==c){
        printf("Su triangulo es isosceles, tiene 2 lados iguales.");
    }
    else{
        printf("Su triangulo es escaleno, tiene los lados desiguales.");
    }

    return 0;
}
