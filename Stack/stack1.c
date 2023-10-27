#include<stdio.h>
int top=-1,stack[20],n,item,choice;
void push()
{
    if(top>=n-1)
    printf("Overflow");
    else
    {
        top=top+1;
        printf("enter the element to be inserted");
        scanf("%d",&item);
        stack[top]=item;
    }
}
int pop()
{
    if(top<=-1)    
    printf("underflow");
    else
    {
        item=stack[top];
        top=top-1;
        return top;
    }
}
void display()
{
    for(int i=0;i<=top;i++)
    printf("%d\n",stack[i]);
}
void main()
{
    printf("enter the capacity");
    scanf("%d",&n);
    do
    {
    printf("\nenter the choice\n1.push\n2.pop\n3.display");
    scanf("%d",&choice);
     switch(choice)
     {
     case 1: push();
     break;
     case 2: pop();
     break;
     case 3: display();
     break;
     default: printf("enter valid choice");
     }
    }while(choice<4);
}

