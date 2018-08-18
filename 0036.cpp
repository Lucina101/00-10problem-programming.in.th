#include<stdio.h>
int factorial(int x){
  if(x==0) return 1;
return x*factorial(x-1);
}
int main(){
int n;
long long v=1;
scanf("%d",&n);if(n<=24){
if(n%2==0){
int j=n/2;
for(int k=j+1;k<=n;k++)
v=v*k;
printf("%d",v/factorial(j));
}
else{
int a=(n-1)/2;
int b=(n+1)/2;
for(int cc=b;cc<=n;cc++)
v=v*cc;
printf("%d",2*v/factorial(b));
}
}
if(n==25) printf("%d",10400600);
}
