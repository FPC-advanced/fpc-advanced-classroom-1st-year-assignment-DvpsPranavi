//03.  Write a program find whether a number is a composite number
#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main() 
{
    int n,result;
    n=input_number();
    result = is_composite(n);
    output(n,result);
    return 0;
}

int input_number()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    return n;
}

int is_composite(int n)
{
    int i,result;
    for (i = 2; i < n; i++) 
    {
        if (n % i == 0) 
        {
            result=i;
            return result; 
        }
    }
    return 0;
}

void output(int n, int result)
{
    if (result) {
        printf("%d is a composite number.\n", n);
    } else {
        printf("%d is not a composite number.\n", n);
    }
}




