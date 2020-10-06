#include<stdio.h>
#include<string.h>

//to reverse string

char mystrrev(char str1[10],char str2[10]);

int main()
{
    char str1[10],str2[10],str3[10];
    printf("Enter the string\t");
    scanf("%s", str1);
    mystrrev(str1,str2);
    printf("Copy of string is:\t");
    printf("%s\n",str2);
    return 0 ; 
}

char mystrrev(char str1[10],char str2[10])
{
    int i = 0;
    int j = strlen(str1) - 1;
    printf("%d",j);
    while (str1[i] != '\0')
    {
        str2[j] = str1[i];
        i++;
        j--;
    }
    str2[i] = '\0';

    return str2[10];
    
}

