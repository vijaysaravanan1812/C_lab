#include <stdio.h>
#include <ctype.h>
#include<string.h>
void piglatin(char word[100])
{
    char pig[100];
    char befvow[100];
    char aftvow[100];
    int len;
    len=strlen(word)+2;
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]>='A' && word[i]<='Z')
        {
            word[i]=word[i]+32;
        }
    }
    for(int a=0;word[a]!='\0';a++)
    {
        if((word[a]=='a' ||word[a]=='e' ||word[a]=='i' ||word[a]=='o' ||word[a]=='u')&&a!=0)
        {
            int c;
            int x=0;
            for(c=a;word[c]!='\0';c++)
            {
                pig[x]=word[c];
                x++;
            }
            for(int b=0;b<a;b++)
            {
                pig[x]=word[b];
                x++;
            }            
            pig[x]='a';
            pig[x+1]='y';
            pig[x+2]='\0';
            printf("Piglatin: %s\n",pig);
            break;
        }
        else if((word[a]=='a' ||word[a]=='e' ||word[a]=='i' ||word[a]=='o' ||word[a]=='u')&&a==0)
        {
            printf("Piglatin: %sway\n",word);
            break;
        }
        else
        {
            continue;
        }
    }
}
int main()
{
    char word[100];
    printf("Enter a word:\n");
    scanf("%s",word);
    piglatin(word);
    return 0;
}