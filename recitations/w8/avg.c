#include <stdio.h>
#include <stdlib.h>
#define SIZE 13

int main() {
	double values[SIZE] = {0.0};
	double sum1 = 0.0;
	double sum2 = 0.0;
	double cum = 0.0;
	double moving = 0.0;
	
	
	for (int i=0; i<SIZE; i++) {
		double n = 0;
		printf("Enter the value for %d: ", i+1);
		scanf("%lf", &n);
		values[i] = n;
	}
	
	for (int i=0; i<SIZE; i++) {
		sum1 += values[i];
		cum = sum1 / (i+1);
	}
	int n = 0;
	printf("Enter a value for n: ");
	scanf("%d", &n);
	for (int i=(SIZE-1); i>=(SIZE-n); i--){
		sum2 += values[i];
		moving = sum2 / n;
	}
	
	printf("The Cumulative Average is: %.2lf\n", cum);
	printf("The Simple Moving Average is: %.2lf\n", moving);
	
	
	/*
	for (int i=0; i<10; i++) {
		printf("%.2lf\n", values[i]);
	}
	*/
	return EXIT_SUCCESS;
	
	
	
	
}