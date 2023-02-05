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
	int *arr = (int*) malloc(n * sizeof(int)); 
	
	int search;
	int* address;
	address = &search;

	printf("Enter %d values for filling the array:", n);
	scan_elements(arr, n);
	
	printf("Enter element to search:");
	scanf("%d", address);
	
	int counter = 0;
	int *x = (int*) malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++){
		if (*(arr + i) == search){
			*(x + counter) = i;
			counter++;
		}
	}
	
	if(counter == 0){
			printf("%d is not in the array!", search);
			return 1;
	}
	
	printf("%d is found %d times; at ", search, counter);
	print_arr(x, counter);
	printf(" position.");
	
	free(x);
	free(arr);
	return 0;
	}