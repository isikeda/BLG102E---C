#include <stdio.h>

#define SIZE 3

void print_matrix(int matrix[][SIZE], int size){
	for(int row = 0; row < size; row++) {
		for (int col = 0; col < size; col++){
			printf("%3d ", matrix[row][col]);
		}
		printf("\n");
	}
}


int main(){
	int matrix_A[SIZE][SIZE] = {0};
	int matrix_B[SIZE][SIZE] = {0};
	int matrix_C[SIZE][SIZE] = {0};
	
	printf("Enter 9 value for filling the first 3x3 matrix:\n");
	for(int row = 0; row < SIZE; row++) {
		for (int col = 0; col < SIZE; col++){
			scanf("%d", &matrix_A[row][col]);
		}
	}
	
	printf("Enter 9 value for filling the second 3x3 matrix:\n");
	for(int row = 0; row < SIZE; row++) {
		for (int col = 0; col < SIZE; col++){
			scanf("%d", &matrix_B[row][col]);
		}
	}
	
	for(int row = 0; row < SIZE; row++) {
		for (int col = 0; col < SIZE; col++){
			int sum = 0;
			for (int i = 0; i < SIZE; i++) {
				sum += matrix_A[row][i] * matrix_B[i][col]; 
			}
			matrix_C[row][col] = sum;
		}
	}
	
	printf("Matrix A:\n");
	print_matrix(matrix_A, SIZE);
	
	printf("------------------------------------------------------------\n");
	
	printf("Matrix B:\n");
	print_matrix(matrix_B, SIZE);
	
	printf("------------------------------------------------------------\n");
	
	printf("Product of matrices A and B:\n");
	print_matrix(matrix_C, SIZE);
	
	return 0;
}