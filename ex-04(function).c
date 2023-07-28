#include<stdio.h>//function without return type and  with argument 
int fabbi(int n)
{
	int f=1,i;

	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
		printf("%d",f);
}
int main()
{
	int a,b;
	scanf("%d",&a);
	fabbi(a);
	return 0;
}
