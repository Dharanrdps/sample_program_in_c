#include<stdio.h>
int length(char *str)
{
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
int main()
{
	char str[1000],g;
	scanf("%[^\n]",str);
	g=length(&str);
	printf("%d",g);
	return 0;
}
