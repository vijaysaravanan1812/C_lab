
// character and string
#include<stdio.h>
int main()
{
   char ch;
   char str[10];
   printf("Enter any character \n");
   scanf("%c", &ch);                                   //IT WILL TAKE ONLY ONE CHARACTER
   printf("Entered character is %c \n", ch);
   printf("Enter any string \n");
   scanf("%s", str);                             //IT WILL TAKE MANY CHARACTERS
   printf("Entered string is %s \n",str);

   return 0;
}
