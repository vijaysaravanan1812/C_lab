#include<stdio.h>

int main()
{
    int number1,number2,temp1,temp2,temp3,sum,count;
    printf("Enter the number1\n");
    scanf("%d",&number1);
    printf("Enter the number2\n");
    scanf("%d",&number2);
    printf("Angstron Numbers between %d and %d is\n",number1,number2);

    for (int  i = number1 + 1; i < number2; i++)
    {
        count = 0;
        temp1 = temp2 = temp3 = i;
        while (temp1 != 0)
        {
            count++;
            temp1 = temp1 / 10; 
        }
        sum = 0;
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
        if (temp3 == sum)
        {
            printf("%d\t",i);
        }
    }printf("\n");
    

    
    
    return 0;
    
}