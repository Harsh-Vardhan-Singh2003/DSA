#include<stdio.h>
void main()
{
int base,top=-1,STACK[20],i,n,R;
printf("Enter the decimal no");
scanf("%d",&n);
printf("Enter the base");
scanf("%d",&base);
while(n!=0)
{
    top=top+1;
    R=n%base;
    n=n/base;
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
    else if(R==16)
    STACK[top]='G';
    else if(R==17)
    STACK[top]='H';
    else if(R==18)
    STACK[top]='I';
    else if(R==19)
    STACK[top]='J';
    else if(R==20)
    STACK[top]='K';
    else if(R==21)
    STACK[top]='L';
    else if(R==22)
    STACK[top]='M';
    else if(R==23)
    STACK[top]='N';
    else if(R==24)
    STACK[top]='O';
    else if(R==25)
    STACK[top]='P';
    else if(R==26)
    STACK[top]='Q';
    else if(R==27)
    STACK[top]='R';
    else if(R==28)
    STACK[top]='S';
    else if(R==29)
    STACK[top]='T';
    else if(R==30)
    STACK[top]='U';
    else if(R==31)
    STACK[top]='V';
    else if(R==32)
    STACK[top]='W';
    else if(R==33)
    STACK[top]='X';
    else if(R==34)
    STACK[top]='Y';
    else if(R==35)
    STACK[top]='Z';
    else
    STACK[top]=R;
}
for(i=top;i>=0;i--)
{
    if(STACK[i]=='A'||STACK[i]=='B'||STACK[i]=='C'||STACK[i]=='D'||STACK[i]=='E'||STACK[i]=='F')
    printf("%c",STACK[i]);
    else
    printf("%d", STACK[i]);
}
}