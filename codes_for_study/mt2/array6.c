#include <stdio.h>
#include <stdbool.h>
#define	SIZE 100



void print_array(int arr[], int size_of_arr){
	for (int i = 0; i < size_of_arr; i ++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void ascending_order(int arr[], int size_of_arr) {
	for (int i = size_of_arr - 1; i > 0; i--){
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j+1]) {
				int swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
			}
		}
	}
}

int main(){
	int my_arr[SIZE] = {0};
	int size;
		printf("Enter the size of the array: ");
		scanf("%d", &size);
		
		printf("Enter %d positive integers for filling the array: ", size);
		for (int i = 0; i < size; i++) {
			scanf("%d", &my_arr[i]);
		}
		
		printf("Original array: ");
		print_array(my_arr, size);
			
		ascending_order(my_arr, size);
			
		printf("Sorted verse of your array: ");
		print_array(my_arr, size);
		
		while (true){
			int new = 0;
			printf("Enter a value for adding the array (Enter -1 to exit.):");
			scanf("%d", &new);
			
			if (new == -1){
				break;
			} else {
				my_arr[size] = new;
				ascending_order(my_arr, size + 1);
			
				printf("Sorted new array: ");
				print_array(my_arr, size + 1);
				
				size++;
			}
			
		}
		
	return 0;
}