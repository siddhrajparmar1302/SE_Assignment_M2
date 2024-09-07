/*WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/
#include<stdio.h>
main()
{
	int cm;

	printf("\n\n\tEnter the Height of the person in centimeters : ");
	scanf("%d",&cm);
	
	if(cm < 140)
	{
		printf("\n\n\tHeight of the Person is short");
	}
	else if(cm >=140 && cm < 185)
	{
		printf("\n\n\tHeight of the Person is Average");
	}
	else
	{
		printf("\n\n\tHeight of the Person is Tall ");
	}
}

