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
