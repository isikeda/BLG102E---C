/* BLG 102E Midterm 2 Question 1 Template
Do not change the function names.
Do not change the order of the function calls in main.
*/

#include <stdio.h>

void get_characters(char input[], int SIZE)
{
    int counter = 0;
	char a;
	while(counter < SIZE){
		scanf("%c", &a);
		input[counter] = a;
		counter++;
	}
}

void reverse_characters(char input[], char output[], int SIZE)
{
    int j = 0;
	for(int i - SIZE - 1; i >= 0; i--){
		output[j] = input[i];
		j++
	}
	return;
}

void print_characters(char arr[], int SIZE)
{
    for(int i = 0; i < SIZE; i++){
		printf("%c", arr[i]);
	}
	printf("\n");
	return;
}


int main()
{
    //Define the variables here
	const int SIZE = 20;
	char input[SIZE];
	char output[SIZE];
	
	
	//Do not change the code below or add new lines below this comment. Fill the function parameters only. 
	printf("Insert 20 consecutive characters:");
	get_characters(input, SIZE);
	printf("\nThe user entered the following characters:");
	print_characters(input, SIZE);
    reverse_characters(input, output, SIZE);
	printf("The characters in reverse order are: ");
    print_characters(output, SIZE);
	
    return 0;
}
