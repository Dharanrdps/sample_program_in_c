#include<stdio.h>
int main()
{ 
    int a,b=0;
	a=1;
	b= ++a + ++a + ++a + ++a + ++a;
	printf("%d",b);
	return 0;
}
