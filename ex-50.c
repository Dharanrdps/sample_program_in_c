#include<stdio.h>
int main()
{ 
   int a[5][5],i,j,sum=0,sum1=0;
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
   		sum+=a[i][j];
   		sum1+=a[j][i];
   			printf("%d ",a[i][j]);
	   }
	   	printf("row= %d ",sum);
	   	printf("column= %d ",sum1);
	   	sum=0;
	   	sum1=0;
	   printf("\n");
   }
   return 0;
}

