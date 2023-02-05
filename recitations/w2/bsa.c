#include <stdio.h>
#include <math.h>

int main() {
    double height = 0.0;
    double weight = 0.0;

    printf("Enter your height (in cm):");
    scanf("%lf", &height);

    printf("Enter your weight (in gr):");
    scanf("%lf", &weight);

    double bsa = 0.0003207 * pow(height, 0.3) * pow(weight, 0.7285 - (0.0188 * log(weight)));
    printf("Body surface area is: %.2lf \n", bsa);
}