/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void main(){
    //declaracones
    char cod[5];
    float precio;
    //instrucciones
    printf("Ingrese el codigo barra:\n");
    scanf("%s",&cod);
    //Validadcion de codigo ingresado y salidas debidas.
    if(strcmp(cod, "H1001")==0)
        printf("Producto: Martillo\nMarca: Generico\nPrecio:5.99");

   else if(strcmp(cod, "H1002")==0)
        printf("Producto: Destornillador de Estrella\nMarca: Stanley\nPrecio:2.99");

    else if(strcmp(cod, "H1003")==0)
        printf("Producto: Cinta metrica\nMarca: Stanley\nPrecio:8.99");

    else if(strcmp(cod, "H1004")==0)
        printf("Producto: Alicate\nMarca: Stanley\nPrecio:5.99");

    else if(strcmp(cod, "H1005")==0)
        printf("Producto: Serrucho\nMarca: Generico\nPrecio:6.99");

     else if(strcmp(cod, "H1006")==0)
        printf("Producto: Pinza de presion\nMarca: Stanley\nPrecio:3.99");

     else if(strcmp(cod, "P1001")==0)
        printf("Producto: Anticorrosivo rojo 1  lts\nMarca: Lanco\nPrecio:7.99");

    else
        printf("Codigo incorrecto");
}
