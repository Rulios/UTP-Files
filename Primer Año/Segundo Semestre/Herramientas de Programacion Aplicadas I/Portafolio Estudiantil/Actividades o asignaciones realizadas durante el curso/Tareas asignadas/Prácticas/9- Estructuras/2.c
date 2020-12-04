//Robert Lu Zheng 3-750-1980 1IL112

//Crear un programa en C utilizando estructura que almacene los datos de un grupo de
//10 vehículos con las siguientes características: Marca, Modelo, Año, Color y Número
//de Matrícula. Finalmente, el programa deberá permitir al usuario realizar búsqueda
//por marca o número de matrícula, indicando si el vehículo esta dentro del grupo de
//10 y si está, deberá imprimir el detalle de del vehículo.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Vehiculo{
	char marca[256];
	char modelo[256];
	int anio;
	char color[20];
	char matricula[20]
	
};

void BorrarSaltoDeLinea(char texto[]){
	texto[strlen(texto) - 1] = '\0';
}

int BusquedaPorMatricula(struct Vehiculo vehiculos[], int cVehiculos, char matricula[20]){
	int i = 0;
	for(i = 0; i < cVehiculos; i++){
		if(strcmp(matricula, vehiculos[i].matricula) == 0) return i; //retornar el indice de posicion
	}
	return -1; //no encontrado
}
int BusquedaPorMarca(struct Vehiculo vehiculos[], int cVehiculos, char marca[256]){
	int i = 0;
	for(i = 0; i < cVehiculos; i++){
		if(strcmp(marca, vehiculos[i].marca) == 0) return i; //retornar el indice de posicion
	}
	return -1; //no encontrado
}

int Busqueda(struct Vehiculo vehiculos[], int cVehiculos, int opcion, char valorBusqueda[256]){
	int indiceResultante = 0;
	switch(opcion){
		case 1: 
			indiceResultante = BusquedaPorMarca(vehiculos, cVehiculos, valorBusqueda);
		break;
		
		case 2:
			indiceResultante = BusquedaPorMatricula(vehiculos, cVehiculos, valorBusqueda);
		break;
		
	}
	return indiceResultante;
}


int main(){
	
	struct Vehiculo vehiculos[10];
	int i = 0, y = 0, seguir = 0;
	char entradaNum[10], busqueda[256];
	
	
	for(i = 0; i < 10; i++){
	
		printf("VEHICULO #%i\n\n", i+1);
		
		printf("Introduzca la marca del vehiculo: ");
		fgets(vehiculos[i].marca, 256, stdin);
		BorrarSaltoDeLinea(vehiculos[i].marca);
	
		printf("Introduzca el modelo del vehiculo:");
		fgets(vehiculos[i].modelo, 256, stdin);
		BorrarSaltoDeLinea(vehiculos[i].modelo);
		
		printf("Introduzca el año del vehiculo:");
		fgets(entradaNum, 10, stdin);
		BorrarSaltoDeLinea(entradaNum);
		vehiculos[i].anio = atoi(entradaNum);

		
		printf("Introduzca el color del vehiculo: ");
		fgets(vehiculos[i].color,20, stdin);
		BorrarSaltoDeLinea(vehiculos[i].color);
		
		printf("Introduzca la matricula del vehiculo: ");
		fgets(vehiculos[i].matricula,20, stdin);
		BorrarSaltoDeLinea(vehiculos[i].matricula);


		system("cls");
	
	}
	
	do{
		int indice = 0, opcion = 0;
		printf("----BUSQUEDA DE VEHICULO-----\n\n");
		printf("1 - Por marca\n");
		printf("2 - Por numero de matricula \n");
		
		printf("Ingrese la opcion (concorde a la numeracion): ");
		fgets(entradaNum, 10, stdin);
		opcion = atoi(entradaNum);
		
		printf("Ingrese el valor de busqueda: ");
		fgets(busqueda, 256, stdin);
		BorrarSaltoDeLinea(busqueda);
		
		indice = Busqueda(vehiculos, 10, opcion, busqueda);
		
		if(indice <= -1){
			printf("VEHICULO NO ENCONTRADO");
		}else{
			printf("\n----------VEHICULO ENCONTRADO--------------\n");
			printf("Detalles:\n\n");
			printf("Marca: %s\n", vehiculos[indice].marca);
			printf("Modelo: %s\n", vehiculos[indice].modelo);
			printf("Año: %i\n", vehiculos[indice].anio);
			printf("Color: %s\n", vehiculos[indice].color);
			printf("Numero de matricula: %s\n", vehiculos[indice].matricula);
		}
		
		
		printf("\n Seguir? (1 para si, 0 para no): ");
		fgets(entradaNum, 10, stdin);
		BorrarSaltoDeLinea(entradaNum);
		seguir = atoi(entradaNum);
		
	}while(seguir == 1);
	
	
	return 0;
	
}
