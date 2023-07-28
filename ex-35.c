// to perform addtion of 3*3 matrix
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],s[3][3],i,j;
	printf("Enter the matrix 1\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[3][3]);
		}
	}
	printf("Enter the matrix 2\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[3][3]);
		}
	}
	printf("The sum of matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			s[3][3]=a[3][3]+b[3][3];
		}
	}
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	    printf("%d",s[3][3]);
	}
	   printf("\n");
	}
	return 0;
}
