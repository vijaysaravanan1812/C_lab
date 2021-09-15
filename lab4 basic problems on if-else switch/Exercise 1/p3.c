//3) program to print prime numbers between two numbers that enter by user 

#include<stdio.h>

int main()
{
    int num1,num2,count;
    printf("Enter the number 1\n");
    scanf("%d",&num1);
    printf("Enter the number 2\n");
    scanf("%d",&num2);
    printf("prime Numbers between %d and %d is\n",num1,num2);
    if (num1 == 1)
    {
        printf("%d\t",2);
        num1++;
    }
    
    for (int  i = num1 + 1; i < num2; i++)
    {
        count = 0;
        for (int j = 2; j <= i/2 ;  j++)
        {
            if (i%j == 0)
            {
                count++;
            }

               
        }
        if (count == 0)
        {
            printf("%d\t",i);
        }
        
        
    }printf("\n");
    

    return 0;
    
}