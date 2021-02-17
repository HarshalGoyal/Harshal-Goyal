//WAP to find the sum of two fractions.

#include <stdio.h>
#include <math.h>
struct fraction{
    int num, den;
};

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 

void lowest(int den3, int num3) 
{ 

    int common_factor = gcd(num3,den3); 
    den3 = den3/common_factor; 
    num3 = num3/common_factor; 
} 

struct fraction get_prams()
{
    struct fraction p1;
    printf("\nEnter the fraction(num,den): ");
    scanf("%d %d",&p1.num,&p1.den);
    return p1;
}


int main(){
    struct fraction c1,c2;
    int num3,den3;
    c1=get_prams();
    c2=get_prams();
    den3=gcd(c1.den,c2.den);
    den3 = (c1.den*c2.den) / den3;
    num3 = (c1.num)*(den3/c1.den) + (c2.num)*(den3/c2.den);
    lowest(den3,num3);
    printf("\nResultatnt: %d / %d \n",num3,den3);
    return 0;
}
