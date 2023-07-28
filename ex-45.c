#include<stdio.h>
int main()
{
	int sum=1,i,num;
	printf("Enter the number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum*i;
	}
	printf("%d",sum);
	return 0;
}
