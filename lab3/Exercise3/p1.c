//C program to check whether the student is pass or fail using conditional operator

#include<stdio.h>

int main()
{
   int m ;
   printf(" Enter your 12 th mark\n");
   scanf("%d", &m);
   (m  < 300) ? printf("Fail mark \n") : printf("pass \n");

   return 0;

}