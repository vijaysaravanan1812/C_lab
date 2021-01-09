#include <stdio.h>
#include <stdlib.h>

typedef struct Distance 
{
  float feet;
  float inches;
}dist;


void Accept (dist *a, int i)
{
printf("For %d\n",i+ 1);
  printf("\nEnter the distance (feet): ");
  scanf("%f", &(a->feet));
  printf("\nEnter the distance (inches): ");
  scanf("%f", &(a->inches));
  system("clear");
    
}
void Display (dist *dis, int i)
{
    printf("|%-20d||%-20f||%-20f|\n",i+1,dis->feet, dis->inches);
}

int main()
{
    dist *(d[10]);
    for (int i = 0; i < 10; i++) 
    { 
        d[i] = (struct Distance  *)malloc(sizeof(struct Distance )); 
    }
    printf("\nMENU");
    printf("\n1. Accept");
    printf("\n2. Display");
    //printf("\n3. Display maximum distance");
    printf("\n0. Exit");
    int choice;
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: 
   	            for (int i = 0; i < 10; i++)
   	                Accept(d[i], i);
   	            break;
            case 2:
            printf("------------------------------------------------------------------\n");
                  printf("|%-20s||%-20s||%-20s|\n","S NO","Feet","Inches");
                     printf("------------------------------------------------------------------\n");
   	            for (int i = 0; i < 10; i++)
                {
                  
   	                Display(d[i] , i);
                }
                   printf("------------------------------------------------------------------\n");
   	            break;
   	        case 4:
   	            exit(0);
   	    
        }
    }
    return 0;
}

