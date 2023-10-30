//Write a C program to find the sum of 2 complex numbers
struct _complex {
	float real;
	float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
void print_complex(Complex c);
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);