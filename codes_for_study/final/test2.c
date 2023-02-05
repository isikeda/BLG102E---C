#include <stdio.h>
#include <string.h>

#define LEN 50
int main(){
	char name[LEN];
	char surname[LEN];
	
	gets(name);
	gets(surname);
	
	printf(" -- %s %s\n", name, surname);
	
	strcat(name, " ");
	strcat(name, surname);
	
	printf(" -- %s", name);
	
	
	return 0;
}