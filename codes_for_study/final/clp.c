#include <stdio.h>
#include <stdlib.h>

#define MAXLEN 50

int main(int argc, char *argv[]){
	printf("argc: %d\n", argc);
	for(int i = 0; i < argc; i++){
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	if(argc < 2){
		fprintf(stderr, "Usage: %s NAME\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	printf("Hello, %s!\n", argv[1]);

	return 0;
}