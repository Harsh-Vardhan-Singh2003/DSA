//
//Program for Matrix Subtraction
#include<stdio.h>
void main(){
    int a[10][10],b[10][10],sum[10][10],i,j,r,c;
    printf("enter the number of rows and column:\n");
    scanf("%d%d",&r,&c);
    printf("enter the elements of matrix 1:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of matrix 2:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            sum[i][j]=a[i][j]+b[i][j];

        }
    }
    printf("subtraction of two matrices are:\n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",sum[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}