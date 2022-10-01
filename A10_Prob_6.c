// Write a function to calculate the factorial of a number. (TSRS)

#include <stdio.h>

double Factorial(int);
int main ()
{
    int num;
    double fact;
    printf("\nEnter a Number to Calculate Factorial: ");
    scanf("%d",&num);
    fact=Factorial(num);
    printf("Factorial of %d is %.2lf",num,fact);
    printf("\n ");
    return 0;
}

double Factorial(int num1)
{
    int count;
    double mult=1;

    for (count = 1; count <= num1; count++)
    {
        mult=mult*count;        
    }
    return(mult);
}