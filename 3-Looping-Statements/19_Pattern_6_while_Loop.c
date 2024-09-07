/* Pattern - 6 - pending
*
* *
* * *
* * * *
* * * *
* * * * *
* * * *
* * * *
* * *
* *
*
*/

#include <stdio.h>
main() 
{
    int r = 1, c;

    while (r <= 4) {
        c = 1;
        while (c <= r) {
            printf("* ");
            c++;
        }
        printf("\n");
        r++;
    }
    r = 1;
    while (r <= 2) {
        c = 1;
        while (c <= 5) {
            printf("* ");
            c++;
        }
        printf("\n");
        r++;
    }
    r = 4;
    while (r >= 1) {
        c = 1;
        while (c <= r) {
            printf("* ");
            c++;
        }
        printf("\n");
        r--;
    }
}

