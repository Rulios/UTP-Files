/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */

#include <stdio.h>

int main(){
    //Elabore un programa que lea un carácter e imprima si es vocal o no.

    char caracter;
    int esVocal = 0;
    printf("Introduzca un caracter para verificar si es vocal o no: \n");
    caracter = getchar();

    //vocales : a,e,i,o,u
    switch(caracter){

        case 'a':
            esVocal = 1;
        break;

        case 'e':
            esVocal = 1;
        break;

        case 'i':
            esVocal = 1;
        break;

        case 'o':
            esVocal = 1;
        break;

        case 'u':
            esVocal = 1;
        break;

        default:
            esVocal = 0;
        break;
    }

    if(esVocal){
        printf("El caracter introducido anteriormente es una vocal");
    }else{
        printf("El caracter introducido no es una vocal");
    }



    return 0;
}
