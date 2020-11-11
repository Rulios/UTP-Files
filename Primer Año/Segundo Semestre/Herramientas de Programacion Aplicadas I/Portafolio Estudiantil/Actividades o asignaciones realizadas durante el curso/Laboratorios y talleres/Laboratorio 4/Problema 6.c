//Robert Lu Zheng 3-750-1980 1IL112

// Investigue sobre la función realloc en C. Redacte un problema donde se aplique arreglos
//dinámicos en tiempo de ejecución utilizando realloc y desarrolle el programa en C.

//Problema:
//    El Ministerio de Salud necesita un programa que pueda registrar las cédulas
//    de las personas infectadas por el coronavirus. El número de casos es variado puesto
//    que, aún no se sabe cuando se terminará el brote del virus.
//
//    Se debe contabilizar el porcentaje de recontagiados. Es decir, personas que ya se
//    han contagiado dos o más veces de covid-19.
//
//    En caso de que se introduzca un número negativo, significa que ya no hay más casos
//    nuevos y el país es libre de covid. En ese momento se deberá mostrar todas las cédulas.
//    Por lo tanto, se termina todo el programa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const LONGITUD_CEDULA = 20;

int ExisteEnArreglo(char **cedulas, char*cedula, int cantidadCedulas){
	
	int Robert = 0;
	for(Robert = 0; Robert < cantidadCedulas ; Robert++){
		//printf("%s|",*(cedulas + i));
//		printf("%s | %s | ", *(cedulas + i), cedula);
//		printf("%i\n", strcmp(*(cedulas + i), cedula));
		
		if(strcmp(*(cedulas + Robert), cedula) == 0) {
			printf("%s | %s\n", *(cedulas + Robert), cedula);
			return 1;	
		}
	}
	
	return 0;
}

void ImprimirCedulas(char** cedulas, int cantidadCedulas){
	int i = 0;
	for(i = 0; i < cantidadCedulas; i++){
		printf("%s\n", *(cedulas + i));
	}
}

int main(){
	

    int casosNuevos = 0, i =0;
	int cantidadContagiados = 0, cantidadRecontagios = 0;
    char** cedulas;
	cedulas = (char**)malloc(1 * sizeof(char**));
	
	if(cedulas == NULL) printf("Malloc fail 1");

	
    do{
        printf("MINISTERIO DE SALUD | REGISTRO DE CASOS NUEVOS\n\n");
        printf("Total contagiados: %i\n\n", cantidadContagiados);
        printf("Introduzca la cantidad de casos nuevos:");
        scanf("%i", &casosNuevos);

        if(casosNuevos < 0) break;
		
		
        int limite = cantidadContagiados + casosNuevos; //cantidadContagiados cambia durante la iteración
		for(i = cantidadContagiados; i < limite; i++){
			
			char cedula[LONGITUD_CEDULA];
			
			//añadir nuevos indices
        	cedulas = realloc(cedulas, (cantidadContagiados + 1) * sizeof(char**));
        	if(cedulas == NULL) printf("REALLOC FAIL");
			
			//alojar el tamaño de la cadena en el índice
			cedulas[i] = (char*)malloc(LONGITUD_CEDULA * sizeof(char*));
			if(cedulas[i] == NULL) printf("MALLOC FAIL 2");
			
			printf("Introduzca la cedula del contagiado #%i:", i + 1);
			scanf("%s", &cedula);
			
			if(ExisteEnArreglo(cedulas, cedula, cantidadContagiados)){
				//acumular el número de recontagios
				cantidadRecontagios++;		
			}
		
			//añadir al registro
			strcpy(cedulas[i], cedula);
			
			//acumular la cantidad de contagiados
			cantidadContagiados+=1;
		}
		
		system("cls");

    }while(casosNuevos >= 0);
    
    system("cls");
    
    float porcentajeRecontagios = ((float)cantidadRecontagios / (float)cantidadContagiados) * 100;
    
    //IMPRIMIR ESTADÍSTICAS
    //PORCENTAJE Y CANTIDA DE RECONTAGIOS, CANTIDAD DE CONTAGIADOS
    printf("¡FELICIDADES EL PAIS EL LIBRE DE COVID-19!\n\n");
    printf("DATOS ESTADISTICOS\n\n");
    printf("TOTAL DE CONTAGIADOS: %i\n", cantidadContagiados);
    printf("TOTAL DE RECONTAGIOS: %i | PORCENTAJE: %.f%% \n", cantidadRecontagios, porcentajeRecontagios);

    return 0;
}

