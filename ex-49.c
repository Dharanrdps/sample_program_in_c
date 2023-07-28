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
   		printf("%d ",a[i][j]);
	   }
	   printf("\n");
   }
    printf("\n");
     printf("Transpose:\n");
     for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
   	{
   		printf("%d ",a[j][i]);
	   }
	   printf("\n");
   }
   return 0;
}
