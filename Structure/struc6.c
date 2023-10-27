#include <stdio.h>
struct Time {
   int hr,min,sec;
} d1, d2, result;

int main() {
   printf("Enter 1st time\n");
   printf("Enter hour: ");
   scanf("%d", &d1.hr);
   printf("Enter minute:\n");
   scanf("%d", &d1.min);
   printf("Enter second:\n");
   scanf("%d", &d1.sec);
 
   printf("Enter 2nd time\n");
   printf("Enter hour: ");
   scanf("%d", &d2.hr);
   printf("Enter minute:\n");
   scanf("%d", &d2.min);
   printf("Enter second:\n");
   scanf("%d", &d2.sec);
 
   
   result.hr = d1.hr + d2.hr;
   result.min = d1.min + d2.min;
   result.sec = d1.sec + d2.sec;

   while (result.sec >= 60.0) {
      result.sec = result.sec - 60.0;
      result.min++;
   }
   while (result.min >= 60.0) {
      result.min = result.min - 60.0;
      result.hr++;
   }
   printf("\nSum of time %dhr%dmin%dsec", result.hr, result.min,result.sec);
   return 0;
}