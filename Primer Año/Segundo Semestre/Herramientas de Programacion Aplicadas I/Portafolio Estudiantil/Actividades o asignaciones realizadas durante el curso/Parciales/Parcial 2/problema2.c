//Robert Lu Zheng 3-750-1980

//La Farmacia “El Remedio” ubicada en Santa Ana tiene descuentos especiales en
//medicamentos del 25%, todos los días especialmente para los jubilados (mujeres desde
//58 años y hombres desde 60) sin importar el monto; además, descuento para el resto
//del público los lunes del 15%, martes del 20% y miércoles del 15% para compras mayores
//a B/.35.00. Se desea un programa que imprima el reporte de la factura.
//• Se supone que todos los productos son medicamentos.
//• No se sabe la cantidad de medicamento que puede comprar un cliente.
//• En la factura debe imprimir el nombre del medicamento, cantidad y precio;
//además, el nombre del cliente y su cédula.
//• Utilice por lo menos una función en el programa.
//• Utilice arreglos dinámicos para almacenar los datos de los medicamentos
//adquiridos por el cliente.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const LONGITUD_TEXTO = 256;

//referencias
//sexo (1 para mujer | 2 para hombre)
//días:
//1 - Lunes
//2 - Martes
//3 - Miercoles
//4 - Jueves
//5 - Viernes
//6 - Sabado
//7 - Domingo

void CalcularTotal(int cantidad[], float precio[], float *precioTotal, int cantMedicamentos){
	int i =0;
	float total = 0;
	for(i = 0; i < cantMedicamentos ;i ++){
		total += (float)cantidad[i] * (float)precio[i];
	}
	*precioTotal = total;
}

void CalcularDescuento(float precioTotal, int sexo, int edad, int dia,float *descuento ){
	float porcentajeDescuento = 0;
	if(edad >= 58){
		if(sexo == 1) porcentajeDescuento += 0.25;
		if(sexo == 2 && edad >= 60) porcentajeDescuento += 0.25;
	}else{
		if(precioTotal > 35){ //monto mayor a 35
			switch(dia){
				case 1: //lunes
					porcentajeDescuento += 0.15;
				break;
				
				case 2: //Martes
					porcentajeDescuento += 0.2;
				break;
				
				case 3: //Miercoles
					porcentajeDescuento += 0.15;
				break;
			}
		}
	}
	*descuento = (float)precioTotal * (float)porcentajeDescuento;
}

char * MostrarDia(int dia){
	char dia_cadena[LONGITUD_TEXTO];
	switch(dia){
		case 1:
			strcpy(dia_cadena, "Lunes");
		break; 
		
		case 2:
			strcpy(dia_cadena, "Martes");
		break; 
		
		case 3:
			strcpy(dia_cadena, "Miercoles");
		break; 
		
		case 4:
			strcpy(dia_cadena, "Jueves");
		break; 
		
		case 5:
			strcpy(dia_cadena, "Viernes");
		break; 
		
		case 6:
			strcpy(dia_cadena, "Sabado");
		break; 
		
		case 7:
			strcpy(dia_cadena, "Domingo");
		break; 
	}

	return dia_cadena;
}

char * MostrarSexo(int sexo){
	if(sexo == 1)
		return "Mujer";
	else if(sexo == 2)
		return "Hombre";
}

int main(){
	
	int cantMedicamentos = 0;
	char nombreCliente[LONGITUD_TEXTO];
	char cedula[LONGITUD_TEXTO];
	int *cantidad;
	float * precio;
	char** medicamentos; 
	int seguir = 0;
	int sexo = -1, edad = 0, dia = 0; // 1 para mujer | 2 para hombre
	int i = 0; 
	float precioTotal = 0, descuento = 0;
	
	do{
		printf("BIENVENIDOS A LA FARMACIA EL REMEDIO\n\n");
		do{ //validacion de entrada
			printf("Introduzca el día que se registra la factura: (Ingrese la numeracion que corresponda)\n");
			printf("1 - Lunes\n");
			printf("2 - Martes\n");
			printf("3 - Miercoles\n");
			printf("4 - Jueves\n");
			printf("5 - Viernes\n");
			printf("6 - Sabado\n");
			printf("7 - Domingo\n");
			printf("Dia: ");
			scanf("%i", &dia);
			if(dia < 1 || dia > 7) printf("ERROR - DEBE INTRODUCIR LA NUMERACION QUE CORRESPONDA\n");
		}while(dia < 1 || dia > 7);
		
		
		system("cls");
		

		
		printf("-------------------Regstro de factura------------------\n\n");
		
		printf("Introduzca el nombre del cliente:");
		scanf("%s", &nombreCliente);
		
		printf("Introduzca su cedula o identificacion:");
		scanf("%s", cedula);
		
		do{ // validacion de entrada
			printf("Ingrese el sexo del cliente (1 para mujer | 2 para hombre):");
			scanf("%i", &sexo);
			if(sexo != 1 && sexo != 2) printf("¡DEBE INGRESAR UNO DE LOS VALORES MOSTRADOS! \n");
		}while(sexo != 1 && sexo != 2);
		
		do{ //vlaidacion de entrada
			printf("Ingrese la edad del cliente:");
			scanf("%i", &edad);
			if(edad < 0) printf("ERROR - DEBE INGRESAR A ALGUIEN QUE AL MENOS HAYA NACIDO\n");
		}while(edad < 0);
		
		
		printf("Introduzca la cantidad de medicamentos:");
		scanf("%i", &cantMedicamentos);
		
		//alojar dinámicamente los arreglos necesarios
		medicamentos = (char**)malloc(cantMedicamentos * sizeof(char**));
		cantidad = (int *)calloc(cantMedicamentos, sizeof(int*));
		precio = (float*)malloc(cantMedicamentos * sizeof(float*));
		
		//verificar si la alojación tuvo éxito
		if(medicamentos == NULL) break;
		if(cantidad == NULL) break;
		if(precio == NULL) break;
		
		//rellenar los nombres de los medicamentos
		//variable temporal para alojar el nombre del medicamento
		char temp_medicamentos[LONGITUD_TEXTO]; 
		
		
	
		for(i = 0; i < cantMedicamentos; i++){
			printf("Introduzca el nombre del medicamento #%i: ", i + 1);
			scanf("%s", &temp_medicamentos);
			//alojar
			medicamentos[i] = (char*)malloc(LONGITUD_TEXTO * sizeof(char*));
			//copiar el nombre
			strcpy(medicamentos[i], temp_medicamentos);
			
			do{ //validacion de entrada
				printf("Introduzca la cantidad comprada del medicamento:");
				scanf("%i", &cantidad[i]);
				if(cantidad[i] < 0) printf("ERROR - INTRODUZCA UNA CANTIDAD POSITIVA\n");
			}while(cantidad[i] < 0);
			
			do{ //validacion de entrada
				printf("Introduzca el precio del medicamento / unidad:");
				scanf("%f", &precio[i]);
				if(precio[i] < 0) printf("ERROR - NO PUEDES REGALAR EL MEDICAMENTO\n");
			}while(precio[i] < 0);
		}
		
		system("cls");
		
		//calcular el total de la factura
		CalcularTotal(cantidad, precio, &precioTotal, cantMedicamentos);
		
		//calcular el descuento
		CalcularDescuento(precioTotal, sexo, edad, dia, &descuento);
		
		//Mostrar factura
		printf("-----------------FACTURA-------------\n");
		printf("Dia: %s\n\n", MostrarDia(dia));
		printf("/////////////DATOS DEL CLIENTE///////////\n");
		printf("Nombre del cliente: \t %s\n", nombreCliente);
		printf("Cedula del cliente: \t %s\n", cedula);
		printf("Sexo del cliente:   \t %s\n", MostrarSexo(sexo));
		printf("Edad del cliente:   \t %i\n", edad);
		printf("Medicamentos: \n");
		for(i = 0; i < cantMedicamentos; i++){
			printf("\t %s \t %i \t %.2f = \t $%.2f\n", medicamentos[i], cantidad[i], precio[i], cantidad[i] * precio[i]);
		}
		printf("Subtotal: $%.2f\n", precioTotal);
		printf("Descuento: $%.2f\n", descuento);
		printf("Total: $%.2f \n\n", precioTotal - descuento);
		
		
		do{
			printf("Seguir? (1 para si / 0 para no)");
			scanf("%i", &seguir);
		}while(seguir != 0 && seguir != 1);
		
		if(seguir == 1) system("cls");
		
		
	}while(seguir == 1);
	
	
	return 0;
}
