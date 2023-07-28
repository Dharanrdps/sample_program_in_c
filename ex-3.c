#include<stdio.h> //swap of two elements without thrid variable
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d %d",a,b);
	return 0;
}
