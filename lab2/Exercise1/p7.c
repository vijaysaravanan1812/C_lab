// swap the number
#include<stdio.h>
int main()
{
    int temp,a =1 ,b = 21;
    printf("The numbers are  %d and %d \n ", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Ater swap the numbers are  %d and %d \n", a, b);
    return 0;
}
