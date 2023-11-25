/*implement a linear queue library(st_queue.h) of integers using a static implementation 
of the queue and implementing the init(Q),add(Q),and peek(Q),and reverse(Q) operations. write a program 
that includes queue library and calls different queue operations*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct Queue
{
     int a[MAX];
     int front,rear;
}q;
void init()
{
    q.front=-1;
    q.rear=-1;

}
int isempty()
{
    if(q.front==-1||q.front>q.rear)
    return 1;
    else
    return 0;
}
int isfull()
{
    if(q.rear==MAX-1)
    return 1;
    else
    return 0;
}
void insert(int num)
{
    if(isfull())
    {
        printf("Queue is overflow");
    }
    else
    {
        if(q.front==-1)
        {
            q.front=0;
        }
        q.rear++;
        q.a[q.rear]=num;
        printf("\nInserted successfully");
    }
}
void deleteq()
{
    int val;
    if(isempty())
    {
        printf("\nQueue is underflow");
    }
    else
    {
        val=q.a[q.front];
        q.front++;
        printf("\n Deleted value is=%d",val);
    }
}
void peek()
{
    if(isempty())
    {
        printf("\nQueue is underflow");
    }
    else{
        printf("\n Peek values is=%d",q.a[q.front]);
    }
}
void display()
{
    int i;
    for(i=q.front;i<=q.rear;i++)
    {
        printf("%d\t",q.a[i]);
    }
}
void reverseque()
{
    int i;
    printf("\n After reverse queue is\n");
    for(i=q.rear;i>=q.front;i--)
    {
        printf("%d\t",q.a[i]);
    }
}
int main()
{
    int ch,num;
    init();
    do
    {
        printf("\n1)Insert \n2)Delete \n3)peek \n4)Display \n5)Reverse queue");
        printf("\n Enter your choise :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n Enter number :");
                   scanf("%d",&num);
                   insert(num);
                   break;
            case 2:deleteq();
                   break;
            case 3:peek();break;
            case 4:display();break;
            case 5:reverseque();break;
        }
    } while (ch!=6);
    
}