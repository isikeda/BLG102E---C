#include <stdio.h>
#define MAX_SIZE 100

int main () {
	int arr[4][5] = {{1, 2, 3, 4, 5}, 
					 {6, 7, 8, 9, 10}, 
					 {11, 12, 13, 14, 15}, 
					 {16, 17, 18, 19, 20}};
	
	printf("The given array in matrix form is: \n");
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 5; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}