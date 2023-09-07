#include<stdio.h>
void accept(int a[],int n)
{
    int i;
    printf("\n Enter numbers :");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}

int main()
{
    int a[100],i,j,n,t[100],min,index;
    printf("\n Enter limit :");
    scanf("%d",&n);
    accept(a,n);
    for(i=0;i<n;i++)
    {
       min=a[i];
       index=i;
       for(j=1;j<n;j++)
       {
        if(a[j]<min)
        {
            min=a[j];
            index=j;
        }

       }
       t=a[i];
       
    }
    printf("\n Sorted array is \n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}