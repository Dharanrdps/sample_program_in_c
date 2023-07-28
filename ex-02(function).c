#include<stdio.h>//function without return type and  without argument 
int fabbi()
{   int a;
    scanf("%d",&a);
	int f=1,i;
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	printf("%d",f);
}
int main()
{
  fabbi();
  return 0;
}
