#include<stdio.h>

int main()
{
    int num1,num2,result,k;
    printf("Add - 1\nMinus - 2\nMultiply - 3\nDivide - 4\n");
    printf("Enter the number1\n");
    scanf("%d",&num1);
    printf("Enter the number2\n");
    scanf("%d",&num2);
    printf("Enter your choice\n");
    scanf("%d",&k);
    switch (k)
    {
    case 1:
        printf("%d\n",num1+num2);
        break;
    case 2:
        printf("%d\n",num1-num2);
        break;
    case 3:
        printf("%d\n",num1*num2);
        break;
    case 4:
        printf("%d\n",num1/num2);
        break;
    
    }
    return 0;
}