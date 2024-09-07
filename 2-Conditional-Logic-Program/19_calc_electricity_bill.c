/*. Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
Unit Charge/unit
upto 350 @1.20
350 and above but less than 600 @1.50
600 and above but less than 800 @1.80
800 and above @2.00
If bill exceeds Rs. 800 then a surcharge of 18% will be charged and
the minimum bill should be of Rs. 256/-*/

#include <stdio.h>
main()
{
    int id = 0;
    char name[20];
    float unit = 0, bill = 0;

    printf("\n\n\tPlease enter your customer ID : ");
    scanf("%d", &id);
    
    printf("\n\n\tPlease enter your name : ");
    scanf("%s", name);
    
    printf("\n\n\tPlease enter your consumed units : ");
    scanf("%f", &unit);

    if (unit < 350)
    {
        bill = unit * 1.20;
    }
    else if (unit >= 350 && unit < 600)
    {
        bill = unit * 1.50;
    }
    else if (unit >= 600 && unit < 800)
    {
        bill = unit * 1.80;
    }
    else
    {
        bill = unit * 2;
    }

    printf("\n\n\tYour electricity bill is :%f", bill);
}
