/*Write a C program to check whether a triangle can be formed with the given
values for the angles.*/
#include <stdio.h>
main()
{
    int angle1, angle2, angle3, sum;

    
    printf("\n\n\tEnter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    
    sum = angle1 + angle2 + angle3;

    
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) 
	{
        printf("\n\n\tA triangle can be formed.\n");
    } else {
        printf("\n\n\tA triangle cannot be formed.\n");
    }

}

