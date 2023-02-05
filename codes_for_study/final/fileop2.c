#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAXLEN 50

typedef struct person_s{
	char name[MAXLEN];
	int age;
}person_t;

int main(){
	FILE *fp = NULL;
	char line[MAXLEN];
	person_t person [5];
	
	strcpy(person[0].name, "Dennis Ritchie");
	person[0].age = 85;
	
	strcpy(person[1].name, "Grace Hopper");
	person[1].age = 78;
	
	fp = fopen("people.bin","wb");
	fwrite(&person, sizeof(person_t), 2, fp);
	fclose(fp);
	
	fp = fopen("people.bin", "rb");
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
