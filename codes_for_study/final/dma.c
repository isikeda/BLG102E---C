#include <stdio.h>
#include <stdlib.h>

#define LEN 50

typedef struct{
	char name[LEN];
	char surname[LEN];
	int age;
	double average;
	
}student;

int main(){
	int n;
	printf("How much students do you want to enter info?");
	scanf("%d", &n);
	
	student *info;
	info = (student*) malloc(sizeof(student) * n);
	
	for(int i = 0; i < n; i++){
		printf("Enter the name and surname of student %d: ", (i+1));
		scanf("%s", (info+i)->name);
		scanf("%s", (info+i)->surname);
		printf("Enter the age of student %d: ", (i+1));
		scanf("%d", &(info+i)->age);
		printf("Enter the average of student %d: ", (i+1));
		scanf("%lf", &(info+i)->average);
	}
	
	printf("-----------------------------------------------\nINFORMATIONS OF STUDENTS\n");
	for(int i = 0; i < n; i++){
		printf("--Student %d--\n", (i+1));
		printf("Name and Surname: %s %s\nAge: %d\nAverage: %.2lf\n", (info+i)->name, (info + i)->surname, (info+i)->age, (info+i)->average);
		printf("\n");
	}
}