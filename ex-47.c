#include <stdio.h>
int f(int i);

int  main() {

   int i,n;
	scanf("%d",&n);
   for (i=0;i<n;i++){
      printf("%d\t\n",f(i));
   }
	
   return 0;
}int f(int i) {
    if(i == 0) {
      return 0;
   }
	if(i == 1) {
      return 1;
   }
   return f(i-1) + f(i-2);
}
