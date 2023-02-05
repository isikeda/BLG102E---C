#include <stdio.h>

#define MAX_SIZE 100

int main(){
	int arr[MAX_SIZE] = {0};
	int size;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	printf("Enter %d elements to the array:", size);
	for(int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	
	int arr_of_evens[MAX_SIZE] = {0};
	int arr_of_odds[MAX_SIZE] = {0};
	
	int count_even = 0;
	int count_odd = 0;
	
	for(int i = 0; i < size; i++){
		if (!(arr[i] % 2)){
			arr_of_evens[count_even] = arr[i];
			count_even++;
		}else{
			arr_of_odds[count_odd] = arr[i];
			count_odd++;
		}
	}
	
	printf("The even elements are: ");
	for (int i = 0; i < count_even; i ++){
		printf("%d ", arr_of_evens[i]);
	}
	printf("\n");
	
	printf("The odd elements are: ");
	for (int i = 0; i < count_odd; i ++){
		printf("%d ", arr_of_odds[i]);
	}
	
	return 0;
}