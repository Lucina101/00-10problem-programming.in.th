#include<stdio.h>
int main(){
int sum[9];
int all=0;
for(int i=0;i<9;i++){
    scanf("%d",&sum[i]);
    all+=sum[i];
}
all-=100;
for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
    if(i!=j){
    if(sum[i]+sum[j]==all){
        sum[i]=0;
        sum[j]=0;
        break;}
    }
    }
    if(sum[i]==0) break;
}
for(int i=0;i<9;i++){
    if(sum[i]!=0)
        printf("%d\n",sum[i]);
}
}
