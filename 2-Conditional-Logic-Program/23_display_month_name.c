//Accept month number and display month name
#include<stdio.h>
main()
{
	int month;
	
	printf("\n\n\tTo find Month Name As per Number");

	printf("\n\n\tEnter the Month Number : ");
	scanf("%d",&month);
	switch(month)
	{
		case 1:printf("\n\n\tJanuary");
		       break;
		case 2:printf("\n\n\tFebruary");
		       break;
		case 3:printf("\n\n\tMarch");
		       break;
		case 4:printf("\n\n\tApril");
		       break;
		case 5:printf("\n\n\tMay");
		       break;
		case 6:printf("\n\n\tJune");
		       break;
		case 7:printf("\n\n\tJuly");
		       break;
		case 8:printf("\n\n\tAugust");
		       break;
		case 9:printf("\n\n\tSeptember");
		       break;
		case 10:printf("\n\n\tOctober");
		       break;
		case 11:printf("\n\n\tNovember");
		       break;
		case 12:printf("\n\n\tDecember");
		       break;
		default:printf("You take invalid Month Number");
		        break;
		        
	}
}
