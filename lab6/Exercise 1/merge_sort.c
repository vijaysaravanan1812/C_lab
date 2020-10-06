// merge sort
#include<stdio.h>
#include"lib.c"
//function to merge the array

void merge(int arr[], int l ,int mid, int r)
{
    //let n1 and n2 be a size of new array
    int i, j, k;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    
    int temp2[n2];
    int temp1[n1];

    //coping elements to news arrays
    for ( i = 0; i < n1; i++)
        temp1[i] = arr[l + i];

    
    for(j = 0; j < n2; j++)
        temp2[j] = arr[mid + 1 +j];


    
    i = 0;
    j = 0;
    k = l;

    //merge the two arrays
    while (i < n1 && j < n2)
    {
        if (temp1[i] <= temp2[j])
        {
            arr[k] = temp1[i];
            i++;
        }
        else
        {
            arr[k] = temp2[j];
            j++;
        }
        k++;
        
    }

    //if any element is temp arrays then copied to original array
    
    while (i < n1 )
    {
        arr[k] = temp1[i];
        i++;
        k++;
    }
        
    while (j < n2 )
    {
        arr[k] = temp2[j];
        j++;
        k++;
    }

    
}


//function to divide the array
void mergesort(int arr[], int l, int r) 
{ 
    if (l < r)
    { 
        int m = l + (r - l) / 2; 
        mergesort(arr, l, m); 
        mergesort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    } 
}

int main()
{
    int arr[] = {4,545,1, 3, 2 , 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int l = 0,r = size -1;

    printf("given array is\n");
    print_array(arr,size);
    printf("After merge sort\n");
    mergesort(arr, 0, size - 1);
    print_array(arr,size);
    return 0;
    
}

