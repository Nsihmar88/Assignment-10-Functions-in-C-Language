// Write a function to print first N natural numbers (TSRN)

#include <stdio.h>

void N_Natural();
int main ()
{
    int num;
    printf("\nEnter value of N to print first N Natural Numbers: ");
    scanf("%d",&num);
    N_Natural(num);
    return 0;
}

void N_Natural(int num1)
{
    int count=1;

    for (count = 1; count <= num1; count++)
    {
        printf("%d ",count);
    }
    printf("\n ");
}