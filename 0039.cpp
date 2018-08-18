#include<stdio.h>
int n,a[10],b[10],t,l,c[10];

void permu(int x,int *c){
if(x==0) {
    if(c[b[n]]=0){
    for(int i=n;i>(0);i--){
        printf("%d ",b[i]);
    }
    printf("\n");
}
    return;
}
for(int i=1;i<=n;i++){
    if(a[i]==0){
        a[i]=1;
        b[x]=i;
        permu(x-1,c);
        a[i]=0;
    }
}
}

int main(){
int k;
scanf("%d%d",&n,&k);
for(int i=1;i<=k;i++){
    scanf("%d",&l);
    c[l]=l;
}
permu(n,c);



}
