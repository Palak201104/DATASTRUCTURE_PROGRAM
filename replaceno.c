#include<stdio.h>
int main()
{
    int a[100],i,n,num,num1;
    printf("\n Enter limit :");
    scanf("%d",&n);
    printf("\n Enter numbers into array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter number to search :");
    scanf("%d",&num);
    printf("\n Enter number to replace :");
    scanf("%d",&num1);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            a[i]=num1;
        }
    }
    printf("\n Replace array");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}