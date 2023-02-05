#include <stdio.h>
#include <stdlib.h> //srand,rand,exıt_success
#include <time.h> 
#include <stdbool.h> //bool

#define N_ITERATIONS 1000000

int main()
{
	int strategy_1 = 0; //wins when not changing the door
	int strategy_2 = 0; //wins when changing the door
	int i = 0;
	srand(time(NULL));
	while (i < N_ITERATIONS)
	{
		int prize_door = rand() % 3 + 1;
		int selected_door = rand() % 3 + 1;
		
		int opened_door = 0;
		int notopened_door = 0;
		if (prize_door != selected_door)
		{//1+2+3
			opened_door = 6 - prize_door - selected_door;
			notopened_door = prize_door;
		}
		else
		{
			bool heads = rand() % 2 == 0;
			switch (prize_door)
			{
				case 1:
					opened_door = heads ? 2 : 3;
					break;
				case 2:
					opened_door = heads ? 1 : 3;
					break;
				case 3:
					opened_door = heads ? 1 : 2;
					break;
			}
			notopened_door = 6 - prize_door - opened_door ;
		}
		if (prize_door ==selected_door)
		 // we win if we do not change the door
			strategy_1++;
		 
		else if 
			(prize_door== notopened_door)
			strategy_2++; // we win if we do change the door
		
		
		i++;
	}
	double win_ratio_1 = (double) strategy_1 / N_ITERATIONS;
	double win_ratio_2 = (double) strategy_2 / N_ITERATIONS;
	printf("win ratio for strategy 1: %.3lf\n",win_ratio_1);
	printf("win ratio for strategy 2: %.3lf\n",win_ratio_2);
	return EXIT_SUCCESS;
	
}