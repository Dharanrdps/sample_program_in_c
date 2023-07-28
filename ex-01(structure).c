#include<stdio.h>
struct employee
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
	struct employee emp[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&emp[i].empid);
		scanf("%s",emp[i].name);
		scanf("%lld",&emp[i].salary);
	}
	for(i=0;i<n;i++)
	{
		printf("\n\t EMPLOYEE ID: %d\n\t EMPLOYEE NAME: %s\n\t EMPLOYEE SALARY: %lld\n\t",emp[i].empid,emp[i].name,emp[i].salary);
	}
	return 0;
}
