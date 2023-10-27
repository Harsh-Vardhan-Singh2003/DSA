#include<stdio.h>
struct student
{ 
    int chem_marks;
    int maths_marks;
    int phy_marks;
}s[15];
void main()
{ 
    int i;
    float p[3];
    for(i=0;i<15;i++)
    {
    printf("enter the details of student",i+1);
    scanf("%d%d%d",&s[i].chem_marks,&s[i].maths_marks,&s[i].phy_marks);
    }
    for(i=0;i<15;i++)
    {
        p[i]=(s[i].chem_marks+s[i].maths_marks+s[i].phy_marks)/3;
        printf("percentage is %f\n",p[i]);
    }
}