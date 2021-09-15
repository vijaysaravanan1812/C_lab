//progrmam to demostrate implicit type cast

#include<stdio.h>
void main ()
{
   	int A=5, B= 2 , C, M;
   	float x = 5.5, y;
  	C = A + x; // conversion of x from float to int
  	 y = A + x; // conversion of A from int to float
   	M = A/B; // integer division results in M = 2

   	printf("C = %d \t y = %f\n", C, y );
   	printf("M = %d \n", M);
   	printf("x/B = %f \n", x/B);
}

