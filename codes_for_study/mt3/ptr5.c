#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Input array size: ");
	scanf("%d", &n);
	int *arr = (int*) malloc(n * sizeof(int)); 
	
	printf("Input elements: ");
	for(int i = 0; i < n; i++){
		scanf("%d", arr + i);
	}
	
	printf("Array elements: ");
	for(int i = 0; i < n; i++){
		printf("%d", *(arr + i));
		if (i != n - 1){
			printf(", ");
		}
	}
	
	free(arr);
	
	return 0;
}