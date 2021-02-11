//Write a program to find the sum of n different numbers using 4 functions

#include<stdio.h>


int readarr(int n,int* arr)
{
    for(int i=0;i<n;i++)
    {
        printf("\n Enter number:");
        scanf("%d",&arr[i]);
    }
    
    return 0;
}

int calc_sum(int n,int* arr)
{
    int sum=0 ;
    for(int i=0;i<n;i++)
  {
      printf("%d \n",arr[i]);
  }
    for(int i=0;i<n;i++)
    {
        sum +=arr[i];
    }
    return sum;
}

int display(int* sum)
{
    printf("\n Sum is: %d \n",*sum);
    return 0;
}


int main()
{
  int n,sum=0;
  printf("Enter the n value: ");
  scanf("%d",&n);
  
  int arr[n];
  readarr(n,arr);
  sum = calc_sum(n,arr);
   display(&sum);
  return 0;
}
