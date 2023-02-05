#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	FILE *fp;
	int maxlen = 10000;
	char *text = (char*) malloc(sizeof(char) * maxlen);
	
	
	fp = fopen("text.txt", "w");
	printf("Enter a message: ");
	
	fgets(text, maxlen, stdin);
	
	fputs(text, fp);
	
	fclose(fp);
	
	fp = fopen("text.txt", "r");
	while(true){
		fgets(text, maxlen, fp);
		if(feof(fp)){
			break;
		}
		printf("%s", text);
	}
	fclose(fp);
	
	free(text);
	return 0;
}