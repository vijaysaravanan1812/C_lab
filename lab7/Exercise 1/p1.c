
//matrix multiplication
#include<stdio.h>
#include"lib.c"

//declaration
int arr1[10][10],rows1,columns1, //array 1
    arr2[10][10],rows2,columns2, //array 2
    arr3[10][10], //array 3 to store zero
    choice; //geting choices  

void multiply(int arr1[10][10],int arr2[10][10],int arr3[10][10],int rows1,int columns1,int rows2,int columns2)
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            for (int k = 0; k < rows2 ; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

void addition(int arr1[10][10],int arr2[10][10],int arr3[10][10] ,int rows ,int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr3[i][j] = arr2[i][j] + arr1[i][j];
        }
        
    }
}

void get_and_print()
{
    printf("Enter no of row and columns of array A\n");
    scanf("%d%d",&rows1,&columns1);
    printf("Elements are\n");
    //geting elements for array 1
    get_2d_array(arr1,rows1,columns1);
    
    printf("-----------------------------------------------\n");
    printf("A\n");
    print_2d_array(arr1,rows1,columns1);
    
    printf("Enter no of row and columns of array B\n");
    scanf("%d%d",&rows2,&columns2);
    printf("Elements are\n");
    //geting elements for array 2
    get_2d_array(arr2,rows2,columns2);
    
    printf("-----------------------------------------------\n");
    printf("B\n");
    print_2d_array(arr2,rows2,columns2);
}

int main()
{
  
    get_and_print();
    //create new matrix to store result
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
                arr3[i][j] = 0;
        }
    }

    //geting choice
    printf("Additon -1\nMultiply -2\n" );
    scanf("%d",&choice);
    if(choice == 1)
    {
        if (rows1 == rows2 && columns1 == columns2)
         {   addition(arr1,arr2,arr3,rows1,columns1);
            printf("-----------------------------------------------\n");
            printf("A + B\n");
            print_2d_array(arr3,rows1,columns2);  
         }
        else
            printf("invalued\n");
    }

    if(choice == 2)
    {
        if (rows2 == columns1)
        {
            multiply(arr1,arr2,arr3,rows1,columns1,rows2,columns2);
            printf("-----------------------------------------------\n");
            printf("A * B\n");
            print_2d_array(arr3,rows1,columns2);  
        }
        else
            printf("invalued\n");
    }

    if(choice >= 3)
        printf("Enter 1 or 2\n");
    
    return 0;
}