#include <stdio.h>
#define SIZE 100

void print_array(int arr[], int size_of_arr){
	for (int i = 0; i < size_of_arr; i ++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void ascending_order(int arr[], int size_of_arr) {
	for (int i = size_of_arr - 1; i > 0; i--){
		for (int j = 0; j < i; j++){
			if (arr[j] > arr[j+1]){
				int swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
			}
		}
	}
}

int main() {
	int arr1[SIZE] = {0};
	int arr2[SIZE] = {0};
	int merged_arr[SIZE] = {0};
	
	int size1, size2;
	
	printf("Enter the size of the first array: ");
	scanf("%d", &size1);
	
	printf("Enter elements of the first array: ");
	for (int i = 0; i < size1; i++){
		scanf("%d", &arr1[i]);
	}
	
	printf("Enter the size of the second array: ");
	scanf("%d", &size2);
	
	printf("Enter elements of the second array: ");
	for (int i = 0; i < size2; i++){
		scanf("%d", &arr2[i]);
	}
	
	for (int i = 0; i < size1; i++){
		merged_arr[i] = arr1[i];
	}
	
	for (int i = size1, j = 0; i < (size1 + size2); i++){
		merged_arr[i] = arr2[j];
		j++;
	}
	
	printf("Merged array: ");
	print_array(merged_arr, (size1 + size2));
	
	ascending_order(merged_arr, (size1 + size2));
	printf("Sorted array: ");
	print_array(merged_arr, (size1 + size2));
	
}