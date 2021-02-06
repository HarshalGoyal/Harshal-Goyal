//WAP to find the volume of a tromboloid using 4 functions.

#include<stdio.h>

float read_parameters();
float calc_vol(float,float,float);
int display(float);

float read_parameters()
{
    float h,d,b,vol;
    printf("\n Enter the value of h:");
    scanf("%f",&h);
    printf("\n Enter the value of d:");
    scanf("%f",&d);
    printf("\n Enter the value of b:");
    scanf("%f",&b);

    vol = calc_vol(h,d,b);
    display(vol);
    return 0.0;
}

float calc_vol(float h, float d, float b)
{
    float vol = 0.0;
    vol = (1.0/3.0) * ((h*d*b)+(d/b));
    return vol;
}

int display(float vol)
{
    printf("\n Volume of Tromboloid is: %.2f \n",vol);
    return 0;
}

int main()
{
    read_parameters();   
    return 0;
}
