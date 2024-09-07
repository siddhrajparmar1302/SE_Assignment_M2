/*Write a program in C to read any Month Number in integer and display the
number of days for this month.*/

#include <stdio.h>
main() 
{
    int month;

    
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);
   
    if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12) 
	{
        printf("31 days\n");
    } 
	else if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
        printf("30 days\n");
    } 
	else if (month == 2) 
	{
        printf("28 or 29 days (February, depending on leap year)\n");
    } 
	else 
	{
        printf("Invalid month number! Please enter a number between 1 and 12.\n");
    }
}

