#include <stdio.h>

int main(int argc, char *argv[]){
	printf("You have entered %d arguments.\n", argc);
	
	for(int i = 0; i < argc; i++){
		printf("The %d. argument is %s\n", (i+1), argv[i]);
	}

	return 0;
}