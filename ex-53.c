#include<stdio.h>
int main()
{ 
   int a[5][5],b[5][50],i,j,c;
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
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
   	{
   	if(a[i][j]==b[i][j]){
   		c++;
	   }
	   }
   }
   if(c==9)
   {
   	printf("Yes");
   }
   else{
   	printf("No");
   }
   
   
	   printf("\n");
   

   return 0;
}
