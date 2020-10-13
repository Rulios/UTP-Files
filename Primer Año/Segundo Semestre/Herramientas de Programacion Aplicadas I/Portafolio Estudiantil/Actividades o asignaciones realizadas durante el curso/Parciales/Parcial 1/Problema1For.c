// Robert Lu Zheng 3-750-1980

//En el puesto de control de Peso y Dimensiones Vehiculares de La Chorrera, se está
//probando un sensor para registrar el peso de camiones que transita hacia el interior del
//país. Se pide un programa para registrar los pesos en Toneladas de todos los camiones
//de carga que pasan por el control en un día; además, imprimir el promedio de todos lo
//pesos registrados, la cantidad y porcentaje de camiones con peso mayor e igual a las
//10 toneladas; además, del peso más alto y más bajo reportado.
//	• El registro de pesos en toneladas se puede dar en decimal.
//	• No se sabe la cantidad de camiones que se va a registra en el sistema.

int main (){
	
	float Robert = 0;
	float pesoTotal = 0;
	float pesoMenor = 0, pesoMayor = 0;
	int cantidadCamiones = 0;
	int esNuevoCamion = 1;
	int camionesMayor10 = 0;
	
	
	for(cantidadCamiones = 0; esNuevoCamion == 1; cantidadCamiones++){
		
		printf("Introduzca el peso en TONELADAS del camion: ");
		scanf("%f", &Robert);
		pesoTotal += Robert;
		
		if(pesoMenor == 0){
			pesoMenor = Robert;
			pesoMayor = Robert;
		}else{
			if(Robert <= pesoMenor){
				pesoMenor = Robert;
			}else if(Robert > pesoMayor){
				pesoMayor = Robert;
			}
		}
		
		if(Robert >= 10){
			camionesMayor10++;
		}

		printf("\n\n ¿Registrar nuevo peso de camion? (1 SI | 0 NO)\n");
		scanf("%i", &esNuevoCamion);
		system("cls");

	}
	

	
	printf("\n Total de peso en TONELADAS de camiones registrados: %.2f\n", pesoTotal);
	printf("Peso promedio en TONELADAS: %.2f\n", pesoTotal / cantidadCamiones);
	printf("Cantidad de camiones que pesan mayor e igual a 10T: %i | Porcentaje: %.2f%%\n", camionesMayor10, (float)camionesMayor10/cantidadCamiones * 100);
	printf("Peso mayor: %.2fT\n", pesoMayor);
	printf("Peso menor: %.2fT", pesoMenor);
	
	
	
	return 0;
}
