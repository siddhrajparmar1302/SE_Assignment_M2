//Wap to Convert kilometers into meters...
#include<stdio.h>
main()
{
	int km,m;
	printf("\n\n\tKilometers to Meters");
	printf("\n\n\tEnter the Values in Kilometer : ");
	scanf("%d",&km);
	
	m = km * 1000;
	
	printf("\n\n\t%d Kilometers = %d Meters",km,m);
}
