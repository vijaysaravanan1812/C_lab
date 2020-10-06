// to check character is alphabet
#include<stdio.h>

int main()
{
    char c = 'D' ;
    int  alpha = ( ( c >= 'A' && c <= 'Z' ) || ( c >= 'a' && c <= 'z' ));

    if (alpha)
    {
            printf("it is alphabet");       /* code */
    }
    else
    {
        
        printf("it is not alphabet");
    }
    return 0;
    
}