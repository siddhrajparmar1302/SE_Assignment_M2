//W A P to find the Area of Triangle.
#include<stdio.h>
main()
{
	int base,height;
	float Area;
	printf("Enter the breath of the triangle");
	scanf("%d",&base);
	printf("\nEnter the height of the triangle");
	scanf("%d",&height);
	Area=0.5*base*height;
	printf("\n The Area of Triangle is %.2f",Area);
}
