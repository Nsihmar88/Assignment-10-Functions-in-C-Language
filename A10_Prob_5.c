// Write a function to print first N odd natural numbers. (TSRN)

#include <stdio.h>

void N_Odd();
int main ()
{
    int num;
    printf("\nEnter value of N to print first N Odd Natural Numbers: ");
    scanf("%d",&num);
    N_Odd(num);
    return 0;
}

void N_Odd(int num1)
{
    int count=1;

    for (count = 1; count <= 2*num1; count++)
    {
        if(count%2!=0)
        printf("%d ",count);
    }
    printf("\n ");
}