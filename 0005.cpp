#include<stdio.h>
#include<math.h>

int main(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%.6f",pow(pow(a,2.0)+pow(b,2.0),0.5));
}
