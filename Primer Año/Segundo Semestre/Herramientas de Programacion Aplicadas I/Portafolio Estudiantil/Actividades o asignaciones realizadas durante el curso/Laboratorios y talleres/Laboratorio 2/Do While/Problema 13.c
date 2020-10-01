#include <stdio.h>

int main() {
    int i = 1;
    float a[10], gran;
    do {
        printf("Introduzca el valor de la propuesta %d\n", i);
        scanf("%f", &a[i]);
        ++i;
        }
    while (i <= 10); {
    ++i;
    }
 //a[0] es la mas grande
    gran = a[0];
    i = 0;
    do
    {
       if (a[i] > gran) {
    gran = a[i];
        }
   i++;
    }
    while (i <= 10);
        printf("La oferta mas grande es %f", gran);
        return 0;
}
