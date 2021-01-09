#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max_val = 0,max_val2 = 0;
    int min_val = 0,min_val2 = 0;
    printf("Array is:\t");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }printf("\n");
    
    for (int i = 0; i < size; i++)
    {
        if (max_val < arr[i])
            max_val = arr[i];

    }
    for (int j = 0; j < size; j++)
    {
        if (min_val > arr[j])
            min_val = arr[j];
    }
    


    for (int i = 0; i < size; i++)
    {
        if (max_val2 < arr[i])
        {
            if (arr[i] == max_val)
            {
                continue;
            }
            
            max_val2 = arr[i];
        }
    }
    for (int j = 0; j < size; j++)
    {
        if (arr[j] <= min_val2)
        {
            if (arr[j] == min_val2)
            {
                continue;
            }
            printf("hi\n");
            min_val2 = arr[j];
        }
    }
    printf("maximum value %d\t \n" ,max_val);
    printf("minimum value %d\t \n" ,min_val);
    printf("The two largwst number in array is %d and %d \n",max_val,max_val2);
    printf("second maximum value %d\t \n" ,max_val2);
    printf("second minimum value %d\t \n" ,min_val2);
   

    return 0;
    
}