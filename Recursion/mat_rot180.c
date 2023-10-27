#include<stdio.h>
void main()
{ int i,left,right,c,r;
int mat[a][b];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
for(i=0;i<c;i++)
{
    left=0;
    right=0;
    while(left<right)
    {
        x=T[i][left];
        y=T[i][right];
        x=x+y;
        y=x-y;
        x=x-y;
        left++;
        right--;
    }
}
}