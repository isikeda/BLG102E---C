#include <stdio.h>
#include <math.h>

int main () {
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    printf("Enter an a value for a second degree polynomial:");
    scanf("%lf", &a);
    printf("Enter a b value for a second degree polynomial:");
    scanf("%lf", &b);
    printf("Enter a c value for a second degree polynomial:");
    scanf("%lf", &c);

    double disc = 0.0;
    disc = b * b - 4 * a * c;
    double x1 = 0.0;
    double x2 = 0.0;

    x1 = ( (-b) + sqrt(disc)) / 2*a;
    x2 = ( (-b) - sqrt(disc)) / 2*a; 

    printf("The first root is: %.2lf \n", x1);
    printf("The second root is: %.2lf \n", x2);
}