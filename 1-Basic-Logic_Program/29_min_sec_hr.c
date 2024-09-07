//Wap to Convert minutes into seconds and hours...

#include <stdio.h>
main() 
{
    int minutes;
    printf("\n\n\tEnter the number of minutes: ");
    scanf("%d", &minutes);
    int hours = minutes / 60;
    int seconds = minutes * 60;
    printf("\n\n\t%d minutes is equal to %d hours and %d seconds.", minutes, hours, seconds);
}
