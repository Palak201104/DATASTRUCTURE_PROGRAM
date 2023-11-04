//check string is palindrom or not using stack(static implementation)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
int isfull()
{
    if(s.top==MAX-1)
    return 1;
    else
    return 0;
}
int isempty()
{
    if(s.top==-1)
    return 1;
    else
    return 0;
}
void push(char c)
{
    if(isfull())
    printf("Stack is full don't push");
    else
    s.top++;
    s.data[s.top]=c;
}
char pop()
{
    char ch;
    if(isempty())
    printf("Stack is empty don't pop");
    else
    ch=s.data[s.top];
    s.top--;
    return ch;
}
int main()
{
    char s1[100];
    int i;
    init();
    printf("\n Enter string :");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        push(s1[i]);
    }
     for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]!=pop())
        break;
    }
    if(isempty())
    printf("String is palindrom");
    else
    printf("String is not palindrom");

}
