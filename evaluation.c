#include<stdio.h>
#include<ctype.h>
#define max 50
struct stack
{
   int a[max];
   int top;
 }s;
 void init()
 {
    s.top=-1;
   }
  int isempty()
  {
    if(s.top==-1)
    return 1;
    else
    return 0;
   }
   int isfull()
  {
    if(s.top==max-1)
    return 1;
    else
    return 0;
   }
 void push(char ch)
 {
    if(isfull())
    printf("\n Stack is full don't push");
    else
    {
      s.top++;
      s.a[s.top]=ch;
      }
 }
 char pop()
 {
   int ch;
   if(isempty())
   printf("\n Stack is emtpy don't pop");
   else
   {
     ch=s.a[s.top];
     s.top--;
    }
    return ch;
  }
  int main()
  {
      char s1[100];
      int i,a,b,c,d,result,val1,val2;
      printf("\n Enter postfix expression :");
      scanf("%s",s1);
      printf("\n Enter value of a,b,c,d :");
      scanf("%d%d%d%d",&a,&b,&c,&d);
      for(i=0;s1[i]!='\0';i++)
      {
          if(isalpha(s1[i]))
          {
             switch(s1[i])
             {
             
             case 'a':push(a);
                      break;
             case 'b':push(b);
                      break;
             case 'c':push(c);
                      break;
             case 'd':push(d);
                      break;
                   }
                }
             else
             {
               val1=pop();
               val2=pop();
               switch(s1[i])
               {
             case '+':result=val2+val1;
                      break;
             case '-':result=val2-val1;
                      break;
                      
             case '*':result=val2*val1;
                      break;
                      
             case '/':result=val2/val1;
                      break;
                     }
                     
               push(result);
             }  
             }
             printf("\nThe result of postfix expression is=%d",pop(result));
             
          }