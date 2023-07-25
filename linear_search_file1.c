#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1;
    int x,num,flag=0;
    fp1=fopen("numbers.txt","r");
    if(fp1==NULL)
    {
       printf("\n File is not found");
       exit(0);
    }
    printf("\n Enter number to search :");
    scanf("%d",&x);
    while(!feof(fp1))
    {
        fscanf(fp1,"%d",&num);
        if(x==num)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("Number is found");
    else
    printf("Number is not found");

    fclose(fp1);
}