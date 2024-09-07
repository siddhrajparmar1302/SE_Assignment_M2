/*
WAP to reverse a string and check that the string is palindrome or not 
*/

#include <stdio.h>
#include <string.h>

main() 
{
    char str[100], reversed[100];
    int len, i;
    int isPalindrome = 1;  

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';  

    printf("Reversed string: %s\n", reversed);

    for (i = 0; i < len; i++) {
        if (str[i] != reversed[i]) {
            isPalindrome = 0;  
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

}

