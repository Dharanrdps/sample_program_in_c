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
	printf("%d",count);
	return 0;
}
