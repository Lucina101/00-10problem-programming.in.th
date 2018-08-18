#include<stdio.h>
#include<math.h>
 int main(){
 float r;
   scanf("%lf", &r );

   printf( "%.6f\n", r * r * 4*atan(1) );
   printf( "%.6f\n", 2.0 * r * r );

   return 0;
   }
