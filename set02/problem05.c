//05.  Write a program to find GCD _(HCF)_ of two numbers.
#include <stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
    int n,a,b,gcd;
    n= input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}
int input()


