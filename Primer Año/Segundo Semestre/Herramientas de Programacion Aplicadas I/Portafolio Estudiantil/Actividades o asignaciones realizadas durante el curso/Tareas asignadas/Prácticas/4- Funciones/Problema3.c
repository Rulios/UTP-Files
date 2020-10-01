
#include<stdio.h>

float ABolivarVenezolano(float cantMonedas){
    return cantMonedas/32738.48;
}

float ADolarCanadiense(float cantMonedas){
	return cantMonedas/1.35;
}

float ALibra(float cantMonedas){
	return cantMonedas/0.78;
}

float APesoColombiano(float cantMonedas){
	return cantMonedas/3777.51;
}

float APesoMexicano(float cantMonedas){
	return cantMonedas/21.98;
}

float AYen(float cantMonedas){
	return cantMonedas/107.30;
}

float AYuan(float cantMonedas){
	return cantMonedas/7.07;
}

float AEuro(float cantMonedas){
	return cantMonedas/0.88;
}

float ARealBrasil(float cantMonedas){
	return cantMonedas/5.06;
}

float APesoArgentino(float cantMonedas){
	return cantMonedas/69.31;
}

void main(){
    //declaracones
    float cantMonedas =0 ,equivaEnDolar = 0;
    int tipoMoneda; char *seguir;

    do{
        //instrucciones
            printf("Aeropuerto Internacional de Tocumen\n Seleccione el tipo de moneda a cambiar");
            printf(" \n 1.Bolivar Venezolano");
            printf("\n 2.Dolar Canadiense");
            printf("\n 3.Libra");
            printf("\n 4.Peso Colombiano");
            printf("\n 5.Peso Mexicano");
            printf("\n 6.Yen");
            printf("\n 7. Yuan");
            printf("\n 8.Euro");
            printf("\n 9.Real brasileño");
            printf("\n 10.Peso Argentino");

            printf("\nIngrese el numero entero que corresponde a la moneda:\n");
            scanf("%d",&tipoMoneda);
            system("cls");
            //switch para determinar el tipo de moneda
            switch(tipoMoneda){
                case 1:
                    printf("Moneda ingresada: Bolivar Venezolano \nEquivalente a un dolar:32738.48");
                    printf("\nIngrese un numero entero que corresponde a la moneda:\n");
                    scanf("%f",&cantMonedas);
                    equivaEnDolar = ABolivarVenezolano(cantMonedas);
                break;
                case 2:
                    printf("Moneda ingresada: Dolar Canadiense \nEquivalente a un dolar:1.35");
                    printf("\nIngrese un numero entero que corresponde a la moneda:\n");
                    scanf("%f",&cantMonedas);
                    equivaEnDolar = ADolarCanadiense(cantMonedas);
                break;
                case 3:
                    printf("Moneda ingresada: Libra \nEquivalente a un dolar:0.78");
                    printf("\nIngrese un numero entero que corresponde a la moneda:\n");
                    scanf("%f",&cantMonedas);
                    equivaEnDolar= ALibra(cantMonedas);
                break;
                case 4:
                    printf("Moneda ingresada: Peso Colombiano\nEquivalente a un dolar:3777.51");
                    printf("\nIngrese un numero entero que corresponde a la moneda:\n");
                    scanf("%f",&cantMonedas);
                    equivaEnDolar= APesoColombiano(cantMonedas);
                break;
                case 5:
                    printf("Moneda ingresada: Peso Mexicano\nEquivalente a un dolar:21.98");
                    printf("\nIngrese un numero entero que corresponde a la moneda:\n");
                    scanf("%f",&cantMonedas);
                    equivaEnDolar= APesoMexicano(cantMonedas);
                break;
                case 6:
                    printf("Moneda ingresada: Yen\nEquivalente a un dolar:107.30");
                    printf("\nIngrese un numero entero que corresponde a la moneda:\n");
                    scanf("%f",&cantMonedas);
                    equivaEnDolar= AYen(cantMonedas);
                break;
                case 7:
                    printf("Moneda ingresada: Yuan\nEquivalente a un dolar:7.07");
                    printf("\nIngrese un numero entero que corresponde a la moneda:\n");
                    scanf("%f",&cantMonedas);
                    equivaEnDolar= AYuan(cantMonedas);
                break;
                case 8:
                    printf("Moneda ingresada: Euro\nEquivalente a un dolar:0.88");
                    printf("\nIngrese un numero entero que corresponde a la moneda:\n");
                    scanf("%f",&cantMonedas);
                    equivaEnDolar= AEuro(cantMonedas);
                break;
                case 9:
                    printf("Moneda ingresada: Real Brasileño\nEquivalente a un dolar:5.06");
                    printf("\nIngrese un numero entero que corresponde a la moneda:\n");
                    scanf("%f",&cantMonedas);
                    equivaEnDolar= ARealBrasil(cantMonedas);
                break;
                case 10:
                    printf("Moneda ingresada: Peso Argentino\nEquivalente a un dolar:69.31");
                    printf("\nIngrese un numero entero que corresponde a la moneda:\n");
                    scanf("%f",&cantMonedas);
                    equivaEnDolar= APesoArgentino(cantMonedas);
                break;

            }
            //salida, cantidad equivalente en dolares
             printf("La cantidad en dolares es:%.2f\n",equivaEnDolar);

             printf("\n¿Seguir (s/n)?\n");
             scanf(" %c", seguir[0]);
    }while(seguir == "s");


}
