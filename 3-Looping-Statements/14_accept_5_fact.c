// Accept 5 numbers from user and find those numbers factorials 

#include <stdio.h>
main() 
{
    int numbers[5];
    int factorials[5];
    int i = 0, num, fact;

    printf("\n\n\tEnter 5 numbers:\n");
    while (i < 5) {
        printf("\n\n\tNumber %d: ", i + 1);
        scanf("%d", &numbers[i]);
        i++;
    }

    i = 0;
    while (i < 5) 
	{
        num = numbers[i];
        fact = 1;
        while (num > 0) 
		{
            fact *= num;
            num--;
        }
        factorials[i] = fact;
        i++;
    }
    i = 0;
    printf("\n\n\tFactorials:");
    while (i < 5) 
	{
        printf("\n\n\tFactorial of %d is %d\n", numbers[i], factorials[i]);
        i++;
    }
}

