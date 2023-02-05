#include <stdio.h>
#define MAX_SIZE 100

int main () {
	int my_array[MAX_SIZE] = {0};
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	printf("Input array elements: ");
	for (int i = 0; i < size; i++){
		scanf("%d", &my_array[i]);
	}
	
	int position;
	printf("Input position to delete: ");
	scanf("%d", &position);
	
	for (int i = position; i < size; i++) {
		my_array[i - 1] = my_array[i];
	}
	
	printf("Array elements: "); 
	for (int i = 0; i < size - 1; i++) { //size-- ???
		printf("%d ", my_array[i]);
	}
	
	
	
	return 0;
}
