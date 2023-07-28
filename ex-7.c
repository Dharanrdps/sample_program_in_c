#include<stdio.h>
int main()
{
	int a,b,c,res;
	scanf("%d %d %d",&a,&b,&c);
	res=(a>b && a>c)?a:(b>a && b>c)?b:c;
	printf("Biggest number is %d",res);
	return 0;
}
