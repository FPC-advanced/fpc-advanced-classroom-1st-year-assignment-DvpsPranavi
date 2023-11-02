//01.  Write a program to find the area of a triangle.
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main()
{
    int base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}

void input(float *base,float *height)
{
    printf("Enter the base of the triangle\n");
    scanf("%f",base);
    printf("Enter the height of the triangle\n");
    scanf("%f",height);
    
}