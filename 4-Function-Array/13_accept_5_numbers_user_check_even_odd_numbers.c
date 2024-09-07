#include <stdio.h>
 main() 
{
    int numbers[5],i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\nChecking if each number is even or odd:\n");
    for (i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("Number %d is even.\n", numbers[i]);
        }
        else
        {
            printf("Number %d is odd.\n", numbers[i]);
        }
    }
}
    

