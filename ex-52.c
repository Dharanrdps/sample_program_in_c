#include<stdio.h>
int main()
{ 
   int a[5][5],b[5][50],s[5][5],i,j;
   printf("Enter the array:\n");
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
   	{
   		scanf("%d",&a[i][j]);
	   }
   }
    printf("Enter the array:\n");
    for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
   	{
   		scanf("%d ",&b[i][j]);
	   }
   }
   printf("the sum of two matrix:\n");
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
   	{    
   	    s[i][j]=a[i][j]+b[i][j];
   		printf("%d ",s[i][j]);
	   }
	   printf("\n");
   }
   
   return 0;
}
