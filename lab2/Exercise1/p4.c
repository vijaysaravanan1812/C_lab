// 4)   C Program to Compute Quotient and Remainder
#include<stdio.h>

int main()
{
    int num1;
    int num2;

    printf("Enter the number \t");
    scanf("%d", &num1);
    printf("Enter the number \t");
    scanf("%d", &num2);

    printf("The Quotient is \t %d \n ", num1/num2);
    printf("Reminder is \t %d \n", num1 % num2);
    return 0 ;
       
}