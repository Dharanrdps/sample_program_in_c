#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a<b && c<b)
	{
		printf("Biggest %d",b);
	}
	else if(b<c && a<c)
	{
		printf("Biggest %d",c);
	}
	else
	{
		printf("Biggest %d",a);
	}
	return 0;
}
