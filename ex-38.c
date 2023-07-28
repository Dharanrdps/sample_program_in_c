//write a program to sort n given numbers in des order\ and print alternative
#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter the number of element to be storted\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter values for the array\n ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}	
	}
	for(i=0;i<n;i+=2)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
