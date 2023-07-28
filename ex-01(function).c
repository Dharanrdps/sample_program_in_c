#include<stdio.h>//function with return type and argument 
int fabbi(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int a,b;
	scanf("%d",&a);
	b=fabbi(a);
	printf("%d",b);
	return 0;
}
