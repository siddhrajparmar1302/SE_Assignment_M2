/*
Wap to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/

#include <stdio.h>
main() 
{
    int numbers[10], even_count = 0, odd_count = 0, even_sum = 0, odd_sum = 0,i;

    printf("\n\n\tEnter 10 numbers:");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) 
        {
            even_count++;
            even_sum += numbers[i];
        } else {
            odd_count++;
            odd_sum += numbers[i];
        }
    }

    printf("\n\n\tTotal Even numbers: %d", even_count);
    printf("\n\n\tTotal Odd numbers: %d", odd_count);
    printf("\n\n\tTotal Sum of even numbers: %d", even_sum);

}

