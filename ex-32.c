//write a program to delete the particular eleent in array
#include<stdio.h>
int main(){
	int n,i,loc;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be deleted\n ");
	scanf("%d",&loc);
	--loc;
	while(loc<n){
		arr[loc-1] = arr[loc];
		loc++;
	}
	n--;
	printf("array elememt :");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
	
}
