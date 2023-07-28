#include<stdio.h>
int fact(int a)
{
	int f=1,i;
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int n,b;
	scanf("%d",&n);
	b=fact(n);
	printf("%d",b);
	return 0;
}
