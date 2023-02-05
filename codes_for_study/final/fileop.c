#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAXLEN 50

int main(){
	FILE *fp;
	char *line = (char*) malloc(50 * sizeof(char));
	char line2 [MAXLEN];
//	char line3 [MAXLEN];
	
	fp = fopen("test.txt","w");
	while(true){
		printf("Enter name: ");
		fgets(line, MAXLEN, stdin);
		if(line[0] == '\n'){
			break;
		}
//		fputs(line, fp);
		
		printf("Enter age: ");
		fgets(line2, MAXLEN, stdin);
		if(line2[0] == '\n'){
			break;
		}
//		fputs(line2, fp);
		
		strcat(line, line2);
		fputs(line, fp);
		
	}
	
	fclose(fp);
	
	
	
	
	fp = fopen("test.txt", "r");
	while(true){
		fgets(line, MAXLEN, fp);
		if(feof(fp)){
			break;
		}
		printf("%s", line);
	}
	fclose(fp);
	
	
	return 0;
}