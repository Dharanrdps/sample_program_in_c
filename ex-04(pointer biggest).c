#include<stdio.h>
int big(int *a,int *b)
{
	if(*a<*b)
	{
		printf("%d is big",*b);
	}
	else
	{
		printf("%d is big",*a);
	}
}
int main()
{
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	big(&n,&m);
	return 0;
}
