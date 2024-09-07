// WAP to show difference between Structure and Union. 

#include <stdio.h>

struct Student 
{
    int rollno;
    char sname[30];
    float per;
    char grade;
} stud;

// Define a union
union StudentUnion 
{
    int rollno;
    char sname[30];
    float per;
    char grade;
} studUnion;

main() 
{
    
    printf("\n\n\t------------------Structure Input------------------");
    printf("\n\n\tEnter Rollno: ");
    scanf("%d", &stud.rollno);
    printf("\n\n\tEnter Student's Name: ");
    scanf("%s", stud.sname);
    printf("\n\n\tEnter Percentage: ");
    scanf("%f", &stud.per);
    printf("\n\n\tEnter Grade: ");
    scanf(" %c", &stud.grade);
    
    printf("\n\n\t------------------Structure Output------------------");
    printf("\n\n\tRollno: %d", stud.rollno);
    printf("\n\n\tName: %s", stud.sname);
    printf("\n\n\tPercentage: %.2f", stud.per);
    printf("\n\n\tGrade: %c", stud.grade);

    
    printf("\n\n\t------------------Union Input------------------");
    printf("\n\n\tEnter Rollno: ");
    scanf("%d", &studUnion.rollno);
    printf("\n\n\tEnter Student's Name: ");
    scanf("%s", studUnion.sname); 
    printf("\n\n\tEnter Percentage: ");
    scanf("%f", &studUnion.per); 
    printf("\n\n\tEnter Grade: ");
    scanf(" %c", &studUnion.grade); 
    
    printf("\n\n\t------------------Union Output------------------");
    printf("\n\n\tRollno: %d", studUnion.rollno); 
    printf("\n\n\tName: %s", studUnion.sname); 
    printf("\n\n\tPercentage: %.2f", studUnion.per); 
    printf("\n\n\tGrade: %c", studUnion.grade); 
    
    
    printf("\n\n\t-----------------Difference Between Structure and Union--------------------");
    printf("\n\n\tIn the Structure, separate memory is allocated for each member, so all values are correctly preserved.");
    printf("\n\n\tIn the Union, all members share the same memory location, so only the last assigned member contains a valid value.");

}

