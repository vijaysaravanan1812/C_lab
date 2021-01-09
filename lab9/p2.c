//implementation circular singly linked list

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;   //to store data
    struct node *next; //point to next node address
};

typedef struct node *node;

node    start, //points to first element
        last,  //points to last element
        prev, // point to previous node 
        temp ;// to traverse yhe list

void create()
{
    start = last = NULL;
}

void display()
{
    if (start != NULL)
    {
        temp = start;
        while (temp->next != start)
        {
            printf("%d\t",temp ->data);
            temp = temp->next;
        }
        printf("%d",temp->data);
        printf("\n");
    }
    else
    {
        printf("No list here to print\n");
    }
}

void insert(int pos,int element)
{
    int i = 1;
    node new_node =  (struct node *)malloc(sizeof(struct node));
    new_node ->data = element;

    if (start == NULL && last == NULL )
    {
        start = last = new_node;
        last ->next = start;
    }//when linked has no nodes
    else 
    {
        temp = start;
        while (temp->next != start && i < pos - 1 )
        {
            temp = temp ->next;
            i++;
        }
        if (pos == 1)
        {
            new_node ->next = start;
            last ->next = new_node;
            start = new_node; 
        }
        else if (temp->next ==  start)
        {
            last ->next = new_node;
            new_node ->next = start;
            last = new_node;
        }
        else
        {
            new_node ->next = temp ->next;
            temp ->next = new_node;
        }
    }
}

void delete()
{
    if (start != NULL)
    {
        prev = temp = start;
        while (temp->next != start)
        {
            temp = temp->next;
            free(prev);
        }
        free(prev);
        start = NULL;
    }
    else
    {
        printf("No list here to delete\n");
    }
}

void delete_element(int element)
{
    temp = prev = start; 
    while (temp->next != start && temp ->data != element )
    {
        prev = temp;
        temp  = temp ->next;
    }
    if  (temp == start)
        printf("No such element found\n");
    else
    {
        printf("Element deleted\n");
        if (start ->data == element )
        {
            start = start ->next;
            free(temp);
        }
        else if (last ->data == element)
        {
            prev ->next = temp ->next; //prev -> next == NULL
            last = prev;
            free(temp);
        }
        else 
        {
            prev ->next = temp ->next;
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
        printf("Go to menu press 0\n");
        scanf("%d",&x);
        system("clear");
        printf("-------------------------------------------\n");

        
    } while (choice != 0);
   


    return 0;

}