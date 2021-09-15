#include<stdio.h>
#include<stdlib.h>
//structure
struct node_rec
{
    int info;
    struct node_rec *next;
};
typedef struct node_rec *node;
node new,temp,front,rear;
typedef node header;
header q;
//creating queue
void create_queue(){
    q =(struct node_rec*)malloc(sizeof(struct node_rec));
    q->next=q;
    printf("QUEUE IS CREATED..");
}
//to check empty
int isEmpty(){
    return q->next==q;
}
//enqueue-inserting elements
void  enqueue(int x){
    new=(struct node_rec*)malloc(sizeof(struct node_rec));
    new->info=x;
    new->next=q;
    if(isEmpty()){
        q->next=new;
        front=rear=new;
    }
    else{
        rear->next=new;
        rear=new;
    }
    printf("The element is inserted!!");
}
//dequeue--deleting front element
void dequeue(){
    if(!isEmpty()){
        if(front==rear){
            front=rear=q;
        }
        else{
            temp=front;
            front=front->next;
            q->next=front;
            free(temp);
        }
        printf("The element is dequeued!");
    }
    else
        printf("The queue is empty or not exists!!");
}
//make the queue empty
void make_empty(){
    while(!isEmpty()){
        temp=q->next;
        q->next=temp->next;
        free(temp);
    }
    q->next=q;
    printf("The queue is made empty..!");
}
//dispose a queue
void dispose(){
    if(!isEmpty()){
        make_empty();
        free(q);
        q=NULL;
    }
    else{
        free(q);
        q=NULL;
    }
    printf("QUEUE IS EMPTIED!!");
}
//to display front element
int front_ele(){
    int ele;
    if(!isEmpty())
        ele=front->info;
    else
        printf("The Queue is empty!!!");
    return ele;
}
//to display rear element
int rear_ele(){
    int ele;
    if(!isEmpty())
        ele=rear->info;
    else
        printf("The Queue is empty!!!");
    return ele;
}
//to display and dequeue the front element
int front_dequeue(){
    int ele;
    if(!isEmpty()){
        ele=front->info;
        dequeue();
    }
    else
        printf("The QUEUE is empty!!!");
    return ele;
}
//main function
void main()
{
    int choice,ch,x;
    do{
        printf("\n The choices:\n\t0.to create queue \n\t1.to enqueue an element \n\t2.dequeue the element \n\t3.display front element \n\t4.display rear element \n\t5.front and dequeue \n\t6.to make the queue empty \n\t7.dispose queue ");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 0: create_queue();
                    break;
            case 1: printf("\nEnter the Element to be inserted:");
                    scanf("%d",&x);
                    enqueue(x);
                    break;
            case 2: dequeue();
                    break;
            case 3: printf("\nThe front  element is:%d",front_ele());
                    break;
            case 4: printf("\nThe rear  element is:%d",rear_ele());
                    break;
            case 5: printf("\nThe top element to be dequeued %d",front_dequeue());
                    break;
            case 6: make_empty();
                    break;
            case 7: dispose();
                    break;
            default: printf("\nInvalid case");
        }
        printf("\nEnter Yes/No to continue:\n\t 1.Yes \n\t 2.No :");
        scanf("%d",&ch);
        printf("===================================================\n");
    }while(ch==1);
}