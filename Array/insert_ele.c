#include <stdio.h>
void main(){
    int i,e,ps,n,a[50];
    printf("enter no of elements in an array:\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Given array is:\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        printf(" ");
    }
    printf("\n");
    printf("enter new element");
    scanf("%d",&e);
    printf("enter position");
    scanf("%d",&ps);
    for(i=n-1;i<ps;i--){
        a[i+1]=a[i];

    }
    a[ps]=e;
     printf("Given array is:\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        printf(" ");
    }

}