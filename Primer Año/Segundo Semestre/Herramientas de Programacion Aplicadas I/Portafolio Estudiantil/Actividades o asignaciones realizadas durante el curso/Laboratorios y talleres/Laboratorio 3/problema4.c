//Robert Lu Zheng 3-750-1980 | 1IL112


// En la nueva normalidad el estado dio autorización para la apertura de las salas de cine. Se
//requiere un prototipo desarrollado en C para la reservación de asientos.
//
//a. Primero deberá cargar un arreglo 8X8 con valores de 11 onces e imprimir en la pantalla
//una matriz como está la siguiente figura con las posiciones indicadas.
//
//b. La matriz deberá actualizarse cada vez que se haga una reservación con un 88 en la
//posición vendida
//
//c. No se pueden vender las posiciones donde la fila y columna son número impar y donde
//la fila y la columna son números par. Además, no se puede vender más posiciones de la
//capacidad establecida.
//
//d. Investigue sobre funciones para limpiar pantalla en el lenguaje C. El programa dejara de
//funcionar hasta que el usuario decida o se vendan todas las posiciones disponibles.

#include <stdio.h>

const MAXSIZE = 8;

int main(){
	int asientos[MAXSIZE][MAXSIZE];
	int seguir = 0;
	int asientosLlenos = 0;
	const maxCapacidad = 32;
	int fila = -1, columna = -1; 
	int Robert =0; //variable condicional para determinar si el usuario quiere continuar con el programa
	
	//inicializar con 11s las filas y las columnas
	int i, y;
	for(i =0; i < MAXSIZE; i ++){
		for(y = 0; y < MAXSIZE;y ++){
			asientos[i][y] = 11;
		}
	}
	
	do{ //Menu de reglas
		printf("BIENVENIDOS A LA NUEVA NORMALIDAD DE CINEPOLIS\n");
		printf("Las nuevas reglas para mantener las distancias son: \n");
		printf("1- Por cada sala no puede haber más de 32 asientos llenos\n");
		printf("2- No se puede escoger asientos donde las filas y las columnas son unilateralmente pares o impares\n");
		printf("3- No se puede escoger un asiento ya escogido duuhhh obvio\n");
		printf("4- Disfruta de la pelicula!\n\n");
		
		printf("Formato: 11 = libre | 88 = escogido\n\n");
		
		//Mostrar los asientos 
		//imprimir encabezado de columnas
		printf("\t");
		for(i = 0; i < MAXSIZE; i++){
			printf("%i\t", i);
		}
		printf("\n");
		
			
		//Imprimir las filas
		for(i = 0; i < MAXSIZE; i++){
			printf("%i\t", i);
			//imprimir las columnas y |
			for(y = 0; y < MAXSIZE; y++){
				printf("%i|\t", asientos[i][y]);
			}
			printf("\n");
		}
		
		
		do{ //Preguntar por el asiento hasta que este correcto
			
			
			printf("\nIntroduce la fila del asiento:");
			scanf("%i", &fila);
			printf("Introduce la columna del asiento:");
			scanf("%i", &columna);
			
			if((fila % 2 == 0 && columna % 2 ==0) || (fila % 2 != 0 && columna %2 != 0) || asientos[fila][columna] == 88){
				Robert = 0;
			}else{
				Robert = 1;	
			}
			
			if(!Robert) printf("\nERROR MIRE LAS REGLAS\n");
		}while(!Robert); 
		
		asientosLlenos+=1;
		asientos[fila][columna] = 88;

		printf("Seguir? (1 para si / 0 para no)\n");
		scanf("%i", &seguir); 
		
		system("cls");
		
	}while(seguir == 1 && asientosLlenos < maxCapacidad);
	
	printf("\n¡SALA INICIADA!\n");
	
	return 0;
}
