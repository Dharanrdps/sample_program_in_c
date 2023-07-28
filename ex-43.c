#include <stdio.h>
int main()
{
	long long int num1,num2;
	int count=0;
	printf("\nEnter the number\n");
	scanf("%lld",&num1);
	printf("\nEnter the number to know the occurance\n");
	scanf("%lld",&num2);
	while(num1!=0)
	{
		if(num1%10==num2){
			count=count+1;
		}
		num1=num1/10;
	}
	printf("Number of occurance in the number: %d",count);
	return 0;
}
