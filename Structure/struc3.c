#include<stdio.h>
struct student
{ 
    int roll;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
}s[2];
void main()
{ 
    int i;
    for(i=0;i<2;i++)
    {
    printf("enter the details",i+1);
    scanf("%d%s%d%d%d",&s[i].roll,s[i].,&s[i].add);
    printf("%d\n%f",s[i].roll,s[i].age);
    fflush(stdin);
    fgets(s[i].add);
    }
}