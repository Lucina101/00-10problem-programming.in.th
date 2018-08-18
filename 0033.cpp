#include<stdio.h>
#include<algorithm>
using namespace std;
int n,a[10005],x,i,max1,max2;
int main(){
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d",&x);
    a[x]++;
    max1=max(max1,a[x]);
    max2=max(max2,x);
}
for(i=1;i<=max2;i++){
    if(a[i]==max1)
        printf("%d ",i);
}

}
