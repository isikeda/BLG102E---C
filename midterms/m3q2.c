#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, a, b, seed;
    printf("n, a, b, seed: ");
    scanf("%d %d %d %d", &n, &a, &b, &seed);
	srand(seed);
	
    int *nums = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        nums[i] = rand() % (b + 1 - a) + a;
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if (i < n -1) {
            printf(" ");
        }
        
    }
	printf("\n");
	
	free(nums);
    return 0;
}
