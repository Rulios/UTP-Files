//Robert Lu Zheng 3-750-1980 1IL112

//Revisar el c�digo fuente del ejemplo completo publicado en Moodle, y elaborar un programa para
//almacenar datos de veh�culos utilizando archivos. Se debe almacenar en el archivo informaci�n
//de veh�culos, los cuales son: C�digo de veh�culo (num�rico), marca, modelo, costo y cantidad. El
//programa deber� tener un men� para agregar, mostrar, eliminar y actualizar informaci�n. (Valor
//50%)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 256
char entradaNum[MAX]; //variable global

struct Vehiculo {
	int codigo;
	char marca[MAX];
	char modelo[MAX];
	float costo;
	int cantidad;
};

void titulo(){
	printf("----CONCESIONARIO DE AUTOS------\n");
}

void BorrarSaltoDeLinea(char texto[]){
	texto[strlen(texto) - 1] = '\0';
}

int InsertarVehiculo(struct Vehiculo vehiculo);

void menuContinuar();
void menuPrincipal();
void menuAgregar();
void menuMostrar();
void menuModificar();
void menuEliminar();
struct Vehiculo * ConsultarVehiculos();
int BuscarVehiculoPorCodigo(struct Vehiculo vehiculos[], int nVehiculos, int codigo);
int ModificarVehiculos(struct Vehiculo vehiculos[], int nVehiculos, int iModificado);

int main(){
	setlocale(LC_ALL, "spanish"); /* Permite imprimir caracteres con tilde */
	menuPrincipal();
	
	return 0;
}

void menuPrincipal(){
	
	int Robert = 0;
	
	titulo();
	printf("1. Agregar vehiculo\n");
	printf("2. Mostrar veh�culos\n");
	printf("3. Modificar veh�culo\n");
	printf("4. Eliminar veh�culo\n");
	printf("5. Salir\n");
	printf("Introduzca la opci�n de acuerdo con la numeraci�n: ");
	fgets(entradaNum, MAX, stdin);
	Robert = atoi(entradaNum);
	
	system("cls");
	
	switch(Robert){
		
		case 1:
			menuAgregar();
		break;
		
		case 2:
			menuMostrar();
		break;
		
		case 3:
			menuModificar();
		break;
		
		case 4:
			menuEliminar();
		break;
		
		case 5:
			system("close");
		break;
	}
}


void menuAgregar(){
	int nVehiculos = 0;
	struct Vehiculo *vehiculos = ConsultarVehiculos(&nVehiculos);
	struct Vehiculo nuevoVehiculo;
	
	int existeCodigo = -1;
	
	titulo();
	do{
		printf("Introduzca el c�digo del veh�culo: ");
		fgets(entradaNum,MAX, stdin);
		//verificar si el c�digo insertado existe
		existeCodigo = BuscarVehiculoPorCodigo(vehiculos, nVehiculos, atoi(entradaNum));
		if(existeCodigo != -1) printf("ERROR, ESE C�DIGO YA EXISTE\n");
	}while(existeCodigo != -1);
	
	//a�adir a la estructura
	nuevoVehiculo.codigo = atoi(entradaNum);
	
	printf("Introduzca la marca del veh�culo: ");
	fgets(nuevoVehiculo.marca, MAX, stdin);
	BorrarSaltoDeLinea(nuevoVehiculo.marca);
	
	printf("Introduzca el modelo del veh�culo: ");
	fgets(nuevoVehiculo.modelo, MAX, stdin);
	BorrarSaltoDeLinea(nuevoVehiculo.modelo);
	
	printf("Introduzca el costo del veh�culo: "); 
	fgets(entradaNum, MAX, stdin);
	nuevoVehiculo.costo = atof(entradaNum);
	
	printf("Introduzca la cantidad del veh�culo: ");
	fgets(entradaNum, MAX, stdin);
	nuevoVehiculo.cantidad = atoi(entradaNum);
	
	if(InsertarVehiculo(nuevoVehiculo)){
		printf("VEH�CULO INSERTADO!\n");
	}else{
		printf("Error al insertar nuevo veh�culo\n");
	}
	menuContinuar();
}

void menuContinuar(){ //men� cuando se termina operaci�n
	printf("\nToque enter para continuar...");
	getchar();
	system("cls");
	menuPrincipal();
}

int InsertarVehiculo(struct Vehiculo vehiculo){
	FILE *archivo;
	
	//abrir el archivo
	archivo = fopen("vehiculos.txt", "ab");
	
	if(archivo == NULL){
		return 0; //no existe o no se pudo crear
	}else{
		fwrite(&vehiculo, sizeof(vehiculo), 1, archivo);
		fclose(archivo);
		return 1;
	}
}

struct Vehiculo * ConsultarVehiculos(int *numVehiculos){
	FILE *archivo;
	struct Vehiculo * vehiculos; //conjunto de estructuras
	struct Vehiculo vehiculo; //estructura unitaria temporal para ser a�adida al conjunto de estructuras
	int i = 0;
	
	archivo = fopen("vehiculos.txt", "rb"); //modo lectura
	
	if(archivo == NULL){ //no se pudo abrir el archivo
		*numVehiculos = 0;
		vehiculos = NULL;		
	}else{
		fseek(archivo, 0, SEEK_END); //poner el puntero al final del documento de datos
		
//		ftell indica la posici�n del puntero actual. Por lo tanto, al dividirlo por 
//		el tama�o que ocupa la estructura Vehiculo, nos da la cantidad de veh�culos insertados.
//		Es importante recordar que el puntero del archivo tambi�n nos muestra el tama�o de datos
//		guardados.
		*numVehiculos = ftell(archivo) / sizeof(struct Vehiculo); 
		
		
		//din�micamente alojar espacio en la memoria dependiendo de 
		//la cantidad de vehiculos almacenados en el documento
		vehiculos = (struct Vehiculo*)malloc(*numVehiculos * sizeof(struct Vehiculo));
		
		fseek(archivo, 0, SEEK_SET); //empezar a leer desde el comienzo
		
		//leer datos del tama�o de 1 estructura de Vehiculo del puntero archivo y
		// "parsearla" a la variable vehiculo
		fread(&vehiculo, sizeof(struct Vehiculo), 1, archivo);
		
		while(!feof(archivo)){ //mientras no se est� al final del archivo
			vehiculos[i++] = vehiculo;
			fread(&vehiculo, sizeof(vehiculo), 1, archivo);
		}
		fclose(archivo);
	}
	return vehiculos;
	
}

void menuMostrar(){
	int nVehiculos = 0;
	int i = 0;
	

	
	struct Vehiculo * vehiculos = ConsultarVehiculos(&nVehiculos);
	
	
	titulo();
	printf("\n");
	
	if(!nVehiculos){
		printf("NO HAY VEH�CULOS PARA MOSTRAR\n");
	}
	
	for(i = 0; i < nVehiculos; i++){
		printf("Vehiculo #%i\n", i+1);
		printf("C�digo: %i\n",  vehiculos[i].codigo);
		printf("Marca: %s\n", vehiculos[i].marca);
		printf("Modelo: %s\n", vehiculos[i].modelo);
		printf("Costo: $%.2f\n", vehiculos[i].costo);
		printf("Cantidad: %i\n", vehiculos[i].cantidad);
		
		printf("\n");
	}
	
	menuContinuar();
}

void menuModificar(){
	int nVehiculos = 0;
	int i = 0, codigoABuscar = 0, iAModificar = -1, propAModificar = 0;
	
	struct Vehiculo * vehiculos = ConsultarVehiculos(&nVehiculos);
	
	titulo();
	printf("\n");
	
	if(!nVehiculos){
		printf("NO HAY VEH�CULOS PARA MOSTRAR\n");
		menuContinuar();
	}else{
		//Mostrar los c�digos de los vehiculos y dejar que el usuario seleccione
		printf("C�DIGOS DE VEH�CULOS:\n");
		for(i = 0; i < nVehiculos ; i++){
			printf("-%i\n", vehiculos[i].codigo);
		}
		
		do{
			printf("Introduzca el codigo del veh�culo a modificar: ");
			fgets(entradaNum, MAX, stdin);
			codigoABuscar = atoi(entradaNum);
			
			iAModificar = BuscarVehiculoPorCodigo(vehiculos, nVehiculos, codigoABuscar);
			
			if(iAModificar < 0) printf("ERROR, INTRODUZCA UN C�DIGO QUE SE MUESTRA EN PANTALLA\n");
		}while(iAModificar < 0);
		
		do{
			printf("Propiedades para modificar:\n");
			printf("1. Marca\n");
			printf("2. Modelo\n");
			printf("3. Costo\n");
			printf("4. Cantidad\n");
			printf("Seleccione la propiedad a modificar de acuerdo con la numeraci�n: ");
			fgets(entradaNum, MAX, stdin);
			
			propAModificar = atoi(entradaNum);
			if(propAModificar < 1 && propAModificar > 4) printf("ERROR, INTRODUZCA LA NUMERACI�N CORRECTA");
		}while(propAModificar < 1 && propAModificar > 4);
		
		switch(propAModificar){
			case 1:
				printf("Introduzca una nueva marca: ");
				fgets(vehiculos[iAModificar].marca, MAX, stdin);
				BorrarSaltoDeLinea(vehiculos[iAModificar].marca);
			break;
			
			case 2:
				printf("Introduzca un nuevo modelo: ");
				fgets(vehiculos[iAModificar].modelo, MAX, stdin);
				BorrarSaltoDeLinea(vehiculos[iAModificar].modelo);
			break;
			
			case 3:
				printf("Introduzca un nuevo costo: ");
				fgets(entradaNum, MAX, stdin);
				vehiculos[iAModificar].costo = atof(entradaNum);
			break;
			
			case 4:
				printf("Introduzca una nueva cantidad: ");
				fgets(entradaNum, MAX, stdin);
				vehiculos[iAModificar].cantidad = atoi(entradaNum);
			break;
		}
		if(ModificarVehiculos(vehiculos, nVehiculos, iAModificar)){
			printf("\nBASES DE DATOS DE VEH�CULOS MODIFICADOS CORRECTAMENTE!\n");
		}else{
			printf("\nERROR NO SE HA PODIDO MODIFICAR LA BASE DE DATOS DE VEH�CULOS\n");
		}
	}
	menuContinuar();
}

void menuEliminar(){
	
	int nVehiculos = 0;
	int i = 0, codigoABuscar = 0, iAEliminar = -1;
	
	struct Vehiculo * vehiculos = ConsultarVehiculos(&nVehiculos);
	
	titulo();
	printf("\n");
	
	if(!nVehiculos){
		printf("NO HAY VEH�CULOS PARA MOSTRAR\n");
		menuContinuar();
	}else{
		//Mostrar los c�digos de los vehiculos y dejar que el usuario seleccione
		printf("C�DIGOS DE VEH�CULOS:\n");
		for(i = 0; i < nVehiculos ; i++){
			printf("-%i\n", vehiculos[i].codigo);
		}
		
		do{
			printf("Introduzca el codigo del veh�culo a eliminar: ");
			fgets(entradaNum, MAX, stdin);
			codigoABuscar = atoi(entradaNum);
			
			iAEliminar = BuscarVehiculoPorCodigo(vehiculos, nVehiculos, codigoABuscar);
			
			if(iAEliminar < 0) printf("ERROR, INTRODUZCA UN C�DIGO QUE SE MUESTRA EN PANTALLA\n");
		}while(iAEliminar < 0);
		
		if(EliminarVehiculo(vehiculos, nVehiculos, codigoABuscar)){
			printf("\nVEHICULO ELIMINADO CORRECTAMENTE DE LA BASE DE DATOS\n");
		}else{
			printf("\nERROR, NO SE HA PODIDO ELIMINAR EL VEHICULO DE LA BASE DE DATOS\n");
		}
	}
	menuContinuar();
	
}

int ModificarVehiculos(struct Vehiculo vehiculos[], int nVehiculos, int iModificado){
	FILE *archivo;
	int i = 0;
	//abrir el archivo

	//archivo = fopen("vehiculos.txt", "rb+");
	archivo = fopen("vehiculos.txt", "wb");
	
	if(archivo == NULL){
		return 0; //no existe o no se pudo crear
	}else{
		
		//M�TODO DE MODIFICACI�N #1:
		//Sobrescribir todo el archivo con las estructuras
		for(i = 0; i < nVehiculos; i++){
			fwrite(&vehiculos[i], sizeof(vehiculos[0]), 1, archivo);
		}
		fclose(archivo);
		return 1;
	}
}

int EliminarVehiculo(struct Vehiculo vehiculos[], int nVehiculos, int codigo){
	FILE *archivo;
	int i = 0;
	
	archivo = fopen("vehiculos.txt", "wb");
	
	if(archivo == NULL){
		return 0; //no existe o no se pudo crear
	}else{
		for(i = 0; i < nVehiculos; i++){
			//iterar por todos los veh�culos
			//si encuentra que el c�digo de un veh�culo es el mismo al que se quiere eliminar
			//simplemente lo ignora y no lo guarda en en fichero
			if(vehiculos[i].codigo != codigo){ 
				fwrite(&vehiculos[i], sizeof(vehiculos[0]), 1, archivo);
			}
		}
		fclose(archivo);
		return 1;
	}
}

int BuscarVehiculoPorCodigo(struct Vehiculo vehiculos[], int nVehiculos,int codigo){
	//esta funci�n va a iterar hasta que se encuentre el vehiculo 
	//debe retornar el indice en donde se encuentre el vehiculo en el conjunto de estructura
	int i = 0;
	
	for(i = 0; i < nVehiculos; i++){
		if(vehiculos[i].codigo == codigo) return i;
	}
	return -1; //no se encontr�
}




