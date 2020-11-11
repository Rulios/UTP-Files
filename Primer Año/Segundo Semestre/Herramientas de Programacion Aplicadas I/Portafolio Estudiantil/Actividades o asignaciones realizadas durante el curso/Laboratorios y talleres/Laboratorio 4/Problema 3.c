//Robert Lu Zheng 3-750-1980 1IL112

//Elaborar un programa para calcular el descuento del 25% de un total de venta si es mayor a $5000,
//Adem�s, del c�lculo del descuento si lo amerita deber� calcular el 7% de impuesto. Utilice una
//funci�n sin retorno y con punteros para realizar el c�lculo. Finalmente, se deber� imprimir el
//descuento, el cargo del 7% y el total final. El programa puede realizar n cantidad de ejecuci�n
//hasta que el usuario decida no continuar.

#include <stdio.h>

int calcularDescuento(float subtotal, float *total, float *descuento, float * impuesto){
	if(subtotal > 5000){
		//descuento
		*descuento = subtotal * 0.25;
	}
	
	*impuesto = (subtotal - *descuento) * 0.07;
	*total = subtotal - *descuento + *impuesto;
	
}

int main(){
	
	int Robert = 0;
	float subtotal = 0, total = 0, descuento = 0, impuesto = 0;
	
	do{
		
		printf("Introduzca el monto:");
		scanf("%f", &subtotal);
		
		calcularDescuento(subtotal, &total, &descuento, &impuesto);
		printf("Subtotal : %.2f\n", subtotal);
		printf("Descuento : %.2f\n", descuento);
		printf("Impuesto 7%% %.2f\n", impuesto);
		printf("Total = $%2.f\n", total);
		
		
		printf("\n �Seguir? (1 para si / 0 para no)");
		scanf("%i", &Robert);
	}while(Robert == 1);
	
	return 0;
}
