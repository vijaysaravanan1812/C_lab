#include<stdio.h>
#include<string.h>

// function to copy string

char mystrcopy(char str1[10],char str2[10]);

int main()
{
    char str1[10],str2[10],str3[10];
    printf("Enter the string\t");
    scanf("%s", str1);
    mystrcopy(str1,str2);
    printf("Copy of string is:\t");
    printf("%s\n",str2);
    return 0 ; 
}

char mystrcopy(char str1[10],char str2[10])
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    return str2[10];
    
}

