#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	const int RUNS = 1000; // Simulate 1,000 ball
	int* counts[10];
	srand(time(0));
	
	// allocate rows and init first two with zero
	for (int i = 0; i < 10; i++) {
		counts[i] = (int*) malloc(sizeof(int)*(i + 1));
	
		for (int j = 0; j <= 1; j++) {
		counts[i][j] = 0;
		}
	}
	
	for (int run = 0; run < RUNS; run++) {
		// Add a ball to the top
		counts[0][0]++;
		// Have the ball run to the bottom
		int j = 0;
		for (int i = 1; i < 10; i++) {
			int r = rand() % 2;
			// If r is even, move down,
			// otherwise to the right
			if (r == 1) {
				j++;
			}
		counts[i][j]++;
		}
	}
	
	// Print all counts
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
		printf("%5d",counts[i][j]);
		}
		printf("\n");
	}
	// Deallocate the rows
	for (int i = 0; i < 10; i++) {
		free(counts[i]);
	}
	
	return 0;
}