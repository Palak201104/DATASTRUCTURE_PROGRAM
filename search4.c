#include<stdio.h>
#include<string.h>
struct cities
{
    int code;
    char cname[20];
}c1[100];
int main()
{
          int i,n,Ans=0;
          char name[20];
          int search(struct cities c1[100],int name[20],int n);
          printf("\n Enter limit :");
          scanf("%d",&n);
          for(i=0;i<n;i++)
          {
            printf("\n Enter STD code and city name :");
            scanf("%d%s",&c1[i].code,&c1[i].cname);
          }
          printf("\n Enter city name to search :");
          scanf("%s",&name);
          Ans=search(c1,name,n);
          if(Ans==n)
          printf("\n Record not found");
          else
          printf(" Record found and STD code=%d",c1[i].code);
}
int search(struct cities c1[100],int name[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(c1[i].cname,name)==0)
        return i;
    }
    
  return i;
    
}