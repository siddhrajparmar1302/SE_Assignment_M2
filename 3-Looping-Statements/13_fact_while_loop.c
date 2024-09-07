// calculate the Factorial of a Given Number using while loop

#include <stdio.h>
main() 
{
    int num, factorial = 1;

    printf("\n\n\tEnter a number: ");
    scanf("%d", &num);

    while (num > 0) 
	{
        factorial *= num;
        num--;
    }
    printf("\n\n\tFactorial is %d", factorial);
}

