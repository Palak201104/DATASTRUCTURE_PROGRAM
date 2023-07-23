#include<stdio.h>
int main()
{
    int a[50],i,n,num,flag=0;
    printf("\n Enter limit :");
    scanf("%d",&n);
    printf("\n Enter number into array :");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n Enter number to search :");
    scanf("%d",&num);
     for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            flag=1;
            break;
        }
    }
    if(flag!=1)
    printf("\n Number is not found");
    else
    printf("\n Number is found");

}


