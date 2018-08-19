#include<stdio.h>
#include<algorithm>
using namespace std;
int ans=100000,n;
int picked[20],sour[20],bitter[20];
int abs(int x){
void pick(int i){
if(i<=n){
    picked[i]=1;
    pick(i+1);
    picked[i]=0;
    pick(i+1);
}
else{//i==n+1
    int counts=0,total_sour=1,total_bitter=0;
    for(int k=1;k<=n;k++){
        if(picked[k]==1){
            total_sour*=sour[k];
            total_bitter+=bitter[k];
            counts++;
        }
    }
    if(counts!=0)
        ans=min(ans,abs(total_sour-total_bitter));
}
}
int main(){
scanf("%d",&n);
for(int j=1;j<=n;j++)
scanf("%d%d",&sour[j],&bitter[j]);
pick(1);
printf("%d",ans);
}
