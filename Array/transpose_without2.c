//Program for Matrix Transpose w/o using second matrix
#include<stdio.h>
void main(){
    int a[10][10],b[10][10],trans[10][10],i,j,temp,r,c;
    printf("enter the number of rows and column:\n");
    scanf("%d%d",&r,&c);
    printf("enter the elements of matrix 1:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            trans[i][j]=a[i][j];
        }
    }
    printf("the transpose are:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[i][j]);
            printf("\t");

        }
        printf("\n");
    }
}