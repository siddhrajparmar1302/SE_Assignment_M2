/*
Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include <stdio.h>
main()
{
    float b_salary = 0, g_salary = 0, hra = 0, da = 0;
    printf("Please enter your basic salary : ");
    scanf("%f", &b_salary);
    if (b_salary <= 10000)
    {
        hra = b_salary * 0.20;
        da = b_salary * 0.80;
    }
    else if (b_salary <= 20000)
    {
        hra = b_salary * 0.25;
        da = b_salary * 0.90;
    }
    else
    {
        hra = b_salary * 0.30;
        da = b_salary * 0.95;
    }
    g_salary = b_salary + hra + da;
    printf("Your gross salary : %.2f", g_salary);
   
}
