// Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include <stdio.h>

int isEven(int);
int main ()
{
    int num;
    printf("\nEnter a Number to Check number is Even Or Odd: ");
    scanf("%d",&num);
    
    if(isEven(num))
        printf("Number %d is even.",num);
    else
        printf("Number %d is odd.",num);
    printf("\n ");
    return 0;
}

int isEven(int num)
{
    return !(num&1);
}