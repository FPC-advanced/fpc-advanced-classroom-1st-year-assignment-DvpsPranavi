//Write a C program to find the sum of 2 complex numbers
struct _complex {
	float real;
	float imaginary;
}
typedef struct _complex Complex;
Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main() 
{  Complex a,b,sum;
   Complex input_complex();
   Complex add_complex(a,b);
   void output(a,b,sum);
}

Complex input_complex()
{
    Complex a,b;
    printf("Enter the real part for C1\n");
    scanf("%f",&a.real);
    printf("Enter the img part for C1\n");
    scanf("%f",&a.img);
    printf("a is %f+i%f\n",a.real,a.img);

    printf("Enter the real part for C2\n");
    scanf("%f",&b.real);
    printf("Enter the img part for C2\n");
    scanf("%f",&b.img);
    printf("b is %f+i%f\n",b.real,b.img);
  
}

Complex add_complex(Complex a, Complex b)
{   
	Complex sum;
	sum.real=a.real+b.real;
    sum.img=a.img +b.img;
}
    
void output(Complex a, Complex b, Complex sum)
{
	printf("The sum of a and b is %f+i%f\n",sum.real,sum.img);
	
}
    
   



