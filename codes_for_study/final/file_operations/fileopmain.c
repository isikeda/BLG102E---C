#include <stdio.h>
#include "fileopsource.h"   // Include our custom header file

int main(){
	
	int x, y;
	printf("Enter values for x and y: ");
	scanf("%d %d", &x, &y);
	
    printf("sum(%d, %d)  = %.2f\n", x, y, sum(x, y));
    printf("sub(%d, %d)  = %.2f\n", x, y, sub(x, y));
    printf("mult(%d, %d) = %.2f\n", x, y, mult(x, y));
    printf("div(%d, %d)  = %.2f\n", x, y, div(x, y));
    printf("mod(%d, %d)  = %d\n",   x, y, mod(x, y));

    return 0;
}