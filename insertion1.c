#include<stdio.h>
int main()
{
   int a[100],i,n,key,t[20],j;
   printf("\n Enter limit :");
   scanf("%d",&n);
   printf("\n Enter numbers :");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(i=1;i<n;i++)
   {
    key=a[i];
   j=i-1;
   while(j>=0 && key<a[j])
   {
      a[j+1]=a[j];
      j--;
   }
   a[j+1]=key;
   }
   printf("\n Sorted array is : \n");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
}