
#include<stdio.h>
int main()
{
	int n,sumr=0,sumc=0,s[100],r[100],i,j,count=0;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sumr+=a[i][j];
			sumc+=a[j][i];
		}
		s[i]=sumr;
		r[i]=sumc;
		sumr=0;
		sumc=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			if(r[j]<s[i])
			{
				count++;
			}
		}
	}
	printf("Count = %d",count);
}
