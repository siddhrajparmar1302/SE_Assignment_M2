//Wap to find minimum number among 3 numbers using ternary operator

#include <stdio.h>
main() 
{
    int a, b, c, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    printf("The minimum number is: %d\n", min);
}

