/*write a program that copies the contents of one stack into another. 
 the 0rder of two stacks must be identical(HINT. use temporary stack to preserve the order)*/

#include<stdio.h>
#include<ctype.h>
#define max 50
struct stack
{
   char a[max];
   int top;
 }s1;
 
 void init()
 {
   s1.top=-1;
  }
 
 int isempty()
 {
   if(s1.top==-1)
   return 1;
   else
   return 0;
  }
   int isfull()
 {
   if(s1.top==max-1)
   return 1;
   else
   return 0;
  }
 void push(char x)
 {
    if(isfull())
    printf("Stack is full don't push ");
    else{
    s1.top++;
    s1.a[s1.top]=x;
    }
   }
  
 char pop()
{
  char ch;
  if(isfull())
  printf("Stack is empty don't pop");
  else
  {
  ch=s1.a[s1.top];
  s1.top--;
  return ch;
  }
 }
  int main()
  {
    char p[30],q[30];
    int i,k=0;
    init();
    printf("\n Enter string :");
    scanf("%s",p);
    
    for(i=0;p[i]!='\0';i++)
    push(p[i]);
    
    while(!isempty())
    {
      q[k++]=pop();
      }
     q[k++]='\0';
     for(i=0;q[i]!='\0';i++)
     {
       push(q[i]);
      }
      
      printf("\n Copied stack element \n");
      while(!isempty())
      {
        printf("%c",pop());
        }
      }