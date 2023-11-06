//04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include <stdio.h>
input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n,sum;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum = sum_composite_numbers(n,a);
    output(sum);
    return 0;
}

input_array_size()
{
    int n;
    printf("Enter the array size\n");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{
    
    for (int i=0;i<n;i++)
    {
        printf("Enter the elements of the array\n");
        scanf("%d",&a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
    int i,sum;
    for (i = 2; i < n; i++) 
    {
        if (n % i == 0) 
        {
            
            sum=sum+i;
           
        }
    }
    return sum;

}

void output(int sum)
{
    printf("The sum is: %d \n", sum);
}

