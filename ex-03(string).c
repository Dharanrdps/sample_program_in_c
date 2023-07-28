#include<stdio.h>
#include<string.h> 
int main(){
	char str[1000];
	printf("Enter the string:\n");
	scanf("%[^\n]",str);
	printf("%s",str);
	int count = 0,word=0,i;
	for(i=0;str[i]!='\0';i++)
	{
       if(str[i]==' ')
	   {
		   
		count++;
	}
	else{
		word++;
	}
}
printf("\nThe number of space in string: %d \n",count);
printf("\nThe number of words in string: %d \n",word);
	return 0;
}
