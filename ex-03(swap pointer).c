#include<stdio.h>
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	swap(&n,&m);
	printf("%d %d",n,m);
}
