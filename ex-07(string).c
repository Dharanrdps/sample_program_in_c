#include<stdio.h>
#include<string.h> 
int main()
{
	char str[1000],rev[1000];
	int count=0,count1=0,c;
	int i;
	printf("Enter the string:\n");
	scanf("%[^\n]",str);
	printf("Enter the string:\n");
	scanf("%s",rev);
	for(i=0;str[i]!='\0';i++){
		count++;
	}
	for(i=0;rev[i]!='\0';i++){
		count1++;
	}
	if(count==count1)
	{
		for(i=0;i<count;i++)
		{
			if(str[i]==rev[i])
			{
				c++;
			}
		}
	}
	if(c==count1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
	
	
