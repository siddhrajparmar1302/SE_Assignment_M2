//Wap to check if the given year is a leap year or not.
#include<stdio.h>
main()
{
	int y;
	
	printf("\n\n\tEnter the Year in the form of (XXXX) : ");
	scanf("%d",&y);
	
	printf("\n\n\tCheck the year is leap year or not");
	if(y % 4 == 0 )
	{
		printf("\n\n\t%d Year is leap Year",y);
	}
	else
	{
		printf("\n\n\t%d Year is not leap Year",y);
	}
}
