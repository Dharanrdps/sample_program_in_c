#include<stdio.h>
int add(int n1,int n2)
{
	int s=0;
	s=n1+n2;
	
	printf("%d",s);
}
int sub(int n1,int n2)
{
	int sb=0;
	sb=n1-n2;
	printf("%d",sb);
}
int product(int n1,int n2)
{
	int p=0;
	p=n1*n2;
	printf("%d",p);
}
float division(float n1,float n2)
{
	float d=0;
	d=n1/n2;
	printf("%.2f",d);
}
int main()
{
	int a,b;
	int ch;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("\n\t 1.addition \n\t 2.subtraction \n\t 3.multiplication \n\t 4.division \n\t");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			add(a,b);
			break;
		case 2:
		     sub(a,b);
			 break;
	    case 3:
		     product(a,b);
			 break;
		case 4:
			
		     division(a,b);
			 break;
		default:
			printf("Enter the correct number!!!!!");
	}
	return 0;
}
