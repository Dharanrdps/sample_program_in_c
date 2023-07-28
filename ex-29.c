#include<stdio.h>
int main(){
int n,i=0;
printf("\n How many no to be stored");
scanf("%d",&n);
int arr[n];

while(i<n)
{
	printf("\nInput a value:");
	scanf("%d",&arr[i]);
	i++;
}
	printf("enter are array values:\n");
	for(i=0;i<n;i++){
	printf("\t%d",arr[i]);
	}
return 0;
}
