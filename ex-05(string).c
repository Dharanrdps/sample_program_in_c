#include<stdio.h>
#include<string.h> 
int main(){
	char str[1000];
	printf("Enter the string:\n");
	scanf("%[^\n]",str);
	printf("%s",str);
	int count = 0,i;
	for(i=0;str[i]!=0;i++)
	{
		count++;
	}
	printf("Reserve string:\n");
	for(i=count-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}
