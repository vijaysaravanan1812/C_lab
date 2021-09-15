#include<stdio.h>
#include<stdlib.h>
struct address
{
 int door;
 char street[100];
 char city[50];
 };
struct student
{
 int regno;
 int contactno;
 char*name;
 struct address Address;
};
void read(struct student *a)
 {
  
  for(int i=0;i<2;i++)
  {
   printf("\nFor student %d\n",i+1);
   printf("Enter regno: ");
   scanf("%d",&a->regno); 
   printf("Enter contactno: ");
   scanf("%d",&a->contactno); 
   printf("Enter name: ");
   scanf("%s",a->name); 
   printf("Enter Door no: ");
   scanf("%d",&a->Address.door); 
   printf("Enter street: ");
   scanf("%s",a->Address.street); 
   printf("Enter city: ");
   scanf("%s",a->Address.city);
   a++;   
  }
 }
void display(struct student *a)
{
  for(int i=0;i<2;i++)
  {
    printf("\n----------------------------------------\n");
    printf("\nStudent %d\n",i+1);
    printf("----------------------------------------\n");
    printf("Regno: %d\n",a->regno);
    printf("----------------------------------------\n");
    printf("\nContactno: %d\n",a->contactno);
    printf("----------------------------------------\n");
    printf("\nName: %s\n",a->name); 
    printf("----------------------------------------\n");
    printf("\nDoor: %d\n",a->Address.door); 
    printf("----------------------------------------\n");
    printf("\nStreet: %s\n",a->Address.street); 
    printf("----------------------------------------\n");
    printf("\nCity: %s\n",a->Address.city);
    printf("----------------------------------------\n\n");
    a++;  
 }
}

int main()
{
  struct student *ptr;
  ptr=(struct student*) malloc(5* sizeof(struct student));
  for(int i=0;i<5;i++)
  {
	  ptr ->name = (char*)malloc(100*sizeof(char));
	  ptr++;
  }
  for(int i=4;i>=0;i--)
  {
	  ptr--;
  }
 
 read(ptr);
 display(ptr);
 return 0;
 
}