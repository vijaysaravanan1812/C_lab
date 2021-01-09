#include <stdio.h>
#include <stdlib.h>
int StringToInt(char *st)
{
    int strToNum=0,i=0;
    while(*(st+i)!='\0')
    {
        strToNum=strToNum*10+st[i++]-'0';
    }
    return strToNum;
}
int sumOfDigits(char *st)
{
    int num=StringToInt(st);
    int sum=0;
    while(num>0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
char* IntegerToString(int n)
{
    char *st=(char *)malloc(sizeof(char)*9);
    int rev=0,p=n,c=0,i;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
        c++;
    }
    for(i=0;i<c;i++)
    {
        *(st+i)=rev%10+'0';
        rev/=10;
    }
    *(st+i)='\0';
    return st;
}
void main()
{
    char *str=(char *)malloc(sizeof(char)*7);
    char *str1=(char *)malloc(sizeof(char)*7);
    printf("Enter the first number (The entered number is considered to be a string) : ");
    gets(str);
    int num1=StringToInt(str);
    printf("The integer value of the string : %d\n",num1);
    printf("The sum of the digits in %s = %d\n",str,sumOfDigits(str));
    printf("Enter the second number (The entered number is considered to be a string) : ");
    gets(str1);
    int num2=StringToInt(str1);
    printf("Integer sum of %d and %d = %s (The final result is a string)\n ",num1,num2,IntegerToString(num1+num2));
}
