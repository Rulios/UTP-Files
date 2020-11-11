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

//REALIZAR EL PROGRAMA CON 2 FUNCIONES

#include <stdio.h>

const MAXSIZE = 8;
void MostrarAsientos(int asientos[][MAXSIZE],int filas,int columnas){
	int i, y;

	//imprimir encabezado de columnas
	printf("\t");
	for(i = 0; i < columnas; i++){
		printf("%i\t", i);
	}
	printf("\n");
	
	for(i = 0; i < filas; i++){
		printf("%i\t", i);
		for(y = 0; y < columnas; y++){
			printf("%i|\t", asientos[i][y]);
		}
		printf("\n");
	}
}

int ComprobarDisponibilidadDeAsiento(int asientos[][MAXSIZE],int fila, int columna){
	int estaDisponible =0;
	if((fila % 2 == 0 && columna % 2 ==0) || (fila % 2 != 0 && columna %2 != 0) || asientos[fila][columna] == 88){
		estaDisponible = 0;
	}else{
		estaDisponible = 1;	
	}
	return estaDisponible;
}

int main(){
	int asientos[MAXSIZE][MAXSIZE];
	int seguir = 0;
	int asientosLlenos = 0;
	const Robert = 32; //constante que muestra la máxima capacidad de una sala
	int fila = -1, columna = -1; 
	
	//inicializar con 11s
	int i, y;
	for(i =0; i < MAXSIZE; i ++){
		for(y = 0; y < MAXSIZE; y ++){
			asientos[i][y] = 11;
		}
	}

	
	do{
		printf("BIENVENIDOS A LA NUEVA NORMALIDAD DE CINEPOLIS\n");
		printf("Las nuevas reglas para mantener las distancias son: \n");
		printf("1- Por cada sala no puede haber más de 32 asientos llenos\n");
		printf("2- No se puede escoger asientos donde las filas y las columnas son unilateralmente pares o impares\n");
		printf("3- No se puede escoger un asiento ya escogido duuhhh obvio\n");
		printf("4- Disfruta de la pelicula!\n\n");
		
		printf("Formato: 11 = libre | 88 = escogido\n\n");
	
		MostrarAsientos(asientos, MAXSIZE,MAXSIZE);
		
		do{
			printf("\nIntroduce la fila del asiento:");
			scanf("%i", &fila);
			printf("Introduce la columna del asiento:");
			scanf("%i", &columna);
			if(!ComprobarDisponibilidadDeAsiento(asientos,fila,columna)) printf("\nERROR MIRE LAS REGLAS\n");
		}while(!ComprobarDisponibilidadDeAsiento(asientos,fila, columna));
		
		asientosLlenos+=1;
		asientos[fila][columna] = 88;

		printf("Seguir? (1 para si / 0 para no)\n");
		scanf("%i", &seguir);
		
		system("cls");
		
	}while(seguir == 1 && asientosLlenos < Robert);
	
	printf("\n¡SALA INICIADA!\n");
	
	return 0;
}
