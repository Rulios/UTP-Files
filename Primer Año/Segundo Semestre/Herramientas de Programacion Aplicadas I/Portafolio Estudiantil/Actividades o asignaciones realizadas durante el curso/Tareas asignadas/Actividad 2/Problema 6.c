#include <stdio.h>

int main(){
    float p1, p2, p3, total, descuento;
    int isDis = 0;

    printf("Ingrese el precio del producto #1\n");
    scanf("%f", &p1);
    printf("Ingrese el precio del producto #2\n");
    scanf("%f", &p2);
    printf("Ingrese el precio del producto #3\n");
    scanf("%f", &p3);

    total = p1 + p2+ p3;

    if(total > 100){
        isDis = 1;
        descuento = total * 0.15;
        total -= descuento;
    }

    total *= 1.07;

    if(isDis == 1){
        printf("Obtuviste un descuento de:  $%.2f\n", descuento);
    }
    printf("Total: $%.2f\n", total);


    return 0;
}
