//W A P to find the circumference of rectangle.....
#include<stdio.h>
main()
{
	int length,width;
	float c;
	printf("Enter the length of the rectangle");
	scanf("%d",&length);
	printf("\nEnter the width of rectangle");
	scanf("%d",&width);
	
	c=2*(length+width);
	printf("\nCircumference of rectangle is %.2f",c);
	
}

