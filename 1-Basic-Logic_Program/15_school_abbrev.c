//Wap Convert school’s name in abbreviated form
#include<stdio.h>
main()
{
	char school[100]="Kendriya Vidhyalaya Rajkot";
	
	printf("\n\n\n\t Name of the School is : %s", school);
	printf("\n\n\n\t Abbreviation : %c.%c.%c.%c.%c", school[0],school[6],school[18],school[28],school[39]);
}
