#include<stdio.h>
union employee
{
	int empid;
	char name[25];
	long long int salary;
};
int main()
{
	int e,n,s,i;
	printf("\nEnter the number of employee detail to be stored\n");
	scanf("%d",&n);	
	union employee emp[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&emp[i].empid);
		scanf("%c",emp[i].name);
		scanf("%lld",&emp[i].salary);
	}
	for(i=0;i<n;i++)
	{
		printf("\n\t EMPLOYEE ID: %d\n\t EMPLOYEE NAME: %c\n\t EMPLOYEE SALARY: %lld\n\t",emp[i].empid,emp[i].name,emp[i].salary);
	}
	return 0;
}
