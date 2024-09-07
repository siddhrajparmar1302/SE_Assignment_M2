// Program of Armstrong Number in C Using For Loop & While Loop

#include <stdio.h>
#include <math.h>
main() 
{
    int num, original, remainder, sum = 0, digits = 0,temp;

    printf("\n\n\tEnter a number: ");
    scanf("%d", &num);

    original = num;

    for (temp = num; temp > 0; temp /= 10) 
    {
        digits++;
    }

    temp = num;
    while (temp > 0) 
    {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    
    if (sum == original) 
    {
        printf("\n\n\t%d is an Armstrong number.", original);
    } else {
        printf("\n\n\t%d is not an Armstrong number.", original);
    }

}


