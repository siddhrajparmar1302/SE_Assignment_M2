//Wap to Accept 5 employees name and salary and count average and total salary..
#include <stdio.h>

main() 
{
    char name1[50], name2[50], name3[50], name4[50], name5[50];
    int s1, s2, s3, s4, s5, total;
    float avg;

    
    printf("\n\n\tEnter the Name of Employee 1: "); // Input for Employee 1
    scanf("%s", name1);
    printf("\n\n\tEnter Salary of Employee 1: ");
    scanf("%d", &s1);

    printf("\n\n\tEnter the Name of Employee 2: "); // Input for Employee 2
    scanf("%s", name2);
    printf("\n\n\tEnter Salary of Employee 2: ");
    scanf("%d", &s2);
    
    printf("\n\n\tEnter the Name of Employee 3: "); // Input for Employee 3
    scanf("%s", name3);
    printf("\n\n\tEnter Salary of Employee 3: ");
    scanf("%d", &s3);
    
    printf("\n\n\tEnter the Name of Employee 4: "); // Input for Employee 4
    scanf("%s", name4);
    printf("\n\n\tEnter Salary of Employee 4: ");
    scanf("%d", &s4);
    
    printf("\n\n\tEnter the Name of Employee 5: "); // Input for Employee 5
    scanf("%s", name5);
    printf("\n\n\tEnter Salary of Employee 5: ");
    scanf("%d", &s5);
    
    printf("\n\n\tName of the Employees");
    printf("\n\n\tName of Employee 1: %s", name1);
    printf("\n\n\tName of Employee 2: %s", name2);
    printf("\n\n\tName of Employee 3: %s", name3);
    printf("\n\n\tName of Employee 4: %s", name4);
    printf("\n\n\tName of Employee 5: %s", name5);
 
    printf("\n\n\tSalary of the Employees");
    printf("\n\n\tSalary of Employee 1: %d", s1);
    printf("\n\n\tSalary of Employee 2: %d", s2);
    printf("\n\n\tSalary of Employee 3: %d", s3);
    printf("\n\n\tSalary of Employee 4: %d", s4);
    printf("\n\n\tSalary of Employee 5: %d", s5);

    // Calculate total and average
    total = s1 + s2 + s3 + s4 + s5;
    avg = total / 5.0; 

    printf("\n\n\tCalculate Average and Total of Salaries");
    printf("\n\n\tTotal Amount of Salary of Five Employees: %d", total);
    printf("\n\n\tAverage Salary of Five Employees: %.2f", avg);

}

