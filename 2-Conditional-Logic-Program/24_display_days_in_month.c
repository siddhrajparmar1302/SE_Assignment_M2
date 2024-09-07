/*Accept the input month number and print number of days in that
month*/
#include<stdio.h>
main()
{
	int year,month;
	printf("\n\n\tEnter the year in (XXXX) : ");
	scanf("%d",&year);
	printf("\n\n\tEnter the Month Number :");
	scanf("%d",&month);
	if(month==1)
	{
		printf("\n\n\t31st Days");
	}
	else if(month==2)
	{
		if(year%4==0)
		{
			printf("\n\n\t29th Days");
		}
		else
		{
			printf("\n\n\t28th Days");
		}
	}
	else if(month==3)
	{
		printf("\n\n\t31st Days");
	}
	else if(month==4)
	{
		printf("\n\n\t30th Days");
	}
	else if(month==5)
	{
		printf("\n\n\t31st Days");
	}
	else if(month==6)
	{
		printf("\n\n\t30th Days");
	}
	else if(month==7)
	{
		printf("\n\n\t31st Days");
	}
	else if(month==8)
	{
		printf("\n\n\t31st Days");
	}
	else if(month==9)
	{
		printf("\n\n\t30th Days");
	}
	else if(month==10)
	{
		printf("\n\n\t31st Days");
	}
	else if(month==11)
	{
		printf("\n\n\t30th Days");
	}
	else if(month==12)
	{
		printf("\n\n\t31st Days");
	}
	else
	{
		printf("\n\n\nIn the Years their is have only 12 Months. So please enter Valid number");
	}
	
	
}
