#include<stdio.h>
#include<string.h> 
int main()
{
	char str[1000],rev[1000];
	int i;
	printf("Enter the string:\n");
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i--){
		if(str[i]==' ')
		{
			rev[i]=str[i]-1;
		}
	}
	printf("%s",&rev[i]);
}
