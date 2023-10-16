//6. Write a C program to compare three numbers using **pass by reference**
#include <stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main()
{
    int a,b,c,largest;
    int n;
    n=input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}
int input(int*a, int *b, int *c)
{
  int x;
  printf("Enter the number\n");
  scanf("%d",&x);
  return x;
}
    
    
void compare(int a,int b, int c,int *largest)
{
  if(a>=b && a>=c)
  {
    *largest= a;
    return largest;
  }
  if (b>=a && b>=c)
  {
    *largest= b;
    return largest;
  }
  else
  {
        
    *largest= c;
    return largest;
  }
  return 0;
}

void output(int a,int b,int c,int largest)
{
    printf("%d",largest);
}
