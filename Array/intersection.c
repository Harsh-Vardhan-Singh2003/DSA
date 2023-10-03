#include<stdio.h>
void main()
{ int i,j,k,m,n,a[100],b[100],c[200],count=0;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the value of m");
scanf("%d",&m);

printf("Enter the elements of 1st sorted array");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
printf("Enter the elements of 2nd sorted array");
        for (j = 0; j< m; j++)
            scanf("%d", &b[j]);
i=0;j=0;k=0;
while(i<n&&j<m)
{
    if(a[i]<b[j])
    {
        i++;
    }
    else if(a[i]==b[j])
    {
        c[k]=a[i];
        i++;
        j++;
        k++;
        count++;
    }
    else
    {
        j++;
    }
}
while(j<m)
{
    j++;
    continue;
}
while(i<n)
{
    i++;
    continue;
}
printf("Intersection of set is\n");
for(k=0;k<count;k++)
    {
        printf("%d\n",c[k]);
    }

}
