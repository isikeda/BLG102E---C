#include <stdio.h>

int main()
{
	double degree;
	char type;
	int altitude;
	printf("Enter temperature (end with F for Fahrenheit or C for Celsius): ");
	scanf("%lf %c",&degree,&type);
	printf("Enter altitude in meters: ");
	scanf("%d",&altitude);
	if (type=='C' && degree<=0)
		{
			printf("Water is Solid (Ice) at %.2lf degrees Celsius\n",degree);
		}
	else if (type=='C' && degree>=100)
		{
			printf("Water is Gas (Vapor) at %.2lf degrees Celsius\n",degree);
		}
	else if (type=='C' && degree>0 && degree<100)
		{
			if(altitude==500)
				{
					printf("Water is Gas (Vapor) at %.2lf degrees Celsius\n",degree);
				}
			else
			
					{printf("Water is Liquid at %.2lf degrees Celsius\n",degree);}
					
		}else if (type=='F' && degree<=32)
		{
			printf("Water is Solid (Ice) at %.2lf degrees Fahrenheit\n",degree);
		}		
	else if (type=='F' && degree>=212)
		{
			printf("Water is Gas (Vapor) at %.2lf degrees Fahrenheit\n",degree);
		}		
	else if (type=='F' && degree>32 && degree<212)
		{
			printf("Water is Liquid at %.2lf degrees Fahrenheit\n",degree);
		}
	else
		{
			printf("Please enter temperature unit as either C or F.\n");
			return 1;
		}
	
	return 0;
}