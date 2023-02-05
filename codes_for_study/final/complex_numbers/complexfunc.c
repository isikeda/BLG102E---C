#include <stdlib.h>

typedef struct{
	double real_p;
	double imaginary_p;	
}complex_n;

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