#include<stdio.h>
int main()
{
int n;
int fact(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
    { 
        return (n*fact(n-1));
    }
}
printf("enter the number to calculate factorial: ");
scanf("%d",&n);
printf("%d",fact(n));
return 0;
}