#include <stdio.h>

void main(){

    //Bloque de constantes
    const float PRECIO_AMBOS = 53.50; //M o F, si tienen entre 18 y 25 años
	const float PRECIO_MSUP25 = 45;	//M si tienen más de 25 pero menor de 62 años
	const float PRECIO_MJUB = 30.25; //M si tienen mayor o igual de 62 años
	const float PRECIO_FSUP25 = 43.00;	//F si tienen más de 25 pero menor de 57 años
	const float PRECIO_FJUB = 33.25;	//F si tienen mayor o igual de 57 años

    //Bloque de declaración de variables
    int edad, cJubilados = 0, cMasculino = 0, cFemenino =0, cInscMax, contador;
    float montoM = 0.00, montoF = 0.00, montoTotal = 0.00;
    char sexo;

    printf("Ingrese la cantidad de inscripciones máximas del gimnasio. \n");
    scanf("%i", &cInscMax);

    for(contador = 0; contador < cInscMax; contador += 1){

            printf("Ingrese edad del Cliente #%i \n", contador + 1);
            scanf("%i", &edad);

            printf("Ingrese el sexo de Cliente. (M/F) \n");
            scanf(" %c", &sexo);

            if(sexo == 'M'){

                cMasculino += 1;

                if(edad < 18){
                    printf("Menor no apto para el gimnasio. \n");
                    cMasculino -= 1;
                }else if(edad >= 18 && edad <= 25){
                    montoM += PRECIO_AMBOS;

                }else if(edad > 25 && edad < 62){
                    montoM += PRECIO_MSUP25;
                }else{
                    montoM += PRECIO_MJUB;
                    cJubilados += 1;
                }

            }else if(sexo == 'F'){

                cFemenino += 1;

                if(edad < 18){
                    printf("Menor no apto para el gimnasio. \n");
                    cFemenino -= 1;
                }else if(edad >= 18 && edad <= 25){
                    montoF += PRECIO_AMBOS;

                }else if(edad > 25 && edad < 62){
                    montoF +=  PRECIO_FSUP25;
                }else{
                    montoF += PRECIO_FJUB;
                    cJubilados += 1;
                }

            }else{

                printf("Sexo ingresado no apto. Ingrese M/F");

            }
    }

    montoTotal = montoM + montoF;

    printf("\n \n //////////REPORTE//////////// \n");
    printf("En el Gimansio hay %i Mujeres, y %i Hombres \n", cFemenino, cMasculino);
    printf("El monto total de las inscripciones del gimnasio es de: %0.2f \n", montoTotal);
    printf("El monto total de las inscripciones de los hombres es de: %0.2f \n", montoM );
    printf("El monto total de las inscripciones de las mujeres es de: %0.2f \n",montoF);
    printf("En el Gimansio hay %i de Jubilados \n", cJubilados );

}
