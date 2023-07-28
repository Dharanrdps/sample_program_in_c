#include<stdio.h>
int power(int n,int a)
{
	int power=1;
	while(n!=0)
	{
		power*=a;
		n--;
	}
	return power;
}
int main()
{
	int n,count=0,i,rem,s=0,temp,temp1;
	scanf("%d",&n);
	temp=n;
	temp1=n;
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	while(temp!=0)
	{
		rem=temp%10;
		s=s+power(count,rem);
		temp=temp/10;
	}
	if(temp1==s)
	{
		printf("Yes");
	}
	else{
		printf("no");
	}
	return 0;
}
