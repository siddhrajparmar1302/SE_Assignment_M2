// Store 5 numbers in array and sort it in ascending order
#include <stdio.h>
main()
{
    int a[5], j, i, temp = 0;
    for (i = 0; i < 5; i++)
    {
        printf("\n\n\tEnter the value:");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n%d", a[i]);
    }
    
}
