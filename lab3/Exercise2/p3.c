// greatest among three numbers
#include<stdio.h>

int main()
{
    int a = 10 ,b = 30,c =32;
    if (a > b)
    {
        if (a > c)
        {
            printf("A is great");
        }
        printf("C is great");
        
    }
    if(c > b)
    {
        printf("c is great");
    }
    else
    {
        printf("b is great");
    }
    
    return 0;

}