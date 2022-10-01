//Write a function to calculate simple interest. (TSRS)

#include <stdio.h>

float Simple_Intrest(float,float,float);
int main ()
{
    float p,r,t,Intrest;
    printf("\nEnter Princple Amount: ");
    scanf("%f",&p);
    printf("Enter Rate of Intrest: ");
    scanf("%f",&r);
    printf("Enter Time Duraction in Years: ");
    scanf("%f",&t);
    Intrest=Simple_Intrest(p,r,t);
    printf("\nFor Princple amount %2.f at rate of intrest %2.f%% for time duraction of %.2f. SI is %.2f",p,r,t,Intrest);
    printf("\n ");
    return 0;
}

float Simple_Intrest(float p,float r, float t)
{
    float si;
    si=((p*r*t)/100);
    return si;
}