// Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>

void P_factor(int);
int main ()
{
    int n;
    printf("\nEnter a number to print all prime factors of number: ");
    scanf("%d",&n);
    P_factor(n);
    return 0;
}
void P_factor(int n)
{
     int i,count;
     for (i = 2; n!=1; i++)
     {
        while (n%i==0)
        {
           n=n/i;
           printf("%d, ",i);
        }
     }
}