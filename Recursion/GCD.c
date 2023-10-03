#include<stdio.h>
void main()
{
    int hcf(int a,int b)
    {
        if(a/b==0)
        {
            return b;
        }
        else
        {
            return(b,a%b);
        }
    }
int a,b,k;
printf("enter the value of a ");
scanf("%d", &a);
printf("enter the value of b ");
scanf("%d", &b);
k=hcf(a, b);
printf("%d",k);
}

