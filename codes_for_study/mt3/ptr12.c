#include <stdio.h>
#include <stdlib.h>

void print_str(char *str){
	int i = 0;
	while (*(str + i) != '\0'){
		printf("%c", *(str +i));
		i++;
	}
	printf("\n");
	return;
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

char* substring1(char* source_string, char* destination_string, int start, int size){
	int source_length = strleng(source_string);
	if(start + size <= source_length){
		source_string += start;
		for(int i = 0; i < size; i++){
			destination_string[i] = source_string[i];
		}
		destination_string[size] = '\0';
	}
	return destination_string;
}



int main(){
	//char* name = "Eda";
	//printf("%s", name);
	
	char* str = "abcdefghiklmnoprs";
	char* substr1 = (char*) malloc(100 * sizeof(char));
	//char* substr2 = (char*) malloc(100 * sizeof(char));
	
	print_str(str);
	print_str(substring1(str, substr1,3,5));
	
	
	
	return 0;
}