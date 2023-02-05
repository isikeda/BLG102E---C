#include <stdio.h>
#include <stdlib.h>

int main(){
	char *str = (char*) malloc(100 * sizeof(char));
	//printf("Enter a string: ");
	//scanf("%s", str);
	
	*str = "eda";
	
	for(int i = 0; i != '\0'; i++){
		if (*(str + i) >= 'a' && *(str + i) <='z'){
			*(str + i) -= 32;
		}
	}
	
	int i = 0;
	while (*(str + i) != '\0'){
		printf("%c", *(str +i));
		i++;
	}
	printf("\n");
	
	
	
	
    return 0;
}

