#include<stdio.h>
void main()
{
int top=-1,STACK[20],i,n,R;
printf("Enter the decimal no");
scanf("%d",&n);
while(n!=0)
{
    R=n%2;
    n=n/2;
    top=top+1;
    STACK[top]=R;
}
for(i=top;i>=0;i--)
{
    printf("%d", STACK[i]);
}
}