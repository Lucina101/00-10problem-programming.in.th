#include<stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
    scanf("%d",&a);
    long double l=1;
    for(int i=1;i<=a;i++){
            l*=2.0;
    }
    printf("%0.Lf\n",l);
    }
}
