/*Implement a queue library(dyqueue.h)pf integers using a dynamic (linked list)
implementatin of the queue and implement init,enqueue,dequeue,isempty,peek operation*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 5
#define memory (struct node*)malloc(sizeof(struct node))
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL,*newnode,*temp,*rear=NULL;
void init()
{
    front=rear=NULL;
}
int isempty()
{
    if(front==NULL)
    return 1;
    else
    return 0;
}
void insert()
{
   
    newnode=memory;
    printf("\n Enter number to insert :");
    scanf("%d",&newnode->data);
   
    newnode->next=NULL;
    if(front==NULL)
    {
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
       
    }
     printf("\n Insert successfully");
}
void delete()
{
    int val;
    if(isempty())
    {
        printf("Queue is underflow");
    }
    else{
       
        temp=front;
         val=front->data;
        front=front->next;
        
        printf("\n Deleted value=%d",val);
    }
    
    free(temp);
}
void peek()
{
     if(isempty())
    {
        printf("Queue is underflow");
    } 
    else{
        printf("\n Peeked value is=%d",front->data);
    }
}
void display()
{
    for(temp=front;temp!=NULL;temp=temp->next)
    {
        printf("%d\t",temp->data);
    }
}
    int main()
    {
        int ch;
        init();
        do
        {
            printf("\n1)Insert\n2)Delete\n3)peek\n4)Display \n Enter your choise:");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:insert();break;
                case 2:delete();break;
                case 3:peek();break;
                case 4:display();break;
            }
        } while (ch!=5);
        

    }