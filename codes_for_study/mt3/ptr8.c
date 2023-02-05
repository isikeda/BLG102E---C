#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char *str);

int main() {
    char *str1 = (char*) malloc(100 * sizeof(char)); 
	char *str2 = (char*) malloc(100 * sizeof(char));
	char *copied = (char*) malloc(100 * sizeof(char));	

	printf("Enter the first string: ");
	scanf("%s", str1);
	printf("Enter the second string: ");
	scanf("%s", str2);
	
	printf("First string: ");
	print_str(str1);
	printf("Second string");
	print_str(str2);
	
	int x = strlen(str1);
	int y = strlen(str2);
	int z = strcmp(str1, str2);
	
	printf("The lengths of '%s' and '%s' are %d and %d.\n", str1, str2, x, y);
	printf("%d\n", z);
	
	strcpy(copied, str1);
	printf("The copied string:");
	print_str(copied);
	
	strncpy(copied, str2, 3);
	printf("The copied string verse 2:");
	print_str(copied);
	
	//strcat(str2, str1);
	//print_str(str2);
	
	strncat(str2, str1, 3);
	print_str(str2);
	
	free(str1);
	free(str2);
	free(copied);
    return 0;
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