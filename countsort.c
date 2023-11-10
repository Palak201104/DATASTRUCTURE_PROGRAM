/*create random array of n intergers(accept value of n from user) and sort numbers
by using  count sort*/

#include<stdio.h>
#include<stdlib.h>
void countsort(int a[],int n,int k)
{
    int i,c[20]={0},b[20];
    for(i=0;i<n;i++)
    {
        c[a[i]]++;  //count no of occurence of each element
    }
    for(i=1;i<=k;i++)
    {
        c[i]=c[i]+c[i-1];  //update count sort
    }
    for(i=n-1;i>=0;i--)
    {
        b[c[a[i]]-1]=a[i];
        c[a[i]]--;
        
    }
    printf("\n Sorted array \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
}
int main()
{
    int a[100],i,n,k;
    printf("\n Entr limit :");
    scanf("%d",&n);
    printf("\n Enter range :");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
       a[i]=rand()%k;
    }
    printf("\n INPUT ARRAY \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    countsort(a,n,k);
}