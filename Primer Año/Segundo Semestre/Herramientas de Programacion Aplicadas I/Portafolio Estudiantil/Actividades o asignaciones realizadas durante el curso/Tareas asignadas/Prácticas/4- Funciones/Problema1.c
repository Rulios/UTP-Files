#include <stdio.h>

float suma(float a ,float b){
	return (float)(a+b);
}

float resta (float a, float b){
	return (float)(a-b);
}

float division(float a, float b){
	return (float)(a/b);
}

float multiplicacion(float a, float b){
	return (float)(a * b);
}

int main(){

	float a = 0, b = 0, resultado = 0;
	int operacion = 0;
	printf("Introduzca el número 1: ");
	scanf("%f", &a);

	printf("Introduzca el número 2: ");
	scanf("%f", &b);

	printf("Introduzca la operación a realizar (Seleccione el numero de la operacion)\n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	printf("4. Division\n");
	scanf("%i", &operacion);

	switch(operacion){

		case 1:
			resultado = suma(a, b);
		break;

		case 2:
			resultado = resta(a,b);
		break;

		case 3:
			resultado = multiplicacion(a,b);
		break;

		case 4:
			resultado = division(a,b);
		break;

		default:
			printf("Error, no has introducido una operacion disponible\n");
			return 0;
		break;
	}

	printf("El resultado es: %.2f", resultado);


	return 0;
}
