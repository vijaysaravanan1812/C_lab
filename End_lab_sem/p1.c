//implementation of doudly linked 

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node *node;
node start,last,temp,prev;

void create()
{
    start = NULL;
    last = NULL;  
         getchar();  
}
void display()
{
    printf("linked list \n");
    if (start != NULL)
    {
        temp = start;
        while (temp != NULL)
        {
            printf("%d\t",temp ->data);
            temp = temp->right;
        }
        printf("\n");
    }
    printf("Reverse of list\n");
    if (last != NULL)
    {
        temp = last;
        while(temp != NULL)
        {
            printf("%d\t",temp ->data);
            temp = temp->left;
        }
        printf("\n");
    }
    else
    {
        printf("No list here to print\n");
    }
}

void insert(int x)
{
    int i = 1;
    node newnode;
    newnode =  (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    
    if (start == NULL && last == NULL)
    {
        newnode->left = NULL;
        newnode ->right = NULL;
        start = last = newnode;  
    }
    else
    {
           newnode->right = start;
            newnode ->left = NULL;
            start ->left = newnode;
            start = newnode;
           
    }
}

void swap(int pos)
{
    int tmp;
    temp = start;
    int i = 1;
    while (i <= pos - 1 )
    {
        temp = temp ->right;
        i++;
    }
    tmp = temp->data;
    temp ->data = (temp->right)->data;
    (temp->right)->data = tmp; 
    display();
}


int main()
{
    system("clear");
    int choice,x,pos;
    do
    {
        printf("Create list - 1\ninsert - 2\nDisplay - 3\nSwap - 4\nExit - 0\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            create();
            printf("List created\n");
       
            break;
        case 2:
            printf("Enter element to insert\n");
            scanf("%d",&x);
            insert(x);
            break;
        case 3:
            display();
            break;
        case 4: 
            printf("Enter the position \n");
            scanf("%d",&pos);
            swap(pos);
        case 0 :
            break;

        default:
            printf("Enter 0 to 5  \n");
            break;
        }
     
        printf("-------------------------------------------\n");
        
    } while (choice != 0);
    


    return 0;

}
