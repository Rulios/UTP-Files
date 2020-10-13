#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
	*a = *b;
	*b = temp;
}

void PrintAllEl(int *arr, int l){
	int i= 0;
	for(i = 0; i< l; i++){
		printf("%i ", arr[i]);
	}
}

int partition(int *arr, int left, int right, int pivot){
	while(left <= right)	{
		while(arr[left] < pivot){
			left++;
		}
		
		while(arr[right] > pivot){
			right --;
		}
		
		if(left <= right){
			swap(&arr[left], &arr[right]);
			printf("\n\n");
			PrintAllEl(arr,15);
			left++;
			right--;
		}
	}
	return left;
}

int quicksort(int *arr, int left, int right){
	if(left >=right){
		return;
	}
	int pivote = arr[(left + right) / 2];
	int i = partition(arr,left,right,pivote);
	quicksort(arr,left, i-1);
	quicksort(arr, i, right);
}
 
void quicksortGen(int*arr, int length){
    quicksort(arr, 0, length -1);
} 



int main(){

    int num[15] = {2,31,4,354,56,8,34,2,5,23,6};
	
	int i =0 ;
     for(i = 0; i<15; i++){
        printf("Introduzca el numero #%i", i+1);
        scanf("%i", &num[i]);
    } 
	PrintAllEl(num,15);
	quicksortGen(num, 15);
    return 0;
}
