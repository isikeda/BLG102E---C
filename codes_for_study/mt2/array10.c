#include <stdio.h>

#define SIZE 100

int main(){
	int array[SIZE] = {0};
	int freq[SIZE] = {0};
	int size;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	printf("Enter %d values for filling the array: ", size);
	for (int i = 0; i < size; i++){
		scanf("%d", &array[i]);
		freq[i] = -1;
	}
	
	for (int i = 0; i < size; i++){
		int count = 1;
		for (int j = i+1; j < size; j++){
			if(array[i] == array[j]){
				count++;
				freq[j] = 0;
			}
		}
		if(freq[i] != 0){
			freq[i] = count;
		}
	}
	
	printf("Frequency of all elements in the array: \n");
	for(int i = 0; i < size; i++){
		if(freq[i] != 0){
			printf("%d occurs %d times in the array. \n", array[i], freq[i]);
		}
	}
} 