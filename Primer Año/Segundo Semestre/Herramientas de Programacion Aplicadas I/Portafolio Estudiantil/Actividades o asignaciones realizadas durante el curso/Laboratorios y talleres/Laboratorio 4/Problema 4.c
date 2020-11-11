
// Robert Lu Zheng 3-750-1980

//1. En el puesto de control de Peso y Dimensiones Vehiculares de La Chorrera, se está probando un
//sensor para registrar el peso de camiones que transita hacia el interior del país. Se pide un
//programa para registrar los pesos en Toneladas de todos los camiones de carga que pasan
//por el control en un día; además, imprimir el promedio de todos lo pesos registrados, la
//cantidad y porcentaje de camiones con peso mayor e igual a las 10 toneladas; además, del
//peso más alto y más bajo reportado.
//• Se le debe preguntar a usuario cuantos pesos de camiones va a registrar.
//• Los pesos en toneladas se deben almacenar en un arreglo.
//• Finalmente, se debe imprimir todos los pesos registrados de menor a mayor.
//• El registro de pesos en toneladas se puede dar en decimal.
//• No se sabe la cantidad de camiones que se va a registra en el sistema.

#include <stdio.h>
#include <stdlib.h>

float SumaDePesos(float pesos[], int cantidadCamiones){
	int i = 0;
	float total = 0;
	for(i = 0; i< cantidadCamiones; i++){
		total += pesos[i];
	}
	return total;
}

float EncontrarPesoMasBajo(float pesos[], int cantidadCamiones){
	int i =0 ; 
	float pesoMenor = pesos[0];
	for(i = 0; i< cantidadCamiones; i++){
		if(pesos[i] < pesoMenor) pesoMenor = pesos[i];
	}
	return pesoMenor;
}

float EncontrarPesoMasAlto(float pesos[], int cantidadCamiones){
	int i =0;
	float pesoMayor = 0;
	for(i = 0; i< cantidadCamiones; i++){
		if(pesos[i] > pesoMayor) pesoMayor = pesos[i];
	}
	return pesoMayor;
}

float PromedioDePesos(float pesos[], int cantidadCamiones){
	return SumaDePesos(pesos, cantidadCamiones) / cantidadCamiones;
}
int CantidadMayorIgualA10T(float pesos[], int cantidadCamiones){
	int i =0;
	int cantidad = 0;
	for(i = 0; i < cantidadCamiones; i++){
		if(pesos[i] >= 10) cantidad++;
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

int partition(float *arr, int left, int right, int pivot){
	while(left <= right)	{
		while(arr[left] < pivot){
			left++;
		}
		
		while(arr[right] > pivot){
			right --;
		}
		
		if(left <= right){
			swap(&arr[left], &arr[right]);
			left++;
			right--;
		}
	}
	return left;
}

int quicksort(float *arr, int left, int right){
	if(left >=right){
		return;
	}
	int pivote = arr[(left + right) / 2];
	int i = partition(arr,left,right,pivote);
	quicksort(arr,left, i-1);
	quicksort(arr, i, right);
}
 
void quicksortGen(float*arr, int length){
    quicksort(arr, 0, length -1);
} 

///////////////////////////////////////////////////////////////////////////////////////////////////

int main (){
	
	float Robert = 0;
	float pesoTotal = 0;
	float pesoMenor = 0, pesoMayor = 0;
	int cantidadCamiones = 0;
	int esNuevoCamion = 1;
	int camionesMayor10 = 0;
	float* pesos;
	int i = 0;
	
	//alojar espacio en la memoria
	pesos = (float*)malloc(1);
	
	
	printf("Introduzca la cantidad de camiones a registrar:");
	scanf("%i", &cantidadCamiones);
	
	//realojar dinámicamente espacio en la memoria dependiendo del tamaño del arreglo sugerido
	pesos = (float*)realloc(pesos,cantidadCamiones);
	
	for(i = 0; i < cantidadCamiones; i++){
		printf("Introduzca el peso en TONELADAS del camion #%i: ", i+1);
		scanf("%f", &pesos[i]);
		system("cls");
	}
	
	//ordenar el arreglo
	quicksortGen(pesos, cantidadCamiones);
	
	camionesMayor10 = CantidadMayorIgualA10T(pesos, cantidadCamiones);
	

	printf("\n Total de peso en TONELADAS de camiones registrados: %.2f\n", SumaDePesos(pesos, cantidadCamiones));
	printf("Peso promedio en TONELADAS: %.2f\n", PromedioDePesos(pesos, cantidadCamiones));
	printf("Cantidad de camiones que pesan mayor e igual a 10T: %i | Porcentaje: %.2f%%\n", camionesMayor10, (float)camionesMayor10/cantidadCamiones * 100);
	printf("Peso mayor: %.2fT\n", EncontrarPesoMasAlto(pesos, cantidadCamiones));
	printf("Peso menor: %.2fT", EncontrarPesoMasBajo(pesos, cantidadCamiones));
	
	printf("\n\n ////PESO DE LOS CAMIONES REGISTRADOS POR ORDEN ASCENDENTE///////////////////\n\n");
	PrintAllEl(pesos, cantidadCamiones);
	
	//liberar la basura
	free(pesos);
	
	return 0;
}
