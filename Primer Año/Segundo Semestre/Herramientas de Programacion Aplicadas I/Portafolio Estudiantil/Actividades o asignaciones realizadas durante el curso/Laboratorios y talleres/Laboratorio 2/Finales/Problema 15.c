/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */


#include <stdio.h>

int main(){
	float aFavor =0 , enContra = 0, nulo = 0;
	int i = 0, voto = 0;

	do{
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
	}while(i < 15);

	printf("\nLos porcentajes de los votos quedaron asi:\n");
	printf("1 - A Favor: %.2f%%\n", (aFavor/15)*100);
	printf("2 - En Contra: %.2f%%\n", (enContra/15)*100);
	printf("1 - A Favor: %.2f%%\n", (nulo/15)*100);
	return 0;

}

