#include<stdio.h>
int power(int b,int p)
{
    if (p==0)
      {return 1;}
    else
      {return(b*power(b,p-1));}
}
int main()
{
    int b,p,k;
    printf("Enter the base no b");
    scanf("%d",&b);
    printf("Enter the power p");
    printf("%d",&p);
    k=power(b,p);
    printf("%d",k);
}