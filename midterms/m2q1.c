/* BLG 102E Midterm 2 Question 1 Template
Do not change the function names.
Do not change the order of the function calls in main.
*/

#include <stdio.h>
#define SIZE 20

void get_characters(char array[], int size)
{
    for (int i = 0; i < size; i++){
		scanf("%c", &array[i]);
	}
}

void reverse_characters(char array[], int size)
{
    
	char swap;
	for (int i = 0; i < size/2; i++){
		int j = size -1 -i;
		swap = array[i];
		array[i] = array[j];
		array[j] = swap;
	}
	
}

void print_characters(char array[], int size)
{
    for (int i = 0; i < size; i++){
		printf("%c", array[i]);
	}
	printf("\n");
}


int main()
{
    //Define the variables here
	char arr[SIZE];
	
	
	
	//Do not change the code below or add new lines below this comment. Fill the function parameters only. 
	printf("Insert 20 consecutive characters:");
	get_characters(arr, SIZE);
	printf("\nThe user entered the following characters:");
	print_characters(arr, SIZE);
    reverse_characters(arr, SIZE);
	printf("The characters in reverse order are: ");
    print_characters(arr, SIZE);
	
    return 0;
}
