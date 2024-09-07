// WAP to find reverse of string using recursion

#include <stdio.h>
void reverseString(char str[], int index, int len) 
{
    if (index >= len / 2) 
	{
        return;  
    }
 
    char temp = str[index];
    str[index] = str[len - index - 1];
    str[len - index - 1] = temp;

    reverseString(str, index + 1, len);
}

main() 
{
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);  
    
    int len = 0;
    while (str[len] != '\0') 
	{
        len++;
    }
    
    reverseString(str, 0, len);

    printf("Reversed string: %s\n", str);

}

