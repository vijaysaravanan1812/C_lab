//6.	C Program to Demonstrate the Working of Keyword long
#include<stdio.h>

int main()
{
    long int num = 9223372036854775807;
    long int num1 = -9223372036854775807; 
    float num2 = 3.3;
    printf("The long int range  %ld to %ld \n" ,num1, num);
    printf("Long float %lf \n",num2);
    return 0;
}