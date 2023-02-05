// SD of a population
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void change_n(int* ptr, int data) {
	*ptr = data;
	return;
}

int main() {
	int n;
	int *ptr;
	ptr = &n;
	printf("Enter your data size:");
	scanf("%d", &n);
    change_n(ptr,39);
	printf("%d", n);
    return 0;
}

