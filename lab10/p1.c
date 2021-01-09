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

void insert(int pos , int x)
{
    int i = 1;
    node newnode;
    newnode =  (node *)malloc(sizeof(struct node));
    newnode->data = x;
    
    if (start == NULL && last == NULL)
    {
        newnode->left = NULL;
        newnode ->right = NULL;
        start = last = newnode;  
    }
    else
    {
        temp = start; 
        while (temp != NULL && i < pos -1 )
        {
            temp = temp->left;
            i++;
        }
        if(pos == 1)
        {
            newnode->right = start;
            newnode ->left = NULL;
            start ->left = newnode;
            start = newnode;
        }
        else if (temp == NULL)
        {
            newnode->left = last;
            newnode->right = NULL;
            last->right = newnode;
            last = newnode;
        }
        else 
        {
            newnode->left = temp;
            newnode ->right = temp->right;
            (temp ->right)->left = newnode;
            temp ->right = newnode;
           
        }
        
    }
}

void delete()
{
    if (start != NULL)
    {
        prev = temp = start;
        while (temp != NULL)
        {
            temp = temp->right;
            free(prev);
        }
        start = NULL;
        last = NULL;
    }
    else
    {
        printf("No list here to delete\n");
    }
}

void delete_element(int element)
{
    temp = prev = start; 
    while (temp != NULL && temp ->data != element )
    {
        prev = temp;
        temp  = temp ->right;
    }
    if  (temp == NULL)
        printf("No such element found\n");
    else
    {
        printf("Element deleted\n");
        
        if (last == start)
        {
            start = last = NULL;
            free(temp);
        }
        else if (start ->data == element )
        {
            start = start ->right;
            start->left = NULL;
            free(temp);
        }
        else if (last ->data == element)
        {
            prev ->right = temp ->right; //prev -> next == NULL
            last = prev;
            free(temp);
        }

        
        else 
        {
            prev ->right = temp ->right;
            (temp->right)->left = prev;
            free(temp);
        }
    }
}

int main()
{
    int choice,x,pos;
    do
    {
        printf("Create list - 1\ninsert - 2\nDisplay - 3\nDelete element - 4\nDelete list - 5\nExit - 0\n");
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
            printf("Enter position to insert in list\n");
            scanf("%d",&pos);
            insert(pos,x);
            break;
        case 3:
            display();
            break;
        case 5:
            printf("List deleted\n");
            delete();
            break;
        case 4:
            printf("Enter the element in list to remove\n");
            scanf("%d",&x);
            delete_element(x);
            break;
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
