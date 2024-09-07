//  WAP to find factorial using recursion

#include <stdio.h>
int factorial(int n) 
{
    if (n == 0) {
        return 1;  
    }
    return n * factorial(n - 1);  
}

main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is: %d\n", num, factorial(num));

}

