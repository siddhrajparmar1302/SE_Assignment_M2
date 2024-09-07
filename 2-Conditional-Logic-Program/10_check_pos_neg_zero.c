//Wap to check whether a number is negative, positive or zero

#include <stdio.h>
main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0)
    {
        printf("%d is a positive number.\n", num);
    }
    else if (num < 0) 
    {
        printf("%d is a negative number.\n", num);
    } else {
        printf("The number is zero.\n");
    }
    
}
