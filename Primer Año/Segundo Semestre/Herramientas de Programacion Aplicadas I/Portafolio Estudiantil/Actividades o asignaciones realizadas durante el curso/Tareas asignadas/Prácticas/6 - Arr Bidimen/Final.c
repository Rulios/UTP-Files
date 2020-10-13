//Robert Lu Zheng 3-750-1980 | 1IL112
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

void InicializarAsientos(int asientos[][MAXSIZE], int filas, int columnas){
	int i, y;
	for(i =0; i < filas; i ++){
		for(y = 0; y < columnas; y ++){
			asientos[i][y] = 11;
		}
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
	const maxCapacidad = 32;
	int fila = -1, columna = -1; 
	//inicializar con 11s
	InicializarAsientos(asientos, MAXSIZE,MAXSIZE);
	
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
		
	}while(seguir == 1 && asientosLlenos < maxCapacidad);
	
	printf("\n¡SALA INICIADA!\n");
	
	return 0;
}
