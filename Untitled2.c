#include<stdio.h>
int power(int a,int b)
{
    int power=1,i;
    for(i=0;i<=b;i++)
    {
        power=power*a;
    }
    return power;
}
int main()
{
    long int o,d= 0;
    int i = 0;
    scanf("%ld",&o);
    while (o != 0)
    {
        d=d+(o % 10)*power(8, i++);
        o=o/10;
	}
    printf("%ld",d);
    return 0;
}
