#include<stdio.h>
int main()
{
	int a,b,c,int,res;
	scanf("%d %d %d",&a,&b,&C);
	res=(a>b && a>c)?a:(b>a && b>c)?b:c;
	printf("Biggest number is %d",res);
	return 0;
}
