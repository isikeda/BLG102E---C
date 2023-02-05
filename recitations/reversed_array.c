#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

void swap(int *first, int *second){
	int temp = *first;
	*first = *second;
	*second = temp;
}

void random_fill_array(int *arr){
	int random_number;
	int selected[ARRAY_SIZE] = {0};
	srand(0);
	
	for(int i = 0; i < ARRAY_SIZE; i++){
		do{
			random_number = rand() % ARRAY_SIZE;
		}while(selected[random_number] == 1);
		
	selected[random_number] = 1;
	*(arr+i) = random_number;
	}
}

int main(){
	int my_array[ARRAY_SIZE]; 
	
	//random numbers
	
	random_fill_array(my_array);
	
	printf("ORIGINAL ARRAY: ");
	for(int i = 0; i < ARRAY_SIZE; printf("%-5d", my_array[i++]));
	printf("\n");
	
	for(int i = 0; i< ARRAY_SIZE/2; i++){
		swap(&my_array[i], &my_array[ARRAY_SIZE-i-1]);
	}
	
	printf("REVERSE ARRAY:  ");
	for(int i = 0; i < ARRAY_SIZE; printf("%-5d", my_array[i++]));
	printf("\n");
	
	return EXIT_SUCCESS;
}