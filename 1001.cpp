#include<stdio.h>
int n,m,a[50][50],t;
int main(){
char x;
scanf("%d%d",&n,&m);
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
    scanf(" %c",&x);
    if(x=='O')
        a[i][j]=1;
    else
        a[i][j]=0;
        a[n+1][j]=1;
    }
}
for(int i=1;i<=m;i++){
    scanf("%d",&t);
    bool x=true;
    for(int j=1;j<=n+1&&x;j++){
        if(a[j][i]==1){
             x=false;
            for(int k=j-1;(k>=j-1-t+1)&&(k>=1);k--){
                a[k][i]=2;
            }
        }
    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(a[i][j]==1)
            printf("O");
        else if(a[i][j]==2)
            printf("#");
        else
            printf(".");
    }
    printf("\n");
}
}
