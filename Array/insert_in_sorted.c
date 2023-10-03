#include <stdio.h>
void main(){
    int i,e,ps,n,a[50],pos;
    printf("enter no of elements in an array:\n");
    scanf("%d",&n);
    
    printf("Enter sorted array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Given array is:\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        printf(" ");
    }
    printf("\n");
    printf("Enter new element");
    scanf("%d",&e);
    for(i=0;i<n;i++){
        if(a[i]<e){
            pos=i+1;

        }
    }
     for(i=n-1;i>=pos;i--){
        a[i+1]=a[i];
     }
     a[pos]=e;
          printf("New sorted array is:\n");
    for(i=0;i<n+1;i++){
        printf("%d",a[i]);
        printf(" ");
    }
}