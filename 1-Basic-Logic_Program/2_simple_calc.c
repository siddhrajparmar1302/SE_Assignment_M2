//Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo) 

#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("\nEnter the second number");
	scanf("%d",&b);
	printf("\nAddition of %d and %d is %d",a,b,a+b);
	printf("\nSubtraction of %d and %d is %d",a,b,a-b);
	printf("\n Multiplication of %d and %d is %d",a,b,a*b);
	printf("\nDivision of %d and %d is %.2f",a,b,(float)a/(float)b);
	
}
