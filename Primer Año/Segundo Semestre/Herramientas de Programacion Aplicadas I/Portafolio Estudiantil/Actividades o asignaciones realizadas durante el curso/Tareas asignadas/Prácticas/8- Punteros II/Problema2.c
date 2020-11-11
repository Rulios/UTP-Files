//Robert Lu Zheng 3-750-1980 | 1IL112

#include <stdio.h>

// En un puesto de control sanitario se está probando un sensor para medir las temperaturas de las
//personas que entran caminando a un centro comercial. Se pide un programa para registrar las
//temperaturas y edad de todas las personas que pasan por el control en un día; además,
//imprimir el promedio de todas temperaturas registradas, la cantidad y porcentaje de
//personas con temperatura mayor a 37°C; además, de la temperatura más alta y baja
//reportado.
//• Se le debe preguntar a usuario temperaturas de personas va a registrar.
//• Las temperaturas se deben almacenar en un arreglo.
//• Finalmente, se debe imprimir todas las temperaturas registrados de mayor a
//menor con su respectiva edad de la persona.
//• El registro de las temperaturas puede ser en decimal.
//• No se sabe la cantidad de temperatura que se va a registra en el sistema.

float SumaDeTemperaturas(float temperaturas[], int cantidadTemperatura){
	int i = 0;
	float total = 0;
	for(i = 0; i< cantidadTemperatura; i++){
		total += temperaturas[i];
	}
	return total;
}

float EncontrarTemperaturaMasBaja(float temperaturas[], int cantidadTemperatura){
	int i =0 ; 
	float temperaturaMenor = temperaturas[0];
	for(i = 0; i< cantidadTemperatura; i++){
		if(temperaturas[i] < temperaturaMenor) temperaturaMenor = temperaturas[i];
	}
	return temperaturaMenor;
}

float EncontrarTemperaturaMasAlta(float temperaturas[], int cantidadTemperatura){
	int i =0 ; 
	float temperaturaMayor= 0;
	for(i = 0; i< cantidadTemperatura; i++){
		if(temperaturas[i] > temperaturaMayor) temperaturaMayor = temperaturas[i];
	}
	return temperaturaMayor;
}

float PromedioDeTemperaturas(float temperaturas[], int cantidadTemperatura){
	return SumaDeTemperaturas(temperaturas, cantidadTemperatura) / cantidadTemperatura;
}
int CantidadMayorA37C(float temperaturas[], int cantidadTemperatura){
	int i =0;
	int cantidad = 0;
	for(i = 0; i < cantidadTemperatura; i++){
		if(temperaturas[i] > 37) cantidad++;
	}
	return cantidad;
}

//algoritmo de ordenamiento ///////////////////////////////////////////////////////////////

void swap(float *a, float *b){
    int temp = *a;
	*a = *b;
	*b = temp;
}

void PrintAllEl(float *arr, int l){
	int i= 0;
	for(i = 0; i< l; i++){
		printf("%.2f \n", arr[i]);
	}
}

//Reverse BubbleSort

void ReverseBubbleSort(float arr[], int cantidad){
	
	int i = 0, z = 0;
	
	for(i = 0; i < cantidad; i ++){
		for(z = i+1; z < cantidad; z++){
			if(arr[i] < arr[z]){
				swap(&arr[i], &arr[z]);
				
			}
		}
	
	}
	
}

///////////////////////////////////////////////////////////////////////////////////////////////////

int main (){
	
	float Robert = 0;
	float pesoTotal = 0;
	float pesoMenor = 0, pesoMayor = 0;
	int cantidadTemperatura = 0;
	int temperaturasMayorA37C = 0;
	float temperaturas[10000];
	
	int i = 0;
	
	printf("Introduzca la cantidad de temperaturas a registrar:");
	scanf("%i", &cantidadTemperatura);
	
	
	for(i = 0; i < cantidadTemperatura; i++){
		printf("Introduzca la temperatura de la persona #%i: ", i+1);
		scanf("%f", &temperaturas[i]);
		system("cls");
	}
	
	//ordenar el arreglo
	ReverseBubbleSort(temperaturas, cantidadTemperatura);
	
	temperaturasMayorA37C = CantidadMayorA37C(temperaturas, cantidadTemperatura);
	

	printf("\n Total de temperaturas registradas °C: %.2f\n", SumaDeTemperaturas(temperaturas, cantidadTemperatura));
	printf("Temperatura Promedio en °C: %.2f\n", PromedioDeTemperaturas(temperaturas, cantidadTemperatura));
	printf("Cantidad de temperaturas que son mayores a 37°C %i | Porcentaje: %.2f%%\n", temperaturasMayorA37C, (float)temperaturasMayorA37C/cantidadTemperatura * 100);
	printf("Temperatura Mayor: %.2fT\n", EncontrarTemperaturaMasAlta(temperaturas, cantidadTemperatura));
	printf("Temperatura Menor: %.2fT", EncontrarTemperaturaMasBaja(temperaturas, cantidadTemperatura));
	
	printf("\n\n ////TEMPERATURAS DE LAS PERSONAS POR ORDEN DESCENDENTE///////////////////\n\n");
	PrintAllEl(temperaturas, cantidadTemperatura);
	
	
	
	return 0;
}
