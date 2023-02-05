#include <stdio.h>

int main() {
    int number = 0;
    printf("Enter a three digit number:");
    scanf("%d", &number);

    int third = number % 10;
    int second = (number/10) % 10;
    int first = (number/100) % 10;

    printf("Digits of number %d are %d , %d , %d", number, first, second, third);
}