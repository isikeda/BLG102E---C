#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int hour, minute, second, split_second;
}time;

time diff(time time1, time time2){
	time difference_with_times;
	if(time1.split_second < time2.split_second){
		time1.split_second += 100;
		time1.second -= 1;
	}
	difference_with_times.split_second = time1.split_second - time2.split_second;
	
	if(time1.second < time2.second){
		time1.second += 60;
		time1.minute -= 1;
	}
	difference_with_times.second = time1.second - time2.second;
	
	
	if(time1.minute < time2.minute){
		time1.minute += 60;
		time1.hour -= 1;
	}
	difference_with_times.minute = time1.minute - time2.minute;
	
	difference_with_times.hour = time1.hour - time2.hour;
	
	return difference_with_times;
}

int main(){
	time t1, t2;
	printf("Enter the start time:\n");
	printf("Hours:");
	scanf("%d", &t1.hour);
	printf("Minutes:");
	scanf("%d", &t1.minute);
	printf("Seconds:");
	scanf("%d", &t1.second);
	printf("Split-seconds:");
	scanf("%d", &t1.split_second);
	
	printf("Enter the stop time:\n");
	printf("Hours:");
	scanf("%d", &t2.hour);
	printf("Minutes:");
	scanf("%d", &t2.minute);
	printf("Seconds:");
	scanf("%d", &t2.second);
	printf("Split-seconds:");
	scanf("%d", &t2.split_second);
	
	time diff_t = diff(t1, t2);
	
	printf("Time Difference: %d:%d:%d.%d", diff_t.hour, diff_t.minute, diff_t.second, diff_t.split_second);
	
	return 0;
}