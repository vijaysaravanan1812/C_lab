#include<stdio.h>

int	main()
	{
		int a,b;
		float c,d;

		a = 15;
		b = a / 2;
		printf("print in normal form :%d\n",b);
		printf("print by leaving 3 space :%3d\n",b);
		printf("print by adding 3 zeros :%03d\n",b);

		c = 15.3;
		d = c / 3;
		printf("print floating point no :%3.2f\n",d);
        return 0 ;
	}
