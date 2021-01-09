//2) C program to check whether the student is pass or fail using if else

#include<stdio.h>

int main()
{
    int m ;
    printf(" Enter your 12 th mark\n");
    scanf("%d", &m);
    if(m  < 300) 
    printf("Fail mark \n");
    else 
    printf("pass \n");

   return 0;

}