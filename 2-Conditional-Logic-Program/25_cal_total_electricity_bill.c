/*Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/


#include <stdio.h>
main()
{
    float unit = 0, bill = 0, charge = 0;
    printf("Please enter your consumed units : ");
    scanf("%f", &unit);
    if (unit < 50)
    {
        bill = unit * 0.50;
    }
    else if (unit >= 50 && unit < 150)
    {
        bill = unit * 0.75;
    }
    else if (unit >= 150 && unit < 250)
    {
        bill = unit * 1.20;
    }
    else
    {
        bill = unit * 1.50;
    }
    charge = bill * 0.20;
    bill += charge;
    printf("Your electricity bill :%.2f", bill);
}
