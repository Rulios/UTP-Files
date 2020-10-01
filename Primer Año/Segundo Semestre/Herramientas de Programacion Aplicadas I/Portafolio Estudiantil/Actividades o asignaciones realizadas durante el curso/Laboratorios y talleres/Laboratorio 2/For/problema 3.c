 #include <stdio.h>
  int main() {
    float a[10];
    int i;
    float gran;

    printf("Introduzca las 10 ofertas:");

    //10 numeros en un array
    for (i = 0; i < 10; i++) {
        scanf("%f", &a[i]);
    }

    //a[0] es la mas grande
    gran = a[0];
    for (i = 0; i < 10; i++) {
        if (a[i] > gran) {
            gran = a[i];
        }
    }

    printf("La oferta mas grande es %f", gran);
    return 0;
  }
