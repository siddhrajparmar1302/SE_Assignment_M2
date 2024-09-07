//  Write a program in C to extract a substring from a given string 

#include <stdio.h>
#include <string.h>
main() 
{
    char str1[100], substr[100];
    int start, length, end, len, i;

    
    printf("Enter the string: ");
    scanf("%s", str1);

    
    printf("Enter start index: ");
    scanf("%d", &start);
    printf("Enter length of substring: ");
    scanf("%d", &length);

    len = strlen(str1);
    end = start + length - 1; 

    printf("\n\n\t");
    if (start >= 0 && start < len && end < len && start <= end) 
	{
        for (i = start; i <= end; i++) 
		{
            printf("%c", str1[i]);
        }
    } else {
        printf("You entered invalid start or length.");
    }
}

