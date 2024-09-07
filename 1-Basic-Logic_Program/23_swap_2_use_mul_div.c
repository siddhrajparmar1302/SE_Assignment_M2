//WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
main()
{
	printf("\n\n\tSwap number using Multiplication and Division");
	int a,b;
	printf("\n\n\tEnter your first number : ");
	scanf("%d",&a);
	printf("\n\n\tEnter your second number : ");
	scanf("%d",&b);
	
	printf("\n\n\tBefore Swapping");
	
	printf("\n\n\tFirst Number    : %d",a);
	printf("\n\n\tSecond Number   : %d",b);
	
	printf("\n\n\tAfter Swapping");
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("\n\n\tFirst Number    : %d",a);
	printf("\n\n\tSecond Number   : %d",b);
}
