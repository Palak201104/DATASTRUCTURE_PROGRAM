#include<stdio.h>
#include<ctype.h>
#define MAX 50
struct stack
{
	int data[MAX];
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
	if(s.top==MAX-1)
		return 1;
	else
		return 0;
}
void push(char num)
{
	if(isfull())
	printf("stack is full don't push");
	else
	{
	s.top++;
	s.data[s.top]=num;
	}
}
char pop()
{
	char val;
	if(isempty())
printf("stack is empty:");
else
{
	val=s.data[s.top];
	s.top--;
	
	return val;
	}
}
int main()
{
	int i,k=0;
	char p[30],q[30];
	init();
	printf("Enter string :");
	scanf("%s",p);
	for(i=0;p[i]!='\0';i++)
	{
	push(p[i]);
	}
	while(!isempty())
	{
	   q[k++]=pop();
	  }
	  q[k++]='\0';
	  for(i=0;q[i]!='\0';i++)
	  {
	    push(q[i]);
	   }
	   printf("\n Copied content\n");
	   while(!isempty())
	   {
	     printf("%c",pop());
	    }
	  }