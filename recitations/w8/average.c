#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define WIN_SIZE 3

int main() {
	double input[SIZE] = {0.0};
	for (int i=0; i < SIZE; i++) {
		printf("Enter the value for %d: ", i+1);
		scanf("%lf", &input[i]);
	}
	
	double cumulativeAvg[SIZE];
	
	double total = 0.0;	
	for (int i=0; i<SIZE; i++){
		total += input[i];
		cumulativeAvg[i]=total / (i+1);
	}
	
	double movingAvg[SIZE] = {0};
	
	for (int i = WIN_SIZE - 1; i<SIZE; i++){
		total = 0;
		for (int j = i; j > i - WIN_SIZE; j--) {
			total += input[j];
		}
		movingAvg[i] = total / WIN_SIZE;
	}
	
	printf("- Exchange Rate - Cumulative Average - Simple Moving Average- \n");
	for (int i = 0; i < SIZE; i++) {
		printf("| %.3lf        | %.3lf        | %.3lf        |\n",
				  input[i], cumulativeAvg[i], movingAvg[i]);		
	}
	for (int i = 0; i<55; i++) {
		printf("-");
	}
	printf("\n");
	
	return EXIT_SUCCESS;
}