//3) find the error in given program 

#include <stdio.h>

int main()
{
    int i = (1, 2, 3); // here  no error , i contain last value that declare to i
    
    printf("%d", i);
    
    return 0;
}
