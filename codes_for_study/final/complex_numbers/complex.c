#include <stdio.h>
#include <stdlib.h>

#include "complexsource.h"
/*
typedef struct{
	double real_p;
	double imaginary_p;	
}complex_n;
*/
/*
complex_n* add_complex(complex_n* num1, complex_n* num2){
	complex_n* res_c =(complex_n*) malloc (sizeof(complex_n));
	res_c->real_p = num1->real_p + num2->real_p;
	res_c->imaginary_p = num1->imaginary_p + num2->imaginary_p;
	
	return res_c;
}

complex_n* subtract_complex(complex_n* num1, complex_n* num2){
	complex_n* res_c =(complex_n*) malloc (sizeof(complex_n));
	res_c->real_p = num1->real_p - num2->real_p;
	res_c->imaginary_p = num1->imaginary_p - num2->imaginary_p;
	
	return res_c;
}

complex_n* multiply_complex(complex_n* num1, complex_n* num2){
	complex_n* res_c =(complex_n*) malloc (sizeof(complex_n));
	res_c->real_p = (num1->real_p * num2->real_p) - (num1->imaginary_p * num2->imaginary_p); 
	res_c->imaginary_p = (num1->real_p * num2->imaginary_p) + (num1->imaginary_p * num2->real_p);
	
	return res_c;
}
*/
int main(){
	complex_n *c1, *c2;
	c1 = (complex_n*) malloc (sizeof(complex_n));
	c2 = (complex_n*) malloc (sizeof(complex_n));
	
	printf("For the first complex number\nEnter real and imaginary parts: ");
	scanf("%lf", &c1->real_p);
	scanf("%lf", &c1->imaginary_p);
	
	printf("For the second complex number\nEnter real and imaginary parts: ");
	scanf("%lf", &c2->real_p);
	scanf("%lf", &c2->imaginary_p);
	
	//complex_n* c_res = (complex_n*) malloc (sizeof(complex_n));
	
	complex_n *c_res1 = add_complex(c1, c2);
	complex_n *c_res2 = subtract_complex(c1, c2);
	complex_n *c_res3 = multiply_complex(c1, c2);
	
	printf("The sum of two complex number is: %.2lf + %.2lfi\n", c_res1->real_p, c_res1->imaginary_p);
	printf("The difference of two complex number is: %.2lf + %.2lfi\n", c_res2->real_p, c_res2->imaginary_p);
	printf("The product of two complex number is: %.2lf + %.2lfi\n", c_res3->real_p, c_res3->imaginary_p);
	
	free(c1);
	free(c2);
	free(c_res1);
	free(c_res2);
	free(c_res3);
	return 0;
}