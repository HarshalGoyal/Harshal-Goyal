//Write a program to add two user input numbers using 4 functions.

#include<stdio.h>

float read_num();

float calc_sum(float  , float );

int display(float );

int main()
{
    read_num();
    return 0;
}

float read_num()
{
    float n1 , n2;
    float sum =0.0;
    printf("Enter two numbers: ");
    scanf("%f %f",&n1,&n2);
    sum = calc_sum(n1,n2);
    display(sum);
}

float calc_sum(float n1,float n2)
{
    float sum = 0.0;
    sum = n1+n2;
    return sum;
}

int display(float sum)
{
    printf("\n Sum of both the numbers is : %.2f \n",sum);
    return 0;
}
