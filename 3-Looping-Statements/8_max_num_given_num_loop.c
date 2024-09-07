/* Wap to find out the max from given number (E.g., No: -1562
Max number is 6) */

#include <stdio.h>
main() 
{
    int num, max_digit = -1;

    printf("\n\n\tEnter a number: ");
    scanf("%d", &num);
    
    num = (num < 0) ? -num : num;

    while (num > 0) 
    {
        int digit = num % 10;
        if (digit > max_digit) 
		{
            max_digit = digit;
        }
        num /= 10;
    }

    printf("\n\n\tMax digit is: %d\n", max_digit);

}

