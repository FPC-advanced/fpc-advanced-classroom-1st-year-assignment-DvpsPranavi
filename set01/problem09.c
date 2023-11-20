//9. Write a C program to find the [square root] of a number.
#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main() {
    float number, sqrRoot;

    number = input(); 
    sqrRoot = square_root(number); 
    output(number, sqrRoot); 

    return 0;
}


float input() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    return num;
}


float square_root(float n) {
    if (n < 0) {
        return -1.0f; 
    }

    float estimate = 1.0f;
    float prevEstimate=0;

    while (estimate != prevEstimate) {
        prevEstimate = estimate;
        estimate =0.5*(estimate + n / estimate);
    } "%.3f"

    return estimate;
}

void output(float n, float sqrroot) {
    if (sqrroot < 0) {
        printf("Cannot calculate the square root of a negative number.\n");
    } else {
        printf("The square root of %.2f is approximately %.6f\n", n, sqrroot);
    }
}
