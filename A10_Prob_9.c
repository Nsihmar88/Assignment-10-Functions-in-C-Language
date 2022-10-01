// Write a function to check whether a given number contains a given digit or not. (TSRS)

#include <stdio.h>

int contain(int,int);
int main ()
{
    int n,d,contains;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    printf("\nEnter a digit: ");
    scanf("%d",&d);
    contains=contain(n,d);
    if(contains!=0)
        printf("\n%d contains %d.",n,d);
    else
        printf("\n%d doesn't contains %d.",n,d);
    printf("\n ");
    return 0;
}
int contain(int n,int d)
{
    int cont,rem,i;

    while(n)
    {
        rem=n%10;
        n=n/10;
        if (rem==d)
        {
            i=1;
            break;
        }
        else
            i=0;
    }
    
    cont=i;
    return (cont);    
}