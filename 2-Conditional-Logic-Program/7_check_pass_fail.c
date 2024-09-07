//Accept marks from user and check pass or fail
#include<stdio.h>
main()
{
	int marks;
	printf("\n\n\tEnter the Marks of Student's : ");
	scanf("%d",&marks);
	
	if(marks>=40)
	{
		printf("\n\n\tStudent is Pass");
	}
	else
	{
		printf("\n\n\tStudent is Fail");
	}
}
