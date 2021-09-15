#include<stdio.h>
#include<string.h>

//palindrome

void palindrome(char str1[10]);

int main()
{
    char str1[10],str2[10],str3[10];
    printf("Enter the string\t");
    scanf("%s", str1);
    palindrome(str1);
    return 0 ; 
}

void palindrome(char str1[10])
{
    char str2[10];
    int i = 0;
    int j = strlen(str1) - 1;
    while (str1[i] != '\0')
    {
        str2[j] = str1[i];
        i++;
        j--;
    }
    str2[i] = '\0';

     i = 0;
     j = 0;
    while ( strlen(str1) == strlen(str2) )
    {
        if (str1[i] != str2[j])
        {
            printf("given string is not palindrome\n");
            break;
        }
        if (i == strlen(str1))
        {
            printf("given string is palindrome\n");
            break;
        }
        i++;j++;
    
    }
       
}

