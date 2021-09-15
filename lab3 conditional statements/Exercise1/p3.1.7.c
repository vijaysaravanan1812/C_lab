//7) program to demonstrate increament and decreament operator

#include<stdio.h>  
int main(void)  
{  
  int a = 1;  
  int b = 0;  
  b = a++ + a++;  // (a increament to 2 but not assign)  1 + 2 (a increament to 3 but not assign) 
  printf("%d %d",a,b);  
  return 0;  
} 
