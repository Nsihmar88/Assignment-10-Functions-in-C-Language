/*
    Write a function to calculate the area of a circle. (TSRS)
*/

#include <stdio.h>

float area(float);
int main ()
{
    float radius,a;
    printf("\nEnter value of radius: ");
    scanf("%f",&radius);
    a=area(radius);
    printf("\nArea of Circle is %.2f",a);
    printf("\n ");
    return 0;
}

float area(float c)
{
    c=(3.14159)*(c*c);
    return c;
}