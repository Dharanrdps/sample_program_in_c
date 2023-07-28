#include<stdio.h>
int main()
{ 
   int a[5][5],i,j,n,m;
   scanf("%d",&n);
   scanf("%d",&m);
   printf("Enter the array:\n");
   for(i=0;i<n;i++)
   {
   	for(j=0;j<m;j++)
   	{
   		scanf("%d",&a[i][j]);
	   }
   }
   for(i=0;i<n;i++)
   {
   	for(j=0;j<m;j++)
   	{
   		printf("%d ",a[i][j]);
	   }
	   printf("\n");
   }
    printf("\n");
     printf("Transpose:\n");
     for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		printf("%d ",a[j][i]);
	   }
	   printf("\n");
   }
   return 0;
}
