#include <stdio.h>

int main()
{
	float temp;
	char c;
	printf("Enter temperature (end with F for Fahrenheit or C for Celsius): ");
	scanf("%f %c", &temp, &c);
	if(c == 'C')
	{
		if (temp <= 0) printf("Water is Solid (Ice)");
		if (temp >= 100) printf("Water is Gas (Vapor)");
		if ((temp > 0) && (temp < 100)) printf("Water is Liquid");
		printf(" at %.2f degrees Celsius\n", temp);
	}
	else if(c ==  'F')
	{
		if (temp <= 32) printf("Water is Solid (Ice)");
		if (temp >= 212) printf("Water is Gas (Vapor)");
		if ((temp > 32) && (temp < 212)) printf("Water is Liquid");
		printf(" at %.2f degrees Fahrenheit\n", temp);
	}
	else {
		printf("Please enter temperature unit as either C or F.\n");
		return 1;
	}
	return 0;
}