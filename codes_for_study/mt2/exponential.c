#include <stdio.h>
#include <stdlib.h>

int power_func(int base, int exponent){
	int power = 1;
	for (int j = 1; j <= exponent; j++){
			power *= base;
	}
	
	return power;
}

int main() {
	int my_base, my_exponent;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &my_base, &my_exponent);
	
	int sum = 0;
	
	for (int i = 1; i <= my_base; i++) {
		int new_number = power_func(i, my_exponent);
		sum += new_number;
		printf("%d ^ %d = %d\n", i, my_exponent, new_number);
	}
	
	printf("The sum of %dth powers of the first %d positive integer number is %d.", my_exponent, my_base, sum);
	
	return EXIT_SUCCESS;
}