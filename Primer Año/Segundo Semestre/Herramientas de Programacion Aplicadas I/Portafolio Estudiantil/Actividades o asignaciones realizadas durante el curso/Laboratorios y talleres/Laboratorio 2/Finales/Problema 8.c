/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */


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
