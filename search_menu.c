#include<stdio.h>
void accept(int a[],int n)
{
    int i;
    printf("\n Enter numbers :");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
}
void linear_search(int a[],int n)
{
    int i,num;
    printf("\n Enter Number to search :");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        break;
    }
    if(i==n)
               printf("\n Number is not found");
               else
               printf("\n Number is found at position=%d",i);
               
}
void binary_search(int a[],int n)
{
    int i,num,top,mid,bottom,flag=0;
    printf("\n Enter Number to search :");
    scanf("%d",&num);
    top=0;
     bottom=n-1;
     while(top<=bottom)
     {
        mid=(top+bottom)/2;
        if(a[mid]==num)
        {
            flag=1;
            break;
        }
        if(num>a[mid])
        top=mid+1;
        else
        bottom=mid-1;
        }
        if(flag==1)
            printf("\n Number is found ");
            else
            printf("\n Number is not found");
            
}

    

int main()
{
    int a[100],i,n,ch,flag=0;
    printf("\n Enter limit :");
    scanf("%d",&n);
    accept(a,n);
    display(a,n);
  do
  {
    printf("\n1. Linear search\n2. Binary search");
    printf("\n Enter your choise :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:linear_search(a,n);
               break;
        case 2:binary_search(a,n);
               break;
        default: printf("Invalid choise");

    }
  }while(ch!=3); 
 }