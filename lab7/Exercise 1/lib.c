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
//TO print 2d array
void print_2d_array(int arr[10][10],int rows,int columns)
{
    printf("-----------------------------------------------\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("-----------------------------------------------\n");
}
void get_2d_array(int arr[10][10],int rows,int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
}