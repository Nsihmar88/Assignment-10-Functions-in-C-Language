// Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>

double Combinations(int,int);
double Factorial(int);
int main ()
{
    int n,r;
    double comb;
    printf("\nEnter value of item: ");
    scanf("%d",&n);
    printf("\nEnter value of selection at a time: ");
    scanf("%d",&r);
    comb=Combinations(n,r);
    printf("\nCombinations one can make from %d items and %d selected at a time combinations are %.2lf",n,r,comb);
    printf("\n ");
    return 0;
}
double Combinations(int n,int r)
{
    double comb;
    comb=Factorial(n)/(Factorial(r)*Factorial(n-r));
    return (comb);    
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