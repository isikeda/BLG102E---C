#include <stdio.h>
#include <stdlib.h>

int *scan_elements(int *array, int size){
	for(int i = 0; i < size; i++){
		scanf("%d", array + i);
	}
	return array;
}

void print_arr(int *array, int size){
	for(int i = 0; i < size; i++){
		printf("%d", *(array + i));
		if (i != size - 1){
			printf(", ");
		}
	}
	printf(".\n");
	return;
}


int main(){
	int n;
	printf("Input array size: ");
	scanf("%d", &n);
	int *arr1 = (int*) malloc(n * sizeof(int)); 
	int *copied = (int*) malloc(n * sizeof(int));
	int *arr2 = (int*) malloc(n * sizeof(int));
	int *reversed = (int*) malloc(n * sizeof(int));	
	
	
	printf("Input elements for array 1: ");
	scan_elements(arr1, n);
	
	printf("Input elements for array 2: ");
	scan_elements(arr2, n);	
	
	for(int i = 0; i < n; i++){
		*(copied + i) = *(arr1 + i);
	}
	int j = n - 1; 
	for(int i = 0; i < n; i++){ 
		            
		*(reversed + i) = *(arr1 + j);
		j--;
	}
	
	printf("-----------------------------------------------------------------------------------\n");
	
	printf("Array1 elements: ");
	print_arr(arr1, n);
	
	printf("Array2 elements: ");
	print_arr(arr2, n);
	
	printf("-----------------------------------------------------------------------------------\n");
	
	printf("Copied array elements: ");
	print_arr(copied, n);

	printf("Reversed array elements: ");
	print_arr(reversed, n);
	
	printf("-----------------------------------------------------------------------------------\n");
	
	int temp;
	for(int i = 0; i < n; i++){
		temp = *(arr1 + i);
		*(arr1 + i) = *(arr2 + i);
		*(arr2 + i) = temp;
	}
	
	printf("Array1 elements after swapping: ");
	print_arr(arr1, n);

	printf("Array2 elements after swapping: ");
	print_arr(arr2, n);
	
	free(arr1);
	free(arr2);
	free(copied);
	free(reversed);
	
	return 0;
}