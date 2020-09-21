#include <stdio.h>

int main(){
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
	return 0;
	
}

