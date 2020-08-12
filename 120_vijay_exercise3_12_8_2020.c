//program to find out size of data type
#include<stdio.h>

int main()
{
    int size_of_int = sizeof(int);
    int size_of_float = sizeof(float);
    int size_of_short_int = sizeof(short int);
    int size_of_long_int = sizeof(long int);
    int size_of_double = sizeof(double);

    printf("Size of int %d \n", size_of_int);
    printf("Size of float %d \n" , size_of_float);
    printf("Size of short int %d \n" , size_of_short_int);
    printf("Size of long int %d \n" , size_of_long_int);
    printf("Size of double %d \n" , size_of_double);
    return 0;
}