// implementation of queue using linked list

#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int data;
    struct stack *next;
};

typedef struct queue *node;
node front,rear;

void create()
{
    front = rear = NULL;
}

void enqueue(int x)
{
    node newnode = (struct queue*)malloc(sizeof(struct queue));
    newnode->data = x;
    if (front == NULL && rear == NULL)
    {  
        front = newnode;
        rear = newnode;
        rear->next = NULL;
        front->next = NULL;
    }
    else
    {
        rear ->next = newnode;
        rear = newnode;
        rear ->next =NULL;
    }
}

int dequeue()
{
    int x;
    if (front == NULL)
    {
        printf("queue is underflow\n");
        return 0;
    }
    else
    {
        node temp;
        temp = front;
        x = front->data;
        front = front->next;
        free(temp);
        return x;
    }
}

int display()
{
    node temp = front;
    if (front != NULL)
    {
        while (temp != NULL)
        {
            printf("%d \t",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
    else
        printf("Queue is empty\n");
}

void dispose()
{
    node temp;
    temp = front;
    while (temp != NULL)
    {
        temp = front; 
        front = front ->next;
        free(temp);
    }
    front = NULL;
    rear = NULL;
}

int main()
{
    int element,//element to queue
        x,      //getting choice
        x1;     //variable to hold poped element
    do
    {   
        printf("1 - To create queue \n2 - To dispose queue \n3 - TO insert element\n4 - pop element\n5 - To display queue\n0 -To exit\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            printf("queue created\n");
            create();
            break;
        case 2:
            printf("queue dispose\n");
            dispose();
            break;
        case 3:
            printf("Enter the element\n");
            scanf("%d",&element);
            enqueue(element);
            break;
        case 4:
            printf("Element dequeue\n");
            x1 =  dequeue();
            printf("%d pop out of queue\n",x1);
            break;
        case 5:
            display();
            break;
        case 0:
            break;
        default:
            printf("Enter 1 to 4\n");
        
        }
        printf("==================================================================================\n");
    } while (x != 0);
    return 0;

}
