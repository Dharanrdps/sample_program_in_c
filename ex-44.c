#include <stdio.h>
int main()
{
	long long int num;
	int ans,i;
	printf("Enter the number :");
	scanf("%lld",&num);
	for(i=2;i<num/2;i++){
		if(i*i==num)
		{
			printf("%d",i);
		}
	}
		return 0;
}
