// Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>

double arrangement(int,int);
double Factorial(int);
int main ()
{
    int n,r;
    double arrang;
    printf("\nEnter value of item: ");
    scanf("%d",&n);
    printf("\nEnter value of selection at a time: ");
    scanf("%d",&r);
    arrang=arrangement(n,r);
    printf("\nCombinations one can make from %d items and %d selected at a time combinations are %.2lf",n,r,arrang);
    printf("\n ");
    return 0;
}
double arrangement(int n,int r)
{
    double arrang;
    arrang=(Factorial(n)/Factorial(n-r));
    return (arrang);    
}
double Factorial(int num)
{
    int count;
    double Fact_Num=1;

    for (count = 1; count <= num; count++)
    {
        Fact_Num=Fact_Num*count;       
    }
    return(Fact_Num);
}