//WAP to find the sum of n complex numbers using structures and 4 or more functions.

#include<stdio.h>

struct fract
{
    int num,den;
};


typedef struct fract fraction;


int gcd(int a, int b) 
{ 
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
} 

int lcm(fraction frac[],int n)
{
    int ans = frac[0].den;

    for(int i=1;i<n;i++)
    {
        ans = (((frac[i].den * ans))/(gcd(frac[i].den,ans)));
    }

    return ans;
}

fraction input_one(fraction frac)
{
    printf("\n enter the fraction: ");
    scanf("%d %d",&frac.num,&frac.den);
    return frac;
}

fraction compute_two(fraction frac1, fraction frac2)
{
    fraction temp;
    int lcm_den =(frac1.den,frac2.den);
    temp.num = (frac1.num * (gcd(frac1.num,lcm_den)))+(frac2.num * (gcd(frac2.num,lcm_den)));
    temp.den = lcm_den;
    return temp;
}

fraction display_one(fraction frac)
{
    printf("\n Sum of two fractions is: %d / %d \n",frac.num,frac.den);
}

fraction input_n(fraction fracs[] , int n)
{
    for(int i=0;i<n;i++)
    {
        fracs[i]=input_one(fracs[i]);
    }

    return fracs[n];

}

fraction compute_n(fraction fracs[],int n)
{
    fraction temp;
    int num_temp,reduced_den;
    temp.den = lcm(fracs,n);
    temp.num = 0;
    for(int i=0;i<n;i++)
    {

        num_temp = gcd(fracs[i].den,temp.den);


        if(temp.den == fracs[i].den)
        {
            temp.num += fracs[i].num * 1;
        }
        
        else
        {
            temp.num += fracs[i].num * num_temp;
        }
    }

    
    return temp;
}


int display_res(fraction final_frac)
{
    printf("\n Sum of n fractions in lowest form  : %d / %d \n",final_frac.num,final_frac.den);
    return 0;
}
int main()
{
    int n;
    printf("\n Enter the number of fraction: ");
    scanf("%d",&n);
    fraction fracs[n];
    fracs[n] = input_n(fracs,n);
    fraction final_frac;
    final_frac = compute_n(fracs,n);
    display_res(final_frac);
    return 0;
}
