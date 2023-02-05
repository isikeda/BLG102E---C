#include <stdio.h>
#include <stdlib.h>

#define SIZE 30
#define MA_SIZE 5

void calculate_cumulative_average(double exchange_rate[], double cumulative_average[], int size) {
	double total = 0.0;	
	for (int i=0; i< size; i++){
		total += exchange_rate[i];
		cumulative_average[i]=total / (i+1);
	}
}

void calculate_moving_average(double exchange_rate[], double moving_average[], int size, int ma_size) {
	for (int i = 0; i<size; i++){
		moving_average[i] = 0;
	}
	for (int i = ma_size - 1; i < size; i++){
		double sub_total = 0;
		for (int j = i; j > i -ma_size; j--){
			sub_total += exchange_rate[j];
		}
		moving_average[i] = sub_total / ma_size;
	}
}

void print_averages(double exchange_rate[], double cumulative_average[], double moving_average[], int size) {
	printf("- Exchange Rate - Cumulative Average - Simple Moving Average- \n");
	for (int i = 0; i < SIZE; i++) {
		printf("| %.3lf        | %.3lf        | %.3lf        |\n", exchange_rate[i], cumulative_average[i], moving_average[i]);		
	}
	for (int i = 0; i<55; i++) {
		printf("-");
	}
	printf("\n");
}


int main() {
	double exchange_rate[SIZE] = {3.74, 3.75, 3.80, 3.78, 3.78, 3.78, 3.79, 3.78, 3.78, 3.80,
                                   3.79, 3.80, 3.80, 3.80, 3.80, 3.80, 3.79, 3.79, 3.82, 3.81,
                                   3.82, 3.81, 3.84, 3.86, 3.87, 3.89, 3.91, 3.91, 3.91, 3.93};
	double cumulative_average[SIZE];
	double moving_average[SIZE];
	
	calculate_cumulative_average(exchange_rate, cumulative_average, SIZE);
	calculate_moving_average(exchange_rate, moving_average, SIZE, MA_SIZE);
	print_averages(exchange_rate, cumulative_average, moving_average, SIZE);
	
	
	
	return EXIT_SUCCESS;
}