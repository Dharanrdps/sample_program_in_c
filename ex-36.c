// to perform addtion of 3*3 matrix
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],m[3][3],i,j,k;
	printf("Enter the matrix 1\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the matrix 2\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("The multiple of matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		m[i][j]=0;
		for(k=0;k<3;k++){
			m[i][j]+=a[i][k]*b[k][j];
		}
	}
	}
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	    printf("%d ",m[i][j]);
	}
	   printf("\n");
	}
	return 0;
}
