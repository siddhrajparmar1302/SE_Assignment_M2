//Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
main()
{
	int num, i, sum=0;
	
	printf("\n\n\tSum of Natural Numbers");
	printf("\n\n\tEnter the Natural number : ");
	scanf("%d",&num);
	if(num > 0)
	{
	    i=1;
	    while(i<=num)
	    {
		    sum = sum + i;
	        i++;
	    }
	}
	else
	{
		printf("\n\n\tPlease enter Natural Number...");
	}
	printf("\n\n\tSum of 1 to %d is = %d", num, sum);
	
}
