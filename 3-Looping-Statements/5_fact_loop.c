//Wap to print factorial of given number

#include <stdio.h>
main()
{
    int no, factorial = 1;

    printf("\n\n\tEnter any number to find factorial :");
    scanf("%d", &no);

    while (no > 0)
    {
        factorial = factorial * no;
        no--;
    }
    printf("\n\n\tFactorial of given number is : %ld", factorial);
}
