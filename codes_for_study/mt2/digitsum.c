#include <stdio.h>
#include <stdlib.h>

int main () {
    int n = 1729;
    int digit = 0;
    int sum = 0;
    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n = n /10;
    }
	printf("%d", sum);

    return EXIT_SUCCESS;
}