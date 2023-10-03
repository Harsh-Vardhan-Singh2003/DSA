#include<stdio.h>

//If position is given//
int main()
{
   int i,temp=0, a[56]={7,13,18,17,1,25,22},n=5;
    printf("given array is:");
    for ( i = 0; i <=4; i++)
    {
       printf("%d ",a[i]);
    }
     
      for ( i = 0; i<n/2; i++)
      {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
      }

    printf("new array is : ");
    for ( i = 0; i <=4; i++)
    {
       printf("%d ",a[i]);
    }

    return 0;
}