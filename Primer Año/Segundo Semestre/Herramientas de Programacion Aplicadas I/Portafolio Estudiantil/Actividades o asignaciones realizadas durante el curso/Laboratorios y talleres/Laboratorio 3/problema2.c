//Robert Lu Zheng 3-750-1980 | 1IL112

//Crea un programa que pida dos números enteros al usuario y diga si alguno de ellos es múltiplo
//del otro. Utilice una función con retorno para saber si el múltiplo o no.

#include <stdio.h>

int esMultiplo(int n1, int n2){
	if(n1 % n2 == 0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	
	int n1 = 0, n2 = 0;
	
	printf("Introduzca el numero 1:");
	scanf("%i", &n1);
	
	printf("Introduzca el numero 2:");
	scanf("%i", &n2);
	
	if(esMultiplo(n1,n2)){
		printf("\nEn efecto, n1 es multiplo de n2\n");
	}else{
		printf("\nn1 NO es multiplo de n2\n");
	}
	
	return 0;
	
}
