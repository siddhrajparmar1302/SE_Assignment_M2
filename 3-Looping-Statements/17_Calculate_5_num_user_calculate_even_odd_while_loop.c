// Calculate 5 numbers from user and calculate number of even and odd using of while loop 

#include <stdio.h>
main() 
{
    int num, even_count = 0, odd_count = 0, i = 0;
    printf("Enter 5 numbers:\n");
    while (i < 5) {
        scanf("%d", &num);
        (num % 2 == 0) ? even_count++ : odd_count++;
        i++;
    }
    printf("Even numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);
}

