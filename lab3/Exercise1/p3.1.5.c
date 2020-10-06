#include<stdio.h> 
int main() 
{ 
  int a = 2,b = 5; 
  a = a^b;      //bit wise OR
                //(2 -> 0010) ^ (5 -> 0101) = 0111 -> 7
  b = b^a;      //(5 -> 0101) ^ (7 -> 0111) = 0010 -> 2
  printf("%d %d",a,b); 
  return 0; 
}
