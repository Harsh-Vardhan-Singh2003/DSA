#include<stdio.h>
void main()
{
int top=-1,STACK[20],i,n,R;
printf("Enter the decimal no");
scanf("%d",&n);
while(n!=0)
{   top=top+1;
    R=n%16;
    if(R==10)
    STACK[top]='A';
    else if(R==11)
    STACK[top]='B';
    else if(R==12)
    STACK[top]='C';
    else if(R==13)
    STACK[top]='D';
    else if(R==14)
    STACK[top]='E';
    else if(R==15)
    STACK[top]='F';
    else
    STACK[top]=R;
    n=n/16;
    
}
for(i=top;i>=0;i--)
{   if(STACK[i]=='A'||STACK[i]=='B'||STACK[i]=='C'||STACK[i]=='D'||STACK[i]=='E'||STACK[i]=='F')
    printf("%c",STACK[i]);
    else
    printf("%d", STACK[i]);
}
}