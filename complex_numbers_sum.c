//WAP to find the sum of n complex numbers using structures and 4 or more functions.

#include <stdio.h>

int input( int size, int num[], int den[])
{
    int i;
    
    for(i=0;i<size;i++)
    {
    	printf("\nEnter the numerator: ");
   	scanf("%d",&num[i]);
    	printf("\nEnter the denominator: ");
    	scanf("%d",&den[i]);
    }
}

int lcm(int a, int b)
{
    int m = 1;
 
    while(m%a || m%b) m++;
 
    return m;
}

int compute(int size,int den[],int num[], int *final_num, int *final_den)
{

//final_den = 0;
int tempNum = 0, tempDen = 0;
tempDen  = den[0];

int i;

for (i = 1; i < size; i++)
{
    tempDen = lcm(tempDen, den[i]);
}

	for(i=0;i<size;i++)
	{	
		tempNum += (tempDen / den[i]) * num[i];
	}
*final_num = tempNum;
*final_den = tempDen;
}

int output(int final_num,int final_den)
{
    printf("\nThe added fraction is %d/%d ",final_num,final_den);
    printf("\n");
}

int main()
{
    int size,final_num,final_den,i;

    printf("\n Enter the number of fractions: ");
    scanf("%d",&size);
    int num[size], den[size];

    input(size,num,den);
	
  
    compute(size,den,num,&final_num, &final_den);

   output(final_num,final_den);

    return 0;
}
