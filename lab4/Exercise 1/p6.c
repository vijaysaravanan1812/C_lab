
#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("factor of no is:\t");
    for (int i = 1; i <= num; i++)
    {
        if (num%i == 0)
        {
            printf("%d\t",i);
        }
        
    }printf("\n");
    return 0;
    
}