/*Implement a list library doublylist.h for a doubly linked list og integers with the create, display
operations. Write a menu driven program to call these operations*/


#include<stdio.h>
#include<stdlib.h>
#include"doublylist.h"
int main()
{
    int ch,num,pos;
     struct node *list=NULL;
    do
    {
    printf("\n1)Create \n2)Display  ");
    printf("\n Enter choise :");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:list=create(list);
              break;
     case 2:disp(list);
              break;
      
            
    }
    }while(ch!=3);
}

//Doublylist headerfile//
/*#include<stdio.h>
#include<stdlib.h>
#define memory (struct node*)malloc(sizeof( struct node))
struct node
{
    int data;
    struct node *next,*prev;
};
 struct node *create( struct node *list)
{
     struct node *newnode,*temp;
    int i,n;
    printf("\n Enter limit :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=memory;
        printf("Enter value of %d node :",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(list==NULL)
        {
            temp=list=newnode;
            
        }
        temp->next=newnode;
        newnode->prev=list;
        temp=newnode;

    }
    return list;
  
}
void disp( struct node *list)
{
    struct node *temp;
    for(temp=list;temp!=NULL;temp=temp->next)
   
    {
        printf("%d\t",temp->data);
    }
}*/
 