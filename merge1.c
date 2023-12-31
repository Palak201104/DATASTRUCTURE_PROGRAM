 #include<stdio.h>
#include<stdlib.h>
 struct Emp
  {
   int age;
   float sal;
   char name[10];
  }e1[100],t[100];
void mergesort(int low,int mid,int high)
{
  int i,j,k;
  i=low;
  j=mid+1;
  k=low;
  while(i<=mid&&j<=high)
  {
    if(e1[i].age<e1[j].age)
      t[k++]=e1[i++];
	else
	  t[k++]=e1[j++];	 	
  }	
  while(i<=mid)
    t[k++]=e1[i++];
  while(j<=high)
    t[k++]=e1[j++];
for(i=low;i<=high;i++)
  e1[i]=t[i];
}
void msortdiv(int low,int high)
{
	 int mid;
	 if(low!=high)
	 {
	 	mid=(low+high)/2;
	 	msortdiv(low,mid);
	 	msortdiv(mid+1,high);
	 	mergesort(low,mid,high);
	 }
}
int main()
{
  FILE *f1,*f2;
  int i=0,n;
   f1=fopen("emp.txt","r");
   f2=fopen("rbnb.txt","w");
   
   if(f1==NULL)
   {
      printf("File not found...");
      exit(0);
   }
   while(!feof(f1))
   {
     fscanf(f1,"%s%d%f",&e1[i].name,&e1[i].age,&e1[i].sal);
     i++;
   }
   n=i-1;
   msortdiv(0,n-1);
   for(i=0;i<n;i++)
   {
   	fprintf(f2,"\n%s\t %d \t %f",e1[i].name,e1[i].age,e1[i].sal);
   }
    fclose(f1);
    fclose(f2);
    printf("file copy successfully");
}