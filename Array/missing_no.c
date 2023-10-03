#include<stdio.h>
int main()
{
     int i, j, c, b,m, n, a[30];
        printf("Enter the size \n");
        scanf("%d", &n);
 
        printf("Enter the elements \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &a[i]);
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
               if (a[i] > a[j]) 
                {
                    c =  a[i];
                    a[i] = a[j];
                   a[j] = c;
                }
            }
        }
           
          for (i = 0; i < n; ++i) 
        {   b=a[i];
            if(b+1!=a[i+1])
            {
                m=a[i+1]-1;
                break;
            }
        }
        printf("missing number is %d",m);
}