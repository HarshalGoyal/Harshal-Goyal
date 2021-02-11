//WAP to find the volume of a tromboloid using 4 functions.

#include<stdio.h>

float read_parameter();
float calc_vol(float *,float *,float *);
int display(float *);


float read_parameter()
{
    float var;
    printf("\nEnter the value: ");
    scanf("%f",&var);
}

float calc_vol(float* h, float* d, float* b)
{
    float vol = 0.0;
    vol = (1.0/3.0) * ((*h * (*d) * (*b))+((*d)/ (*b)));
    return vol;
}

int display(float* vol)
{
    printf("\n Volume of Tromboloid is: %.2f \n", *vol);
    return 0;
}

int main()
{
    float h,b,d,vol;
    h=read_parameter();
    d=read_parameter();
    b=read_parameter();
    vol = calc_vol(&h,&d,&b);
    display(&vol);

    return 0;
}
