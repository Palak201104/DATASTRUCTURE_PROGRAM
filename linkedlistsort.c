#include<stdio.h>
#include<stdlib.h>
 struct node
{
	int data;
	struct node *next;
};
struct node *create(struct node *list)
{
 int i,n;
 struct node *newnode,*temp;
 printf("Enter limit:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 	newnode=(struct node*)malloc(sizeof(struct node));
 	printf("Enter value:");
 	scanf("%d",&newnode->data);
 	newnode->next=NULL;
 	if(list==NULL)
 	{
 	  list=newnode;
	   temp=newnode;	
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
 }
 return list;
}
void display(struct node *list)
{
  struct node *temp;
  for(temp=list;temp!=NULL;temp=temp->next)
  {
    printf("%d\t",temp->data);	
  }	
}
void sort(struct node *list)
{
  struct node *i,*j;
  int t;
  i=list;
  while(i->next!=NULL)
  {
      j=i->next;
    while(j!=NULL)
    {
     
       if(i->data>j->data)
       {
         t=i->data;
         i->data=j->data;
         j->data=t;
        }
      j=j->next;
     }
      i=i->next;
    }
     printf("\nSorted linked list \n");
     display(list);
 }

int main()
{
	 struct node *list=NULL;
  list=create(list);
  
  sort(list);
}