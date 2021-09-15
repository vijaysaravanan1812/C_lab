//1) program to learn about  formating in c
#include<stdio.h> 
int main() 
{ 
    int number1 = 10; 
    float number2 = 5.4321; 
    char s[] = "hello"; 
    printf("|%3d|\n|%d|\n",number1,number1);
    printf("|%7.2f|\n", 5.4321);
    printf("|%4.2f|\n",5.4321);
    printf("|%4.8f|\n",5.4321);
    printf("|%4.6f|\n",5.4321);
    printf("|%s|\n",s);
    printf("|%10s|\n",s);
    printf("|%-10s|\n",s);
    printf("|%10.2s|\n",s);


    return 0; 

} 
