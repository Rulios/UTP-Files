/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Casta�eda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */

#include <stdio.h>

int main(){

//    . Elabore un programa que le pida dos valores num�ricos y el usuario pueda elegir para realizar
//una operaci�n matem�tica que puede ser suma, resta, multiplicaci�n o divisi�n. Se deber�
//imprimir el resultado que el usuario seleccione.

    int n1, n2;
    float total = 0; //por si se dan divisiones que dan a decimales
    char operacion;



    printf("Introduzca un n�mero:");
    scanf("%i", &n1);

    printf("Introduzca un n�mero:");
    scanf("%i", &n2);

    printf("Introduzca la operaci�n a realizar:\n");
    scanf(" %c", &operacion);


    switch(operacion){

        case '+':
            total = n1 + n2;
        break;

        case '-':
            total = n1 - n2;
        break;

        case '*':
            total = n1 * n2;
        break;

        case '/':
            total = n1 / n2;
        break;
    }

    //Esto se hace para determinar si el usuario eligi� una divisi�n
    //y el resultado es decimal.

    if(n1 % n2 != 0 && operacion == '/'){
        printf("El resultado es: %.2f", total);
    }else{
        printf("el resultado es: %.0f", total);
    }
    return 0;
}
