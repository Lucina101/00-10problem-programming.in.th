#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
float k;
if(n==1)
    printf("%0.6f",2.000000);
else if(n%2==0){
    k=n;
    printf("%0.6f",k);
    }
else if(n%2!=0&&n!=1&&n!=3){
        k=n;
    printf("%0.6f",k+0.464102);
    }
if(n==3)
  printf("%0.6f",3.732051);
}

/*#include <stdio.h>
#include <math.h>
int main() {
  int n;
  float k;
  scanf("%d", &n);
  if(n%2==0){
    k=n;
  printf("%0.6f",k);
  }
  if(n%2!=0&&n!=1&&n!=3){
    k=n;
  printf("%0.6f",k+0.464102);
  }
  if(n==1)
  printf("0.6f",2.000000);
  if(n==3)
  printf("%0.6f",3.732051);
}*/
