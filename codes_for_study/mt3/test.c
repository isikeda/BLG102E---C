#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int integer = 123456;
	char *string = (char*) malloc(100 * sizeof(char));
	
	int i;
	for(i = 0; integer > 0; i++){
		
		*(string + i) = integer % 10 + '0';
		integer /= 10;
	}
	
	*(string + i) = '\0';
	
	int j = 0;
	while (*(string + j) != '\0'){
		printf("%c", *(string +j));
		j++;
	}
	printf("\n");
	
}