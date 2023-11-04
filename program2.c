/*Implement a list library (singly.h) for a singly list of integer with the operations create,
display. Write a men driven program to call these operations.*/

#include<stdio.h>
#include<stdlib.h>
#include"singly.h"
int main()
{
    int ch;
    node *list=NULL;
    do
    {
    printf("\n1)create \n2)Display");
    printf("\n Enter your choise :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:list=create(list);
               break;
        case 2:display(list);
        break;
    } 
    }while(ch!=3);

}


/*SINGLY HEADERFILE
#include<stdio.h>
#include<stdlib.h>
#define memory (node*)malloc(sizeof(node))
 typedef struct node 
{
    int data;
    struct node *next;
}node;
node *create(node *list)
{
    node *newnode,*temp;
    int i,n;
    printf("\n Enter limit :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=memory;
        printf("\n Enter value of %d node :",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(list==NULL)
        {
            temp=list=newnode;
        }
        else
        {
           temp->next=newnode;
           temp=newnode;
        }
    }
    return list;
}
void display(node *list)
{
    node *temp=list;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}*/