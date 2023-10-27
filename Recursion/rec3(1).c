#include<stdio.h>
int DAT[101]={0};
int fib(int n)
{
    if(n==1||n==2)
    return n-1;
    else
    { if(DAT[n==0])
       DAT[n]=fib(n-1)+fib(n-2);
       return DAT[n];
    }
}
int main()
{
    int i,n;
    printf("Enter the range:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d.%d    ",i,fib(i));

}