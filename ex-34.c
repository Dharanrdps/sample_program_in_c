#include<stdio.h>
int main()
{
	int n,i,index,data;
	printf("Enter the number of element to be inserted:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element to the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the index of insertion:");
	scanf("%d",&index);
	printf("Enter the element:");
	scanf("%d",&data);
	for(i=n;i>=index;i--)
	{
		arr[i]=arr[i-1];
	}
	n++;
	arr[index-1]=data;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
