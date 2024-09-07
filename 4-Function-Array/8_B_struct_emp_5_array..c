/*
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage
b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage
*/

#include <stdio.h>

struct Employee 
{
    int empno;
    char empname[100];
    char address[100];
    int age;
};

int main() 
{
    struct Employee emp;
    struct Employee employees[5];
    int i;

    printf("Enter details for a single employee:\n"); // Input and display for a single employee
    printf("Employee Number: ");
    scanf("%d", &emp.empno);
    printf("Employee Name: ");
    scanf(" %[^\n]%*c", emp.empname);
    printf("Address: ");
    scanf(" %[^\n]%*c", emp.address);
    printf("Age: ");
    scanf("%d", &emp.age);

    printf("\nSingle Employee Details:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);

    printf("\nEnter details for five employees:\n"); // Input and display for five employees
    for (i = 0; i < 5; i++)
	{
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf(" %[^\n]%*c", employees[i].empname);
        printf("Address: ");
        scanf(" %[^\n]%*c", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    printf("\nAll Employees Details:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
    }
}

