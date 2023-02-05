#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 100

void substring(char *text, int start, int len);

int main(){
	char s[MAXLEN];
	printf("Input the string: ");
	fgets(s, MAXLEN, stdin);
	
	int s_pos;
	printf("Input the position to start extraction: ");
	scanf("%d", &s_pos);
	
	int leng;
	printf("Input the length of the substring: ");
	scanf("%d", &leng);
	
//	char *subst = (char*) malloc(sizeof(char) * leng);
	
//	*subst = substring(s, s_pos, leng);
	printf("The substring retrieve from the string is:");
	substring(s, s_pos, leng);
	
//	free(subst);
	
	return 0;
}

void substring(char *text, int start, int len){
	char subs[len];
	
	for(int i = start - 1, j = 0; i < (start - 1 + len); i++, j++){
		*(subs + j) = *(text + i);
	}
	*(subs + len + start - 1 ) = '\0';
	
	puts(subs);
	
	return;
}