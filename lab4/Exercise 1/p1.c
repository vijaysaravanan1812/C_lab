
#include<stdio.h>

int main()
{
    int number , temp , sum = 0;
    printf("Enter the number\n");
    scanf("%d",&number);
    temp = number;
    while (number != 0)
    {
        sum =sum*10 + number%10;
        number = number/10;
    } 
    if (sum == temp)
    {
        printf("it is palindrome number\n");
    }
    else
    {
        printf("it is not palindrome number\n");
    }
    
    return 0;
}