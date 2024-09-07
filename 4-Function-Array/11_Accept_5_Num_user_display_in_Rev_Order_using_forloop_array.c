// WAP to accept 5 numbers from user and display in reverse order using for loop and array

#include <stdio.h>

main() 
{
    int numbers[5],i;

    printf("\n\n\tEnter 5 numbers:");
    for (i = 0; i < 5; i++) 
	{
        scanf("%d", &numbers[i]);
    }

    printf("\n\n\tNumbers in reverse order:");
    for (i = 4; i >= 0; i--) 
	{
        printf("\n\n\t%d", numbers[i]);
    }
}
 
