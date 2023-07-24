#include<stdio.h>
int main()
{
    int a[100],i,n,num,top,mid,bottom,flag=0;
    printf("\n Enter limit :");
    scanf("%d",&n);
    printf("\n Enter number in sorted order :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter number to search :");
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
    printf("Number is found");
    else
    printf("Number is not found");
}

