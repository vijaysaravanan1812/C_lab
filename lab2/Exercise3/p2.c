//Add the justification for the output you are getting. 

#include<stdio.h> 

int main() 

{ 
int i= 10; 
printf("|hello %n world|\n", &i); 
printf("|%d|\n", i); 
//In C printf(), %n is a special format specifier
// which instead of printing something causes printf()
// to load the variable pointed by the corresponding 
//argument with a value equal to the number of characters
//that have been printed by printf() before the occurrence of %n.
//printf("|%10.5d|\n", 6); //adding 4 zeros at before six  

return 0; 

} 