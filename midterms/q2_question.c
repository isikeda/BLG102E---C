/* BLG 102E Midterm 2 Question 2 Template
Do not change the function name.
Do not change the order of the function calls in main.
*/
#include <stdio.h>

double alternating_function(int choice, int array[], int SIZE)
{
    double result = array[0];
	
	for(int i = 1; i < SIZE; i++){
		if(i%2 == 1){
			if(choice == 1){
				result -= array[i];
			}
		}
	}
}


int main()
{
    //Define variables here.
	int SIZE = 10;
	int array[10];
	int counter = 0;
	int a;
	
    printf("Enter up to 10 non-negative integers (-1 to terminate):");
    //Complete the code
	
	while(counter < SIZE){
		scanf("%d", &a);
		if(a == -1) break;
		
		array[counter] = a;
	}
	
	int choice;
    printf("\nEnter your choice (1 for alternating sum or 2 for alternating division):");
    scanf("%d", &choice);
    double result = alternating_function(/*fill the parameters*/);
    printf("The result is %.2f\n", result);
    return 0;
}
