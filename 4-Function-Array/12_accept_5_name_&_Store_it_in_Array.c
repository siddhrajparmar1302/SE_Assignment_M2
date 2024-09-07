//WAP to accept students name and store them in the array
#include <stdio.h>
 main()
{
    char names[5][50];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\n\n\tEnter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }
    printf("\n\n\tNames of the students:\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n\n\tStudent %d: %s\n", i + 1, names[i]);
    }
}
