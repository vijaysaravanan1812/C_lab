//2)	C Program to Multiply Two Floating-Point Numbers

#include<stdio.h>

int main()
{
    float num1;
    float num2;
    printf("Enter the floating point no:\t");
    scanf("%f", &num1); 
    printf("Enter the floating point no:\t");
    scanf("%f", &num2);
    printf("Result is %f \n", num1 * num2);
    return 0; 
}