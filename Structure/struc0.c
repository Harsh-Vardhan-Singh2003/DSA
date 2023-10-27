#include<stdio.h>
struct student
{ 
    int roll;
    int age;
    char add[50];
}s[2];
void main()
{ 
    int i;
    for(i=0;i<2;i++)
    {
    printf("enter the details",i+1);
    scanf("%d%d%s",&s[i].roll,&s[i].age,s[i].add);
    printf("%d\n%d",s[i].roll,s[i].age);
    
    }
}