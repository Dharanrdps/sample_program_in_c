#include<stdio.h>//function with return type and  without argument 
int fabbi()
{
	int f=1,i,a;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int b;
	b=fabbi();
	printf("%d",b);
	return 0;
}
