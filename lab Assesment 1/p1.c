//linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node *node;
node start,temp,last,prev;

void create()
{
    start = NULL;
}

void display()
{
    if (start != NULL)
    {
        temp = start;
        while (temp != NULL)
        {
            printf("%d\t",temp ->data);
            temp = temp->next;
        }
        printf("\n");
    }
    else
    {
        printf("No list here to print\n");
    }
}

void insert(int element)
{
    int i = 1;
    node new_node =  (struct node *)malloc(sizeof(struct node));
    new_node ->data = element;

    if (start == NULL && last == NULL )
    {
        new_node ->next = NULL;
        start = last = new_node;
    }//when linked has no nodes
    else 
    {
        temp = start;
        while (temp != NULL) //&& i < pos - 1 )
        {
    
            temp = temp ->next;
            i++;
        }
        /*if (pos == 1)
        {
            new_node ->next = start;
            start = new_node; 
        }*/
        else if (temp == NULL)
        {
            last ->next = new_node;
            new_node ->next = NULL;
            last = new_node;
        }
        /*else
        {
            new_node ->next = temp ->next;
            temp ->next = new_node;
        }*/
    }
}
/*int insert_last(int x)
{
    node new_node =  (struct node *)malloc(sizeof(struct node));
    new_node ->data = x;
    while (temp ->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = NULL;
    last = new_node;
    
}*/


void delete_element(int element)
{
    temp = prev = start; 
    while (temp != NULL && temp ->data != element )
    {
        prev = temp;
        temp  = temp ->next;
    }
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

void delete()
{

    temp = start;
    while (temp != NULL)
    {
        if (temp->data % 3 == 0)
        {
            delete_element(temp->data);
        }
        temp= temp->next;
    }
    
}



int main()
{
    int cho;
    do
    {
        printf("Create - 1\nInsert - 2\nDelete - 4\nInsert_last - 5\nExit - 0\n");
        scanf("%d",&cho);
        if (cho == 1)
        {
            printf("list created\n");
            create();
        }
        else if (cho == 2)
        {
            int x,element;
           // printf("Enter the position\n");
           // scanf("%d",&x);
            printf("Enter the element\n");
            scanf("%d",&element);
            insert(20,element);
      
        }
        else if(cho == 4)
        {
            delete();
        }
        else if (cho == 5)
        {
            insert(11,0);
        }
        
        else if (cho == 0)
            break;
        printf("----------------------------------------------\n");
        printf("list\n");
        display();
        printf("----------------------------------------------\n"); 
        system("clear");
    } while (cho != 0);
    
    
    return 0;

}

