#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50][50],name[20];
    int i,n;
    void search_city(char s1[50][50],char name[20],int n);
    printf("\n Enter limit :");
    scanf("%d",&n);
    printf("\n Enter city names :");
    for(i=0;i<n;i++)
    {
        scanf("%s",s1[i]);
    }
    printf("\n Enter city to search :");
    scanf("%s",name);
    search_city(s1,name,n);
}
 void search_city(char s1[50][50],char name[20],int n)
 {
     int i;
     for(i=0;i<n;i++)
     {
        if(strcmp(s1[i],name)==0)
        break;
     }
     if(i==n)
     printf("City is not found");
     else
     printf("City is found");
}