//Robert Lu Zheng 3-750-1980

// Elabore un programa en C donde cargue un arreglo de 11X21 con unos (0) y sietes (7)
//utilizando ciclos repetitivos de manera que quede almacenado en el arreglo un
//triángulo invertido con los números 7, luego recorra el arreglo con ciclos repetitivos
//para realizar la impresión que quede de la siguiente manera. Utilice un identificador con
//su nombre para un contador.


#include <stdio.h>

int main(){
	
	int arreglo[11][21];
	int Robert = 0, i = 0; //contador

	for(i = 0; i < 11; i++){
		
		for(Robert = 0; Robert < 21; Robert++){
			if(Robert >= i && Robert <= 20 - i){
				arreglo[i][Robert ]= 7;
			}else{
				arreglo[i][Robert ] = 0;
			}
		}

	}
	//imprimir el arreglo
	for(i = 0; i < 11; i++){
		for(Robert = 0; Robert < 21; Robert++){
			printf("%i", arreglo[i][Robert]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
