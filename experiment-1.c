#include<stdio.h>
#include<conio.h>
int main()
{   
	int a;
	float b;
	char c;
	char name[10];
	scanf("%d %f %c %s",&a,&b,&c,&name);
	printf("Integer= %d float= %f char= %c string= %s",a,b,c,name);
	getch();
	return 0 ;
}
