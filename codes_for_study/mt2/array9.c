#include <stdio.h>

#define SIZE 100


int main(){
	int arr[SIZE] = {0};
	int size;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	printf("Enter %d values for filling the array: ", size);
	for (int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Original array: ");
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	

	for (int i = 0; i < size; i++){
		for (int j = i+1; j < size; j++){
			if (arr[i] == arr[j]){
				for (int k = j; k < size-1; k++){
					arr[k] = arr[k+1];
				}
				size--;
				j--;
			}
		}
	}
	
	
	printf("After removing the duplicate elements: ");
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	
	
}