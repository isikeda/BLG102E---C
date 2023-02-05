#include <stdio.h>
#include <stdlib.h>


int main () {
    double a b c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double disc = 0.0;
    disc = b * b - 4 * a * c;
    double x1 = 0.0;
    
    x1 = ( (-b) + sqrt(disc)) / 2*a;

    printf("Root: %.2lf \n", x1);
     

    return EXIT_SUCCESS;
}