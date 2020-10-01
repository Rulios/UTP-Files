/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */


#include<stdio.h>

void main(){
    //Declaraciones
    float cotizacion,masbaja=0,promedio;
    int x,y=0;
    //Instrucciones
    do{
        printf("Ingrese la cotizacion # %d: \n",x+1);
        scanf("%f",&cotizacion);
        if(cotizacion<0)
            printf("Valor de la cotizacion invalido");
        else{
            if(cotizacion<masbaja||masbaja==0){
                masbaja=cotizacion;
                y=(x+1);
                }
            promedio+=cotizacion;
            }
        x+=1;
    }while(x<8);


    //calculo del promedio
    promedio=promedio/(x);
    //Salidas
    printf("\nLa  cotizacion # %d es la mas baja: $%.2f:",y,masbaja);
    printf("\nEl promedio de las cotizaciones es: %.2f",promedio);
}
