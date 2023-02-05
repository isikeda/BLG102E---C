#include <stdio.h>

int main () {
    int temp;
    printf("Enter a temperature value in Fahrenheit: ");
    scanf("%d", &temp);

    int cels;
    cels = 5/9 * (temp - 32);
    printf("temperature in Celsius: %d ", cels);
}