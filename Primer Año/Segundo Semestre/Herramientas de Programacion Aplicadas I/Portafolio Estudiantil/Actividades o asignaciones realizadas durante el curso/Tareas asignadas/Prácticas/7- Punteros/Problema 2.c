//Robert Lu Zheng 3-750-1980 1IL112

#include <stdio.h>

int esMultiplo(int n1, int n2, int * esMultiplo){
	if(n1 % n2 == 0){
		*esMultiplo = 1;
	}else{
		*esMultiplo = 0;
	}
}

int main(){
	
	int n1 = 0, n2 = 0, condicion = 0;
	
	printf("Introduzca el numero 1:");
	scanf("%i", &n1);
	
	printf("Introduzca el numero 2:");
	scanf("%i", &n2);
	
	esMultiplo(n1,n2, &condicion);
	
	if(condicion){
		printf("\nEn efecto, n1 es multiplo de n2\n");
	}else{
		printf("\nn1 NO es multiplo de n2\n");
	}
	
	return 0;
	
}
