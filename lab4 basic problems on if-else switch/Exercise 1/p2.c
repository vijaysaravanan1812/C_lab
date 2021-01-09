//2) check if given number is prime number

#include<stdio.h>

int main()
{
    int number,count = 0;
    printf("Enter the number\n");
    scanf("%d",&number);
    for (int  i = 2; i <= number/2; i++)
    {
        if (number == 2)
        {
            printf("it is prime number\n");
            continue;
        }
        
        if (number%i == 0)
        {
            printf("it is  not prime number\n");
            count++;
            break;
        }

        
    }
    if (count == 0)
    {
        printf("it is prime number\n");
    }
    return 0;
    
}