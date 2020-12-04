//Robert Lu Zheng 3-750-1980 1IL112

//Crear un programa en C utilizando estructura que almacene las calificaciones de 5 estudiantes. 
//La información del estudiante debe contener nombre, apellido, edad, sexo y calificaciones. 
//El total de calificaciones por cada estudiante es de 5. 
//Finalmente, el programa de deberá indicar qué estudiante tiene el promedio de calificación más alta.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Estudiante{
	char nombre[256];
	char apellido[256];
	int edad;
	char sexo[20];
	float calificaciones[5];
	float promedio;
	
};

int EncontrarEstudianteConMayorPromedio(struct Estudiante estudiantes[], int cantEstudiantes){
	int i = 0, iEstudiante = 0; 
	float promedioMasAlto = 0;
	
	for(i = 0; i < 5; i++){
		if(estudiantes[i].promedio > promedioMasAlto){
			promedioMasAlto = estudiantes[i].promedio;
			iEstudiante = i;	
		} 
	}
	return iEstudiante;
}


float CalcularPromedio(float calificaciones[], int cantidadCalificaciones){
	int i = 0;
	float suma = 0;
	for(i = 0; i < cantidadCalificaciones; i++){
		suma += calificaciones[i];
	}
	return suma/(float)cantidadCalificaciones;
}

void BorrarSaltoDeLinea(char texto[]){
	texto[strlen(texto) - 1] = '\0';
}


int main(){
	
	struct Estudiante estudiantes[5];
	int i = 0, y = 0;
	char entradaNum[10];
	
	for(i = 0; i < 5; i++){
	
		printf("ESTUDIANTE # %i\n\n", i+1);
		
		printf("Introduzca el nombre del estudiante:");
		fgets(estudiantes[i].nombre, 256, stdin);
		BorrarSaltoDeLinea(estudiantes[i].nombre);
	
		printf("Introduzca el apellido del estudiante:");
		fgets(estudiantes[i].apellido, 256, stdin);
		BorrarSaltoDeLinea(estudiantes[i].apellido);
		
		printf("Introduzca la edad del estudiante:");
		fgets(entradaNum, 10, stdin);
		BorrarSaltoDeLinea(entradaNum);
		estudiantes[i].edad = atoi(entradaNum);

		printf("%i", estudiantes[i].edad);
		
		printf("Introduzca el sexo del estudiante (masculino / femenino):");
		fgets(estudiantes[i].sexo, 20, stdin);
		BorrarSaltoDeLinea(estudiantes[i].sexo);

		for(y = 0; y < 5; y++){
			printf("Introduzca la calificación #%i: ",y+1);
			fgets(entradaNum, 10, stdin);
			BorrarSaltoDeLinea(entradaNum);
			estudiantes[i].calificaciones[y] = atof(entradaNum);
		}
		
		//calcular el promedio
		estudiantes[i].promedio = CalcularPromedio(estudiantes[i].calificaciones, 5);

		system("cls");
	
	}
	
	int iMayorPromedio = EncontrarEstudianteConMayorPromedio(estudiantes, 5);
	
	printf("--ESTUDIANTE CON MAYOR PROMEDIO--\n\n");
	
	printf("Nombre del estudiante:%s\n", estudiantes[iMayorPromedio].nombre);
	printf("Apellido: %s\n", estudiantes[iMayorPromedio].apellido);
	printf("Edad %i\n", estudiantes[iMayorPromedio].edad);
	printf("Sexo : %s \n", estudiantes[iMayorPromedio].sexo);
	printf("Promedio: %.2f", estudiantes[iMayorPromedio].promedio);
	
	return 0;
	
}
