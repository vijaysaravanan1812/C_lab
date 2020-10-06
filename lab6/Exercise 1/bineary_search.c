//bineary search
#include<stdio.h>
#include"lib.c"
int bineary_search(int arr[],int l,int r,int key)
{
    if (r >= l)
    {
        int mid = l + (r - l)/2;
        if (arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            return bineary_search(arr,l,mid - 1,key);
        return bineary_search(arr,mid + 1,r,key);
            
    }
    return -1;
    
}

int main()
{
    int arr[] = {1,2,4,67,454,12345,6665322};
    int size = sizeof(arr)/sizeof(arr[0]),key;
    printf("given array is \t");
    print_array(arr,size);
    printf("Enter the key\n");
    scanf("%d",&key);
    int result = bineary_search(arr,0,size-1,key);
    if (result == -1)
    {
         printf("key is not found\n");
    }
    else
    {   
       
        printf("key is found at %d\n" ,result);
    }
    
    return 0;
}