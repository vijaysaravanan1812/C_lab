#include<stdio.h>
#include<string.h>

//C program to count total number of alphabets (within which the count the number of vowels, consonants), digits and special characters in a string.

int main()
{
    char str1[20];
    int count_vowels = 0,count_consonants = 0,count_special = 0,count_digits = 0,i = 0;
    printf("Enter the string\t");
    scanf("%s",str1);
    while (1)
    {
        if (i == strlen(str1))
            break;
        
        if ((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z') || (str1[i] >= '0' && str1[i] <= '9'))
        {
            if (str1[i] == 'a' || str1[i] == 'e' || str1[i] =='i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O'|| str1[i] == 'U' )
            {
                count_vowels += 1;
            }
            else if ((str1[i] >= '0' && str1[i] <= '9'))
                count_digits += 1;
            else
                count_consonants += 1;
        }
        else
        {
            count_special += 1;
        }
 
        i++;
        
        
        
    }
    printf("No of vowels %d\n",count_vowels);
    printf("No of consonants %d\n",count_consonants);
    printf("No of digits %d\n",count_digits);
    printf("No of special characters %d\n", count_special);
    
    
    return 0 ; 
}


