#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 10

void sort_array(int array[], bool ascending) {
	//ascending
	for (int j = 9; j > 0; j--) {
		for (int i = 0; i < j; i++) {
			if(ascending && array[i] > array[i+1]) {
				int swap = array[i];
				array[i] = array[i+1];
				array[i+1] = swap;
			}
			if(!ascending && array[i] < array[i+1]){
				int swap = array[i];
				array[i] = array[i+1];
				array[i+1] = swap;
			}
			
	}
	
}

int main() {
	int arr[SIZE] = {0};
	
	printf("Enter 10 numbers:");
	
	for (int i = 0; i < SIZE ; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("Original Array:");
	
	for (int i = 0; i < SIZE; i++) {
		printf(" %d", arr[i]);
	}
	printf("\n");
	
	sort_array(arr, true);
	
	printf("Sorted Array(Ascending):");
	for (int i = 0; i < SIZE; i++) {
		printf(" %d", arr[i]);
	}
	printf("\n");
	
	sort_array(arr, false);
	
	printf("Sorted Array(Descending):");
	for (int i = 0; i < SIZE; i++) {
		printf(" %d", arr[i]);
	}
	printf("\n");
	
			
	return EXIT_SUCCESS;
}
