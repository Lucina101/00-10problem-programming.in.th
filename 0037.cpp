#include<stdio.h>

int main(){
    int n,m,l,k,c,sum=0,x,ans;
    scanf("%d %d %d %d %d",&n,&m,&l,&k,&c);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&x);
            sum+=x;
        }
    }
    ans=(l*k*c+sum)/c;
    if((l*k*c+sum)%c!=0)
            ans++;
    printf("%d",ans);

}
