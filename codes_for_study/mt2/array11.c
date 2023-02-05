#include <stdio.h>
#deine SIZE 1000

int main(){
	int arr[SIZE] = {0};
	int size;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	printf("Enter %d values for filling the array: ", size);
	for (int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	
	int arr_of_sums[SIZE] = {0};
	
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size - 1; j++){
			int sum = 0;
			for (int k = 0; k < ; k++){
				
			}
		}
	}
	
	return 0;
}