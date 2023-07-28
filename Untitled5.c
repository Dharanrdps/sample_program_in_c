#include<stdio.h>
int main()
{ 
   int a[5][5],i,j;
   printf("Enter the array:\n");
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
   	{
   		scanf("%d",&a[i][j]);
	   }
   }
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
   	{
   		printf("a[%d][%d]=%d",i,j,a[i][j]);
	   }
	   printf("\n");
   }
   return 0;
}
