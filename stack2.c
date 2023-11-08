/*write a c program to check whether the contents of two stacks are identical.
  Neither stack should be changed*/

#include<stdio.h>
#define max 50
struct stack
{
   int a[max];
   int top;
 }s1,s2;
 
void init(struct stack *s)
{
  s->top=-1;
 }
int isempty(struct stack *s)
{
   if(s->top==-1)
   return 1;
   else
   return 0;
 }
 int isfull(struct stack *s)
{
   if(s->top==max-1)
   return 1;
   else
   return 0;
 }
void push(struct stack *s,int num)
{
  if(isfull(s))
  printf("stack is full don't push");
  else
  {
    s->top++;
    s->a[s->top]=num;
    }
  }
 int pop(struct stack *s)
 {
   int val;
   if(isempty(s))
   printf("stack is empty don't pop");
   else
   {
     val=s->a[s->top];
     s->top--;
     
    }
    return val;
 }
 int main()
 {
   int n1,n2,i,val;
   init(&s1);
   init(&s2);
   printf("\n Enter limit of first stack :");
   scanf("%d",&n1);
   printf("\n Enter value in first stack :");
   for(i=0;i<n1;i++)
   {
     printf("\n Enter value :");
     scanf("%d",&val);
     push(&s1,val);
   }
   printf("\n Enter limit of second stack:");
   scanf("%d",&n2);
   printf("\n Enter value in second stack :\n");
   for(i=0;i<n2;i++)
   {
     printf("\n Enter value :");
     scanf("%d",&val);
     push(&s2,val);
   }
   while(!isempty(&s1)&&!isempty(&s2))
   {
     if(pop(&s1)!=pop(&s2))
     break;
    }
    if((isempty(&s1))&&(isempty(&s2)))
    printf("\n Two stacks are identical ");
    else
    printf("Stacks are not identical ");
  }