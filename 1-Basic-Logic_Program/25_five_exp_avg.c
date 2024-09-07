//Wap to Accept 5 expense from user and find average of expense...
#include<stdio.h>
main()
{
	int exp1,exp2,exp3,exp4,exp5;
	float avg;
	printf("\n\n\tEnter first Expense : ");
	scanf("%d",&exp1);
	printf("\n\n\tEnter second Expense : ");
	scanf("%d",&exp2);
	printf("\n\n\tEnter third Expense : ");
	scanf("%d",&exp3);
	printf("\n\n\tEnter fourth Expense : ");
	scanf("%d",&exp4);
	printf("\n\n\tEnter fifth Expense : ");
	scanf("%d",&exp5);
	
	avg=(exp1+exp2+exp3+exp4+exp5)/5;
	printf("\n\n\tAverage of the Five Expense are : %.2f",avg);
	
}
