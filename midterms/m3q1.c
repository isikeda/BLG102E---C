#include <stdio.h>

#define MAXLEN 50

void lstrip(const char *src, char *dst) {

   int first = 0;  // index of first non-space character
    while (src[first] == ' ') {
        first++;
    }
    int i = 0;
    while (src[i] != '\0') {
		dst[i] = src[i + first];
        i++;  // increment, decrement, ...
    }
    dst[first + i] = '\0';
	
	return;
}

void rstrip(const char *src, char *dst) {
	int i = 0;
	int k = 0;
    while (src[i] != '\0') {
		if(src[i] == ' '){
			k++;
		}
		i++;  // increment, decrement, ...
    }
	
	int m;
	for(m = i -1; m > 0; m-- ){
		
		if (src[m] != ' '){
			break;
		}
			
	}
	
	
	

	int j = 0;
	while (src[j] != '\0'){
		if (j < m){
			dst[j] = src[j];
		}
		j++;
	}
	
	dst[i - m] = '\0';
	return;
}
/*
void strip(const char *src, char *dst) {
	
	return;
}*/

int main() {
    printf("enter the string: ");
    char line[MAXLEN];
    scanf("%[^\n]%*c", line);
	
	printf("enter the trim type (l, r, b): ");
    char type;
    scanf("%c", &type);
    if(type == 'l'){
        char lstripped[MAXLEN];
        lstrip(line, lstripped);
        printf("|%s|\n", lstripped);
    }
    else if(type == 'r'){
        char rstripped[MAXLEN];
        rstrip(line, rstripped);
        printf("|%s|\n", rstripped);
    }
    /*else if(type == 'b'){
        char stripped[MAXLEN];
        strip(line, stripped);
        printf("|%s|\n", stripped);
    }*/
    else{
        printf("unexpected command.");
    }
    
    return 0;
}
