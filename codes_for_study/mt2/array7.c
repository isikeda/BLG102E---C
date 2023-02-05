#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main(){
	srand(time(NULL));
	
	int arr[SIZE] = {0};
	
	for (int i = 0; i < SIZE; i++){
		arr[i] = rand() % 10;
	}
	
	for (int i = 0; i < SIZE; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = SIZE; i > 0; i--){
		printf("%d ", arr[i-1]);
	}
	
}