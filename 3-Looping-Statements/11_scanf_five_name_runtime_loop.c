//Accept 5 names from user at run time.

#include <stdio.h>
#define MAX_NAME_LENGTH 100
main() 
{
    char names[5][MAX_NAME_LENGTH];

    printf("Enter 5 names:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }
    
    printf("\nThe entered names are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

}

