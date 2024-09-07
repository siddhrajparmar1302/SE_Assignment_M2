//Wap to Calculate person’s Annual salary....
#include<stdio.h>
main()
{
	int salary,annual_income;
	printf("\n\n\tEnter the Person's Salary of One Month : ");
	scanf("%d",&salary);
	
	printf("\n\n\tSalary of the person is : %d",salary);
	annual_income=salary*12;
	printf("\n\n\tAnnual income of the person is : %d",annual_income);
	
}
