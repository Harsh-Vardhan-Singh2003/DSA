#include <stdio.h>
struct complex {
   int a,b;
} d1, d2, result;

int main() {
   printf("Enter 1st complex no\n");
   printf("Enter value of a: ");
   scanf("%d", &d1.a);
   printf("Enter value of b: ");
   scanf("%d", &d1.b);

   printf("Enter 2nd complex no\n");
   printf("Enter value of a: ");
   scanf("%d", &d2.a);
   printf("Enter value of b: ");
   scanf("%d", &d2.b);
   
   result.a = d1.a + d2.a;
   result.b = d1.b + d2.b;

   printf("\ncomplex no = %d+i%d", result.a, result.b);
   return 0;
}