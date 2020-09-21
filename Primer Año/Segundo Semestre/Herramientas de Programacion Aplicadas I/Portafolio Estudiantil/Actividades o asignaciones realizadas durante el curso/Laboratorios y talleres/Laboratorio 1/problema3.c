/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */

#include <stdio.h>
//Calificacion final y si es una nota mas que 70
int main() {
   // Variables
   float nota1,nota2,nota3,notaT;
   printf("Ingrese las tres calificaciones una por una: ");
   scanf("%f%f%f", &nota1,&nota2,&nota3);

   //Suma de notas
   nota1 = nota1*.15;
   nota2 = nota2*.25;
   nota3 = nota3*.60;
   notaT = nota1+nota2+nota3;
   //Mayor o menor a 70
   if(notaT > 70) {
        printf("Es mayor a 70");
    }
    else {
        printf("No es mayor a 70");
        }
return 0;
}
