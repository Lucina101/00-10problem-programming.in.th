#include<bits/stdc++.h>
using namespace std;
const int maxn=1<<20;
int n,x,fuck;
double a[25][25],dp[2][maxn];
int p[25];
vector<int> b[25];

void ss(int sum,int k,int u){
    if(k==n){
        b[u].push_back(sum);
        return;
    }
    sum+=(p[k]);
    ss(sum,k+1,u+1);
    sum-=(p[k]);
    ss(sum,k+1,u);
    return;
}

int main(){
    scanf("%d",&n);
    p[0]=1;
    for(int i=1;i<=21;i++)
        p[i]=p[i-1]<<1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&x);
            a[i][j]=double(x)/(100.0);
        }
    }
        dp[0][0]=1.0,dp[0][1]=1;
    ss(0,0,0);
     for(int i=1;i<=n;i++){
        for(int j=0;j<b[i].size();j++){
            for(int k=0;k<n;k++){
                if(b[i][j]&p[k]){
                    fuck=b[i][j]-p[k];
                    dp[i&1][b[i][j]]=max(dp[i&1][b[i][j]],dp[(i+1)&1][fuck]*a[i][k+1]);
                }
            }
        }
    }
   printf("%.7f",dp[n&1][b[n][0]]*100);
}
