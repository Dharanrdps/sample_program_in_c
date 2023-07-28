#include <stdio.h>

int main() {
   int a,b,i,f;

   scanf("%d %d", &a,&b);
   while (a < b) {
      f= 0;
      if (a <= 1) {
         ++a;
         continue;
      }
      for (i = 2; i <= a / 2; ++i) {

         if (a%i == 0) {
            f=1;
            break;
         }
      }

      if (f == 0)
         printf("%d ", a);
         ++a;
   }
   return 0;
}
