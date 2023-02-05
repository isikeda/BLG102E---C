#include <stdio.h>
#include <stdlib.h>

int strleng(char *str);

void print_str(char *str);

char* strconc(char* firststr, char* secondstr);

int main(){
	char *str1 = (char*) malloc(100 * sizeof(char));
	char *str2 = (char*) malloc(100 * sizeof(char));
	printf("Enter the first string:");
	scanf("%s", str1);
	printf("Enter the second string:");
	scanf("%s", str2);
	
	print_str(str1);
	print_str(str2);

	int a = strleng(str1);
	int b = strleng(str2);
	
	printf("%d\n%d\n", a, b);
	

	
	char *new_str = strconc(str1, str2);
	print_str(new_str);
	
	return 0;
}

int strleng(char *str){
	int length = 0;
	int i = 0;
	int counter = 0;
	while (*(str + i) != '\0'){
		counter += 1;
		i++;
	}
	length = counter;
	return length;
}

void print_str(char *str){
	int i = 0;
	while (*(str + i) != '\0'){
		printf("%c", *(str +i));
		i++;
	}
	printf("\n");
	return;
}

char* strconc(char* firststr, char* secondstr){
	char *concatenated_string = (char*) malloc(100 * sizeof(char));
	int len1 = strleng(firststr);
	int len2 = strleng(secondstr);
	
	for (int i = 0; i < len1; i++){
		*(concatenated_string + i) = *(firststr + i);
	}
	
	for (int j = 0; j < len2; j++){
	*(concatenated_string + len1 + j) = *(secondstr + j);
	}
	
	*(concatenated_string + len1 + len2) = '\0';
	

	return concatenated_string;
}