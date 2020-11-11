//Robert Lu Zheng 3-750-1980 |  1IL112

//Elabore un programa que le pida dos valores num�ricos y el usuario pueda elegir para realizar una
//operaci�n matem�tica que puede ser suma, resta, multiplicaci�n o divisi�n. Se deber� imprimir
//el resultado que el usuario seleccione. Utilice una funci�n con retorno para calcular la operaci�n
//matem�tica.


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
	printf("Introduzca el n�mero 1: ");
	scanf("%f", &a);

	printf("Introduzca el n�mero 2: ");
	scanf("%f", &b);

	printf("Introduzca la operaci�n a realizar (Seleccione el numero de la operacion)\n");
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
