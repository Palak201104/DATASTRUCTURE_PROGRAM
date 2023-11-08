#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next,*prev;
}NODE;
struct node *create(struct node *list)
{
    struct node  *temp,*newnode;
    int i,n;
    printf("\n Enter limit :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter value :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(list==NULL)
        {
            list=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }

    }
    return list;
}
void disp(struct node *list)
{
    struct node *temp;
    temp=list;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
struct node* insertbeg(struct node *list,int num)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter number");
    newnode->data=num;
    newnode->next=list;
    list->prev=newnode;
    list=newnode;
    return list;
}
int main()
{
    struct node *list=NULL;
    int ch,num;
    do
    {
    printf("\n1.create\n2.Display\n3.Insert beginning");
    printf("\n Enter choise :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: list=create(NULL);
                break;
        case 2:disp(list);
               break;
        case 3: printf("\n Enter number");
                scanf("%d",&num);
                list=insertbeg(list,num);
                break;
        default:printf("Invalid choise");
    }
    }while(ch!=3);
}
