#include<stdio.h>
int main()
{
	int n,sum=0,i;
	float avg;
	printf("Enter the number of values to be enter in array:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	avg = sum/n;
	printf("Sum:%d\n",sum);
	printf("Average:%f",avg);
	return 0;
}
