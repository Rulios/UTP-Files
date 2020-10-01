//Robert Lu Zheng 3-750-1980
//Salon 1IL112

#include <stdio.h>

void EsperarParaProseguir(){
	//Variables fantasma
	int  fantasma;
	printf("\n\n 1. Regresar al menu\n");
	scanf(" %i", &fantasma);
	system("cls");
    menu();
}

void InterfazOpcion1(){
//	El gobierno recibió n cantidad propuestas (cotizaciones) de una licitación pública para
//cambiar las redes inalámbricas de un ministerio. Se desea un programa para saber cuál
//es el promedio de las propuestas y cuáles es el precio de la propuesta más baja

    float cotizacion,masBaja=0,promedio = 0;
    int x = 0,y=0, cCotizaciones;
  
    printf("Ingrese la cantidad de cotizaciones:");
    scanf("%i", &cCotizaciones);

    while(x< cCotizaciones){
        printf("Ingrese la cotizacion # %d: \n",x+1);
        scanf("%f",&cotizacion);

        if(cotizacion<0){
            printf("Valor de la cotizacion invalido");
        }else{
            if(cotizacion<masBaja||masBaja == 0){
                masBaja=cotizacion;
                y=(x+1);
            }
            promedio+=cotizacion;
        }
        x+=1;
    }
    //calculo del promedio
    promedio=promedio/cCotizaciones;
    //Salidas
    printf("\nLa  cotizacion # %d es la mas baja: $%.2f:",y,masBaja);
    printf("\nEl promedio de las cotizaciones es: $%.2f",promedio);
    
    EsperarParaProseguir();
    
    
}

void InterfazOpcion2(){
	
//	Se requiere obtener el promedio de estaturas de n cantidad niños de un salón de clase
//para formar un equipo de baloncesto. El maestro introducirá al sistema las estaturas
//de los niños y el mismo deberá imprimir el promedio, la estatura más alta y baja.
	int n,x;
    float est, prom, sum, est_ba, est_al;

    sum = 0;
    x = 0;

    printf("Introduzca cantidad de ninnos a evaluar: ");
    scanf("%d",&n);//cantidad de estaturas que se van a evaluar

    while(x<n){

        x++;//contador para controlar las veces que se va a pedir la estatura

        printf("Introduzca la estatura en metros %d: ",x);
        scanf("%f",&est);

        sum = sum + est;//acumulador de estaturas

        if(x == 1){
            est_al = est;
            est_ba = est;
        }

        if(est > est_al){//sentencia if para verificar la estatura mas alta
            est_al=est;//variable que guarda la estatura mas alta
        }

        if(est < est_ba){//sentencia if para verificar la estatura mas alta
            est_ba=est;//variable que guarda estatura mas baja
        }
    }

    prom = sum/n;//promedio de las estaturas

    printf("\nEl promedio de estatura es: %.2f m." ,prom);
    printf("\nLa estatura mas alta es: %.2f m.",est_al);
    printf("\nLa estatura mas baja es: %.2f m.",est_ba);
    
    EsperarParaProseguir();
}

void InterfazOpcion3(){
//	 En una subasta por internet, un vendedor recibe n cantidad ofertas para la venta de
//un Racks para Servidores. El vendedor desea saber por medio de un programa cuáles
//ofertas es la más alta
	int i = 1;
    float a[10], gran;
    while (i <= 10){
        printf("Introduzca el valor de la propuesta %d\n", i);
        scanf("%f", &a[i]);
        ++i;
    }
 	//a[0] es la mas grande
    gran = a[0];
    i = 0;
    
    while (i <= 10) {
        i++;
    	if (a[i] > gran) {
    		gran = a[i];
        }
    }
    printf("La oferta mas grande es %f", gran);
	
	EsperarParaProseguir();
}

void InterfazOpcion4(){
//	Escribir un programa que le solicite al usuario la edad a varios jóvenes y que al
//final imprima la cantidad de jóvenes mayores y menores de edad (18);
//además, del promedio de edades.

    int edad, cant, cont = 1, menores = 0, mayores=0 ;
    float sum = 0, prom;


    //Se determina la cantidad de edades que ingresar
    printf("Introduzca la cantidad de edades que desea ingresar: ");
    scanf("%d", &cant);

    cont=1; //Se inicia el contador en uno para que el numero de joven empieze en 1
    while(cont<(cant+1)) //Estas instrucciones se van a repetir hasta que el contador llegue al numero de edades ingresado
    {
        //Se ingresa la edad del joven
        printf("Edad del joven numero %d: ", cont);
        scanf("%d", &edad);
        if(edad<18) //Se determina si el joven es menor de edad
        {
            menores++;
        }
        if(edad>=18) //Se determina si el joven es mayor de edad
        {
            mayores++;
        }
        sum += edad; //Se suma la edad ingresada al acumulador
        cont++; //Se le suma 1 al contador hasta que sea igual a la cantidad de edades
    }
    prom=sum/cant; //Se calcula el promedio despues de que se sumen todas las edades

    //Se imprimen los resultados
    printf("El promedio de las edades es: %f \n", prom);
    printf("La cantidad de menores de edad es: %d \n", menores);
    printf("La cantidad de mayores de edad es: %d \n", mayores);
    
    EsperarParaProseguir();
}

void InterfazOpcion5(){
	
//	. La Asamblea Nacional de Panamá implementará un sistema de votación electrónica
//para las discusiones en el pleno. Por lo que se implementará un prototipo de prueba
//desarrollado en C para 15 diputados. Se requiere que el programa muestre la cantidad
//y porcentaje de los que están a favor, en contra y los que se abstienen. 
	
	float aFavor =0 , enContra = 0, nulo = 0;
	int i = 0, voto = 0;
	while(i<15){
		printf("Voto para diputado #%i\n", i+ 1);
		printf("Opciones:\n");
		printf("1 - A Favor\n");
		printf("2 - En Contra\n");
		printf("3 - Voto nulo\n");
		scanf("%i", &voto);

		switch(voto){
			case 1:
				aFavor++;
			break;

			case 2:
				enContra++;
			break;

			case 3:
				nulo++;
			break;

			default:
				i--;
				 //No avanzar a el próximo diputado
				printf("\n ¡INTRODUZCA UNA DE LAS OPCIONES PREVIAS!\n");
			break;

		}

		voto = 0;
		i++;
	}

	printf("\nLos porcentajes de los votos quedaron asi:\n");
	printf("1 - A Favor: %.2f%%\n", (aFavor/15)*100);
	printf("2 - En Contra: %.2f%%\n", (enContra/15)*100);
	printf("1 - A Favor: %.2f%%\n", (nulo/15)*100);
	
	
	
	EsperarParaProseguir();
}

int menu (){
	//Variable con mi nombre
	int Robert = 0;
	
	printf("Introduzca la opcion del menu (numero)\n");
	printf("1. Calcular promedio y el mas barato de las propuestas que le llegaron al gobierno\n");
	printf("2. Calcular promedio, maximo, y minimo de estaturas dadas\n");
	printf("3. Encontrar la oferta mas alta de una subasta de Internet\n");
	printf("4. Encontrar la cantidad de jovenes mayores y menores de edad, y promedio de edades\n");
	printf("5. Votacion electronica de la Asamblea Nacional\n");
	printf("6. Salir del programa\n");
	scanf("%i", &Robert);
		
	switch(Robert){
			
		case 1:
			system("cls");
			InterfazOpcion1();
		break;
			
		case 2:
			system("cls");
			InterfazOpcion2();
		break;
			
		case 3:
			system("cls");
			InterfazOpcion3();
		break;
			
		case 4:
			system("cls");
			InterfazOpcion4();
		break;
			
		case 5:
			system("cls");
			InterfazOpcion5();
		break;
			
		case 6:
			return 0;
		break;
		
	}
}

int main(){
	
	menu();
	
	return 0;
}
