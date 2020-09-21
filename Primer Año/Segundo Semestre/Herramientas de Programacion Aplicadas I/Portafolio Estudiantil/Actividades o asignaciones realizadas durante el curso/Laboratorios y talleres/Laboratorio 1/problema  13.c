/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */

#include<stdio.h>
#include<stdlib.h>


void main(){
    //declaracones
    float cantmonedas,equivaendolar;
    int tipomoneda;
    //instrucciones
    printf("Aeropuerto Internacional de Tocumen\n Seleccione el tipo de moneda a cambiar");
    printf(" \n 1.Bolivar Venezolano\n 2.Dolar Canadiense\n 3.Libra\n 4.Peso Colombiano\n 5.Peso Mexicano\n 6.Yen\n 7.Yuan\n 8.Euro\n 9.Real brasileño\n 10.Peso Argentino");
    printf("\nIngrese el numero entero que corresponde a la moneda:\n");
    scanf("%d",&tipomoneda);
    system("cls");
    //switch para determinar el tipo de moneda
    switch(tipomoneda){
        case 1:
            printf("Moneda ingresada: Bolivar Venezolano \nEquivalente a un dolar:32738.48");
            printf("\nIngrese un numero entero que corresponde a la moneda:\n");
            scanf("%f",&cantmonedas);
            equivaendolar=cantmonedas/32738.48;
        break;
        case 2:
            printf("Moneda ingresada: Dolar Canadiense \nEquivalente a un dolar:1.35");
            printf("\nIngrese un numero entero que corresponde a la moneda:\n");
            scanf("%f",&cantmonedas);
            equivaendolar=cantmonedas/1.35;
        break;
        case 3:
            printf("Moneda ingresada: Libra \nEquivalente a un dolar:0.78");
            printf("\nIngrese un numero entero que corresponde a la moneda:\n");
            scanf("%f",&cantmonedas);
            equivaendolar=cantmonedas/0.78;
        break;
        case 4:
            printf("Moneda ingresada: Peso Colombiano\nEquivalente a un dolar:3777.51");
            printf("\nIngrese un numero entero que corresponde a la moneda:\n");
            scanf("%f",&cantmonedas);
            equivaendolar=cantmonedas/3777.51;
        break;
        case 5:
            printf("Moneda ingresada: Peso Mexicano\nEquivalente a un dolar:21.98");
            printf("\nIngrese un numero entero que corresponde a la moneda:\n");
            scanf("%f",&cantmonedas);
            equivaendolar=cantmonedas/21.98;
        break;
        case 6:
            printf("Moneda ingresada: Yen\nEquivalente a un dolar:107.30");
            printf("\nIngrese un numero entero que corresponde a la moneda:\n");
            scanf("%f",&cantmonedas);
            equivaendolar=cantmonedas/107.30;
        break;
        case 7:
            printf("Moneda ingresada: Yuan\nEquivalente a un dolar:7.07");
            printf("\nIngrese un numero entero que corresponde a la moneda:\n");
            scanf("%f",&cantmonedas);
            equivaendolar=cantmonedas/7.07;
        break;
        case 8:
            printf("Moneda ingresada: Euro\nEquivalente a un dolar:0.88");
            printf("\nIngrese un numero entero que corresponde a la moneda:\n");
            scanf("%f",&cantmonedas);
            equivaendolar=cantmonedas/0.88;
        break;
        case 9:
            printf("Moneda ingresada: Real Brasileño\nEquivalente a un dolar:5.06");
            printf("\nIngrese un numero entero que corresponde a la moneda:\n");
            scanf("%f",&cantmonedas);
            equivaendolar=cantmonedas/5.06;
        break;
        case 10:
            printf("Moneda ingresada: Peso Argentino\nEquivalente a un dolar:69.31");
            printf("\nIngrese un numero entero que corresponde a la moneda:\n");
            scanf("%f",&cantmonedas);
            equivaendolar=cantmonedas/69.31
;
        break;

    }
    //salida, cantidad equivalente en dolares
     printf("La cantidad en dolares es:%.2f",equivaendolar);

}
