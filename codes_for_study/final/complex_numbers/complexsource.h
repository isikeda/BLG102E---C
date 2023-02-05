#ifndef COMPLEXSOURCE_H

#define COMPLEXSOURCE_H

typedef struct{
	double real_p;
	double imaginary_p;	
}complex_n;

complex_n* add_complex(complex_n* num1, complex_n* num2);

complex_n* subtract_complex(complex_n* num1, complex_n* num2);

complex_n* multiply_complex(complex_n* num1, complex_n* num2);

#endif