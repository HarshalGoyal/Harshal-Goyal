//Write a program to find the volume of a tromboloid using one function

#include<stdio.h>

int main()
{
    float h,d,b,vol;
    printf("\n Enter the value of h:");
    scanf("%f",&h);
    printf("\n Enter the value of d:");
    scanf("%f",&d);
    printf("\n Enter the value of b:");
    scanf("%f",&b);
    vol = (1.0/3.0) * ((h*d)+(d/b));
    printf("\n Volume of Tromboloid is: %f \n",vol);
    return 0;
}
