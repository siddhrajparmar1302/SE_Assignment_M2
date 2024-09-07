/*Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)
*/

#include <stdio.h>
main()
{
    int no, last, sum;

    printf("\n\n\tEnter any number : ");
    scanf("%d", &no);

    last = no % 10;

    while (no > 9)
    {
        no = no / 10;
    }

    sum = no + last;
    printf("\n\n\tsum of first and last digit is : %d", sum);
}
