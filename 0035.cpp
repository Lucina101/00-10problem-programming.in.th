#include<stdio.h>
#include<algorithm>
using namespace std;
int a[1000],b[1000],x[1000],y[1000],n;
double max1=-1e5;
void permu(int m,int t){
if(m==n-t){
   max1=max(max1,abs(x[a[1]]*y[a[2]]+x[a[2]]*y[a[3]] + x[a[3]]*y[a[1]] - y[a[1]]*x[a[2]] - y[a[2]]*x[a[3]] - y[a[3]]*x[a[1]])/2.00);
    return;
}
for(int j=1;j<=n;j++){
    if(b[j]==0){
    b[j]=1;
    a[n-m+1]=j;
    permu(m-1,t);
    b[j]=0;
    }
}
}
int main()
{   scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&x[i],&y[i]);
    }
    permu(n,3);
    printf("%.3f",max1);

   //choosepermu(5,3);
}
//max1=max(max1,abs(x[a[3]]*y[a[2]]+x[a[2]]*y[a[3]] + x[a[3]]*y[a[1]] - y[a[1]]*x[a[2]] - y[a[2]]*x[a[3]] - y[a[3]]*x[a[1]])/2.0);
