#include <stdio.h>

int main() {
    int i = 1;
    float a[10], gran;
    while (i <= 10)
    {
        printf("Introduzca el valor de la propuesta %d\n", i);
        scanf("%f", &a[i]);
        ++i;
    }
 //a[0] es la mas grande
    gran = a[0];
    i = 0;
    while (i <= 10) {
        i++;
    if (a[i] > gran) {
    gran = a[i];
        }
        }
        printf("La oferta mas grande es %f", gran);
        return 0;
}
