//1) find error in given program 

#include "stdio.h" // this line is error beacause header file mention within angular bracket
int main() 
{ 
  int x, y = 5, z = 5; 
  x = y == z; 
  printf("%d", x); 
  
  getchar(); 
  return 0; 
}
