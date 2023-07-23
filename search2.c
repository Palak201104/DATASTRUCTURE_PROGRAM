#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50][50],name[20];
    int i,n;
    printf("\n Enter limit :");
    scanf("%d",&n);
    printf("\n Enter city names :");
    for(i=0;i<n;i++)
    {
        scanf("%s",&s1[i]);
    }
    printf("\n Enter city name to search city :");
    scanf("%s",&name);
    for(i=0;i<n;i++)
    {
        if(strcmp(s1[i],name)==0)
        {
        break;
        }
    }
    if(i==n)
    printf("City is not found");
    else
    printf("City is found");
}