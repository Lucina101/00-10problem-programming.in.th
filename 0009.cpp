#include<stdio.h>


int main(){
int a,b,c,t;
char d[4];
int e[3];
scanf("%d%d%d",&a,&b,&c);
      if ( a > b ) { t = a; a = b; b = t; }
   if ( a > c ) { t = a; a = c; c = t; }
   if ( b > c ) { t = b; b = c; c = t; }
   scanf( "%s", d);
   for(int i=0;i<=2;i++){
        if      ( d[i] == 'A' ) e[i] = a;
      else if ( d[i] == 'B' ) e[i] = b;
      else if ( d[i] == 'C' ) e[i] = c;
   }
   printf("%d %d %d",e[0],e[1],e[2]);
}

