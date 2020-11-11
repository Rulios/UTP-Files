//Robert Lu Zheng 

//. Elabore un programa en C donde cargue un arreglo de 11X21 con unos (1) y cuatros (4) con ciclo
//repetitivos de manera que quede almacenado que los 4 formen un triángulo, luego recorra el
//arreglo para realizar la impresión que quede de la siguiente manera.

#include <stdio.h>

int main(){
	
	int matriz[11][21];
	int i, y, contador;
	int Robert = 21 / 2; //eje inicial
	//llenar la matriz
	for(i = 0; i < 11; i++){ //recorrer las filas
		for(y = 0; y < 21; y++){
			if(y >= Robert - i && y <= Robert + i){
				matriz[i][y] = 4;
			}else{
				matriz[i][y] = 1;
			}
		}
	}
	
	//Mostrar la matriz
	for(i =0; i < 11; i++){
		for(y = 0; y < 21; y++){
			printf("%i", matriz[i][y]);
		}
		printf("\n");
	}
	
	return 0;
}
