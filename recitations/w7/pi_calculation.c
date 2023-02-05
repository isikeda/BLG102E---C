#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX_ITER 10000

double getRandomNumber(double lower_limit, double upper_limit);

double calculatePi(int max_iteration);

int main() {
    srand(time(NULL));
    double sum = 0;
    double avg = 0;
    for (int i = 0; i < 100; i++) {
         sum += calculatePi(MAX_ITER);
    }
    avg = sum/100; 
    printf("Mean Value of 100 Estimated Pi's = %lf\n", avg);
}

double calculatePi(int max_iteration) {
    int inside = 0;
    double x, y;
    for (int i = 0; i < max_iteration; i++) {
        x = getRandomNumber(-1, 1);
        y = getRandomNumber(-1, 1);
        if (x*x + y*y <= 1) {
            inside++;
        }
    }
    return 4 * (double) inside / max_iteration;
}

double getRandomNumber(double lower_limit, double upper_limit) {
    return 2 * ((double) rand() / RAND_MAX) - 1;
}
