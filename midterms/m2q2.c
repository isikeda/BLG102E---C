/* BLG 102E Midterm 2 Question 2 Template
Do not change the function name.
Do not change the order of the function calls in main.
*/
#include <stdio.h>
#define SIZE 10

double alternating_function(int array[], int size, int x)
{
	double res;
    if (x == 1){
		int sum = 0;
		for (int i = 0; i < size; i++){
			if ((i % 2) == 0){
				sum += array[i];
			} else {
				sum -= array[i];
			}
		}
		res = sum;
	} else if(x == 2) {
		double product = 1;
		for (int i = 0; i < size; i++){
			if ((i % 2) == 0){
				product *= array[i];
			} else {
				product /= array[i];
			}
		}
		res = product;
	} else {
		return 1;
	}
	return res;
}


int main()
{
    int arr[SIZE] = {0};
	int count = 0;
	
    printf("Enter up to 10 non-negative integers (-1 to terminate):");
    for (int i = 0; i < SIZE; i++){
		scanf("%d", &arr[i]);
		
		if (arr[i] == -1){
			break;
		}
		count++;
	}
	
	
	//Do not change the code below or add new lines below this comment. Fill the function parameters only. 
	int choice;
    printf("\nEnter your choice (1 for alternating sum or 2 for alternating division):");
    scanf("%d", &choice);
    double result = alternating_function(arr, count, choice);
    printf("The result is %.2f\n", result);
    return 0;
}
