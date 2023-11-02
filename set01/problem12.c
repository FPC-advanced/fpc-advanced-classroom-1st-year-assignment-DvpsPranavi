//12. Write a C program to find the sum of _n_ complex numbers
#include <stdio.h>
struct _complex 
{
	float real;
    float imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main() 
{
    int n;
    n=get_n();
    Complex complex_numbers[n];
    input_n_complex(n, complex_numbers);
    Complex value = add_n_complex(n, complex_numbers);
    output(n, complex_numbers, value);
    return 0;
}

int get_n()
{
    int n;
    printf("Enter the number of natural numbers\n");
    scanf("%d",&n);
    return n;
}
Complex input_complex()
{
    Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

void input_n_complex(int n, Complex c[n])
{
    for (int i = 0; i < n; i++) 
    {
        printf("Enter complex number %d:\n", i + 1);
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) 
{
    Complex value;
    value.real = a.real + b.real;
    value.imaginary = a.imaginary + b.imaginary;
    return value;
}
Complex add_n_complex(int n, Complex c[n]) 
{
    Complex value = {0.0, 0.0};
    for (int i = 0; i < n; i++) {
        value = add(value, c[i]);
    }
    return value;
}

void output(int n, Complex c[n], Complex value )
 {
    printf("Complex numbers entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d: %.2f + %.2fi\n", i + 1, c[i].real, c[i].imaginary);
    }
    printf("Sum of the %d complex numbers: %.2f + %.2fi\n", n, value.real, value.imaginary);
}

