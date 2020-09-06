#include <stdio.h>

int main(){
	float precio = 0;
	
	printf("Introduzca el precio del producto \n");
	scanf("%f", &precio);
	precio *= 1.07; //multiplicar por sí mismo aumentando un 0.07 del mismo
	printf("El precio con ITBMS 7 porciento  es de: %.2f", precio);
	return 0;
}

