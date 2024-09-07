/* Write a C program to accept two integers and check whether they are equal
or not */

#include <stdio.h>
main()
{
    int num1, num2;
    //input two value
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
  
    //Check the number are equal or not 
    if (num1 == num2) 
    {
        printf("The two numbers are equal.\n");
    } 
    else 
    {
        printf("The two numbers are not equal.\n");
    }

}
