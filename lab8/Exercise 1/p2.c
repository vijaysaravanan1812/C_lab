
// linear queue implementation
#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int front;    //front marker 
    int rear;   // to track last element of queue
    int capacity; //size of array
    int *arr; // dynamic arr
};

int count = 0;

struct queue * create_queue(struct queue *q)
{
    int size;
    if (count == 1)
        printf("queue already exist\n");
    else
    {
        printf("queue created with\n");
        printf("Size of queue do you want\n");
        scanf("%d",&size);
        q = (struct queue *) malloc(sizeof(struct queue));
        q ->arr = (int *) malloc(sizeof(int) *size);
        q ->front = q ->rear = -1;
        q ->capacity = size;
        printf("capacity %d\n",q->capacity);
        count = 1;//variable to avoid user to create stack again 
    }

    return q;
}

void dispose_queue(struct queue *q)
{
    if (count == 0)
        printf("There is no queue to dispoes\n");
    
    else if (q == NULL)
        printf("queue is not available\n");
    else
    {
        printf("queue dispose\n");
        free(q ->arr);
        free(q);
        count = 0; //variable to avoid user to dispose stack again
    }
}


void enqueue(struct queue *q , int x)
{
    if(q == NULL)
    {
        printf("First create queue and then insert element\n");
    }
    else if (q ->rear >= q->capacity -1 )
    {
        printf("queue overflow\n");
    }
    else
    {
        if (q ->rear == -1 && q ->front == -1)
        {
            q -> front = 0;
            q-> rear = 0; //Assign rear and front is equal to zero because
            //at first front and rear point to same location 
        }
        else
        {
            q ->arr[++q ->rear];//Do not distrub the front and 
            //increase the rear
        }
        q ->arr[q ->rear] = x; 
        // to display queue
        for (int i = q ->front ; i <= q ->rear; i++)
        {
            printf("%d\t",q->arr[i]);
        }printf("\n");
    }
}

int dequeue(struct queue *q)
{
    int x; // variable to hold dequeued element
    if(q == NULL)
    {
        printf("First create queue\n");
    }
    else if (q ->front == -1)
    {
        printf("queue underflow\n");
        return 0;
    }
    else if(q ->front == q ->rear )
    {
        x = q->arr[q ->front];
        q ->rear =q ->front = -1;// if front and rear marker points same element 
        //then queue has one element ,  To dequeue it assign front and rear marker to -1
    }
    else
    {
        x = q->arr[q ->front];
        ++q ->front;
        // to display queue
        if (q ->front != -1)
        {
            for (int i = q ->front ; i <= q ->rear; i++)
            {
                printf("%d\t",q->arr[i]);
            }printf("\n");
        }
    }
    return x;
}

int main()
{
     int element,//element to queue
        x,      //getting choice
        x1;     //variable to hold dequeue element
    struct queue * q = NULL;
    do
    {   
        printf("1 - To create queue\n2 - To dispose queue\n3 - TO enqueue\n4 - To dequeue\n0 -To exit\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            q = create_queue(q);
            break;
        case 2:
            dispose_queue(q);
            break;
        case 3:
            printf("Enter the element\n");
            scanf("%d",&element);
            enqueue(q,element);
            break;
        case 4:
            printf("Element poped\n");
            x1 =  dequeue(q);
            printf("%d pop out of queue\n",x1);
            break;
        case 0:
            break;
        default:
            printf("Enter 1 to 4\n");
        
        }  
        printf("----------------------------------------\n");
    } while (x != 0);
    return 0;
}