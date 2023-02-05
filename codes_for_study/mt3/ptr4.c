#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *s = (char*) malloc(100 * sizeof(char));
    s = "eda";
	
	int i = 0;
	while (*(s + i) != '\0'){
		printf("%c", *(s +i));
		i++;
	}
	printf("\n");
	
    return 0;
}
