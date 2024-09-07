//  WAP to perform Palindrome number using for loop and function 

#include <stdio.h>

int is_palindrome(int num) {
    int original = num, reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    return original == reversed;
}

main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (is_palindrome(number)) 
	{
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

}

