#include<stdio.h>
#include<string.h>

//to compare the string

int mystrcmp(char str1[10],char str2[10]);

int main()
{
    char str1[10],str2[10];
    int c;
    printf("Enter the string\t");
    scanf("%s", str1);
    printf("Enter the string\t");
    scanf("%s", str2);
    c = mystrcmp(str1,str2);
    printf("After calling string compare\n");
    printf("%d\n",c);
    return 0 ; 
}

int mystrcmp(char str1[10],char str2[10])
{
    int i = 0;
    int j = 0;
    while (str1[i] != '\0')
        i++;
    while (str2[j] != '\0')
        j++;
    if (j == i)
        return 0;
    else if (i < j)
        return -1;
    else if (i > j)
        return 1;
    
    
    
    
}

