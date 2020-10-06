#include<stdio.h>
#include<string.h>

//to find string length 

int mystrlen(char str1[10]);

int main()
{
    char str1[10];
    int len;
    printf("Enter the string\t");
    scanf("%s", str1);
    len = mystrlen(str1);
    printf("length of string is:\t");
    printf("%d\n",len);
    return 0 ; 
}

int mystrlen(char str1[10])
{
    int i = 1;
    while (str1[i] != '\0')
        i++;

    return i;
    
}

