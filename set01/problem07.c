//7. Write a C program to find sum of all natural numbers until _n_
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main()
{
    int n,sum=0;
    n=input_n();
    sum=sum_n_nos(n);
    output( n,sum);
    return 0;
}

