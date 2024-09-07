//Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
main()
{
    int b,s,a;
    
    printf("\n\n\tEnter buy value :");
    scanf("%d",&b);
    printf("\n\n\tEnter sell value");
    scanf("%d",&s);
    a=s-b;
    if (s>b)
    {
        printf("%d profit",a);
    }
    else
    {
        printf("%d loss",a);
    }
}
