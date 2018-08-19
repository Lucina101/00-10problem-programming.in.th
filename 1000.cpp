#include<stdio.h>
#include<string.h>
char a[1005],b[10005],c[10005];
int ans;
int main(){
int x,n;
scanf("%d%d",&x,&n);
bool m=true;
for(int i=1;i<=n;i++){
    if(m){
    int t=0;
    if(i%2==1)
    scanf("%s",a);
    if(i%2==0)
    scanf("%s",b);
    if(i!=1){
    for(int j=0;j<x;j++){
        if(a[j]-b[j]!=0){
        t++;
        }
    }
    if(t>2){
        m=false;
         ans=i;
    }
    }
}
    else scanf("%s",c);
}

if(ans==0&&n!=1)ans=(n-1);
if(ans%2==0)
    printf("%s",a);
else
    printf("%s",b);

}
