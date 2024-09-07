//Write a program make a summation of given number (E.g., 1523 Ans:- 11)

#include <stdio.h>
main()
{

    int no, rem, sum = 0;

    printf("\n\n\tEnter any number : ");
    scanf("%d", &no);

    while (no != 0)
    {
        rem = no % 10;
        sum=sum+rem;
        no = no / 10;
    }
    printf("\n\n\tSum : %d", sum);

}
