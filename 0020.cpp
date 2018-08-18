#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
int sum=0,maxp=0,winner=0,x;

    for(int i=1;i<=5;i++){
        sum=0;
        for(int j=1;j<=4;j++){
            scanf("%d",&x);
            sum+=x;
        }
        if(sum>maxp) winner=i;
        maxp=max(sum,maxp);
    }
    printf("%d %d",winner,maxp);
}
