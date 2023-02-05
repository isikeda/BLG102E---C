//PROBLEM

#include <stdio.h>
#include <stdlib.h>

//#define SIZE 50

void print_matrix(int *(*matrix), int size);

int main(){
	int *matrix[50] = (int*) malloc(50 * sizeof(int));
	int n;
	
	printf("Enter square matrix size:");
	scanf("%d", &n);
	
	printf("Enter values for %d x %d matrix:", n, n);
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", (*(matrix + i) + j ));
		}
	}
	
	printf("Your matrix: \n");
	/*for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			printf("%d ", *(*(matrix + i) + j ));
		}
		printf("\n");
	}*/
	print_matrix(matrix, n);
	
	return 0;
}

void print_matrix(int *matrix[50], int size){
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			printf("%d ", *(*(matrix + i) + j ));
		}
		printf("\n");
	}
	return;
}