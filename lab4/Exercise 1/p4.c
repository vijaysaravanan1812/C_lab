#include<stdio.h>

int main()
{
    int num,temp1,temp2,count = 0,sum = 0;
    printf("Enter the number\n");
    scanf("%d",&num);
    temp1 = temp2 = num;
    while (temp1 != 0)
    {
        count++;
        temp1 = temp1 / 10; 
    }
    while(temp2 != 0)
    {
        int product;
        product = 1;
        for (int i = 1; i <= count; i++)
        {
            product *= temp2%10;
        }
        sum = sum + product;
        temp2 = temp2/10;
    }
    printf("%d\n",sum);
    if (num == sum)
    {
        printf("it is angstrom number\n");
    }
    else
    {
        printf("it is not angstrom number\n");
    }
    
    
    return 0;
    
}