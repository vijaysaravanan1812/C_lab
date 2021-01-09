// implementation of stack using linked list

#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

typedef struct stack *node;
node top;

void create()
{
    top = NULL;
}

void push(int x)
{
    node newnode = (struct stack*)malloc(sizeof(struct stack));
    newnode->data = x;
    if (top == NULL)
    {  
        top = newnode;
        top->next = NULL;
    }
    else
    {
        newnode ->next = top;
        top = newnode;
    }
}

int pop()
{
    node temp;
    temp = top;
    int x;
    if (top == NULL)
        printf("Stack is underflow\n");
    else
    {
        x = top->data;
        top = top->next;
        free(temp);
        return x;
    }
    return 0;
}

int peek()
{
    if (top == NULL)
        printf("stack is empty\n");
    else
    {
        printf("%d\n",top->data);
    }
}

void dispose()
{
    node temp;
    temp = top;
    while (temp != NULL)
    {
        temp = top; 
        top = top ->next;
        free(temp);
    }
    top = NULL;
}

int main()
{
    int element,//element to stack
        x,      //getting choice
        x1;     //variable to hold poped element
    do
    {   
        printf("1 - To create stack \n2 - To dispose stack \n3 - TO insert element\n4 - pop element\n5 - To display top element\n0 -To exit\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            printf("stack created\n");
            create();
            break;
        case 2:
            printf("Stack dispose\n");
            dispose();
            break;
        case 3:
            printf("Enter the element\n");
            scanf("%d",&element);
            push(element);
            break;
        case 4:
            printf("Element poped\n");
            x1 =  pop();
            printf("%d pop out of stack\n",x1);
            break;
        case 5:
            peek();
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
