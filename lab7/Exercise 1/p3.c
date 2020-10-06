#include<stdio.h>
#include<string.h>

int mystrlen(char *s)
{
    int a=0;
    while(*s!='\0')
    {
      a++;
      s++;
    } 
    return a;
}

int mystrcmp(char *s, char *t)
{
    while(*s!='\0')
    {
        if ( *s != *t )
            return 0;
        s++;
        t++;
    }
    if (*t=='\0')
        return 1;
    else 
        return 0;
}

void mystrcpy(char *source, char *dest)
{
    while (*source)
    {
        *dest = *source;
        source++;
        if (*source!='\0')
        dest++;
    }
} 

void mystrcat(char *s1, char *s2)
{   
    for(int i=0; *s1 != '\0' ; s1++)
        i++;
    for(int i=0; *s2!='\0'; s2++ , s1++)
        *s1 = *s2;
} 

int main()
{   
    int r,l;
    char f[100], s[100],d[100];
    printf("Enter first string\n");
    scanf("%s",f);
    printf("Enter second string\n");
    scanf("%s",s);
    r = mystrcmp(f, s);
    if ( r == 1 )
        printf("Strings are Same.\n");
    else if (r==0)
        printf("Strings are Not Same.\n");

    l  =  mystrlen(f);
    printf("Length of str  1 is %d \n",l);
    
    mystrcpy(s,d);
    printf("The array after copying is %s\n",d);
    
    mystrcat(f,s);
    printf("The string 1 after catenation is %s \n",f);
    return 0;
}