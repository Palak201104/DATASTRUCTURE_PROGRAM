#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50][50],t[100],min[100];
    int i,j,n,index;
    printf("\n Enter limit :");
    scanf("%d",&n);
    printf("\n Enter n names into array :");
    for(i=0;i<n;i++)
    {
        scanf("%s",&s1[i]);
    }
    for(i=0;i<n;i++)
    {
        strcpy(min,s1[i]);
        index=i;
      for(j=i+1;j<n;j++)
      {
        if(strcmp(s1[j],min)<0)
        {
            strcpy(min,s1[j]);
            index=j;
        }
      }
      strcpy(t,s1[i]);
      strcpy(s1[i],s1[index]);
      strcpy(s1[index],t);
    }
    printf("\n Sorted names is :\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t",s1[i]);
    }
}