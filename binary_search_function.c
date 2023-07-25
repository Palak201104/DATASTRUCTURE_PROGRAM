#include<stdio.h>
int main()
{
    int a[100],i,n,num,Ans;
    int search_num(int a[100],int n,int num);
    printf("\n Enter limit :");
    scanf("%d",&n);
    printf("\n Enter numbers in sorted order :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter number to search :");
    scanf("%d",&num);
    Ans=search_num(a,n,num);
    if(Ans==1)
    printf("Number is found");
    else
    printf("Number is not found");
}
int search_num(int a[100],int n,int num)
{
     int top,mid,bottom,flag=0;
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
        return flag;
}

