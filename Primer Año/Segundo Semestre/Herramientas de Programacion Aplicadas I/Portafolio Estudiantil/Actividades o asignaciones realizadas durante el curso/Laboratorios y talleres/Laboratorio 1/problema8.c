/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */


#include <stdio.h>

//8. Elabore un programa que lea un número entre 1 y 10 e imprima el texto del número inglés.

int main()
{
    int num;//variable que se va a usar para leer el numero ingresado

    //Bloque de instrucciones
    printf("Ingrese un numero del 1 al 10 para ver su escritura en inglés: ");
    scanf("%d",&num);

    switch(num){//esta operacion imprime el texto del numero en ingles

        case 1: printf("El numero %d en inglés se escribe: one",num);
                break;
        case 2: printf("El numero %d en inglés se escribe: two",num);
                break;
        case 3: printf("El numero %d en inglés se escribe: three",num);
                break;
        case 4: printf("El numero %d en inglés se escribe: four",num);
                break;
        case 5: printf("El numero %d en inglés se escribe: five",num);
                break;
        case 6: printf("El numero %d en inglés se escribe: six",num);
                break;
        case 7: printf("El numero %d en inglés se escribe: seven",num);
                break;
        case 8: printf("El numero %d en inglés se escribe: eight",num);
                break;
        case 9: printf("El numero %d en inglés se escribe: nine",num);
                break;
        case 10: printf("El numero %d en inglés se escribe: ten",num);
                break;
    }

    return 0;
}
