#include<stdio.h>

//TO print array
int print_array(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }printf("\n");
    return 0;
}

