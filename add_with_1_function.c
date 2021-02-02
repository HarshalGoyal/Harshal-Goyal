//Write a program to add two user input numbers using one function.

#include<stdio.h>

int main()
{
    int num1,num2,res;
    printf("\n Enter Number: ");
    scanf("%d",&num1);
    printf("\n Enter Number: ");
    scanf("%d",&num2);
    res = num1+num2;
    printf("\n Sum of %d and %d is : %d \n",num1,num2,res);
    return 0;
}
